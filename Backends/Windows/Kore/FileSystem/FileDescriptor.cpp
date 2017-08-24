#include <Kore/FileSystem/FileDescriptor.hpp>

#include <Kore/Log.h>

#include <Windows.h>

// TODO (DK) implement via common dialog items?
	// https://msdn.microsoft.com/en-us/library/windows/desktop/bb776913(v=vs.85).aspx
namespace Kore { namespace FileSystem {

void FileDescriptor::browseForOpen( const wchar_t * title, std::function<void (const wchar_t *)> then ) {
	wchar_t path[MAX_PATH] = L"";
	OPENFILENAME ofn;
	ZeroMemory(&ofn, sizeof(OPENFILENAME));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.Flags = OFN_FILEMUSTEXIST;
	ofn.lpstrFile = path;
	ofn.lpstrFilter = L"All Files (*.*)\0*.*\0";
	ofn.lpstrTitle = title;
	ofn.nMaxFile = MAX_PATH;

	if (::GetOpenFileName(&ofn)) {
		then(path);
	} else {
		DWORD err = GetLastError();
		Kore::log(Error, "last error: %i", err);
	}
}

void FileDescriptor::browseForSave( const wchar_t * title, std::function<void (const wchar_t *)> then ) {
//	if (::GetSaveFileName(&ofn)) {
//		then(path);
//	}
}

}}
