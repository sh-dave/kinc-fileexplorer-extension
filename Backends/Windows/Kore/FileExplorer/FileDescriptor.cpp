#include <Kore/FileExplorer/FileDescriptor.hpp>

#include <Kore/Log.h>

#include <Windows.h>

// TODO (DK) implement via common dialog items?
	// https://msdn.microsoft.com/en-us/library/windows/desktop/bb776913(v=vs.85).aspx
namespace Kore { namespace FileExplorer {

//void FileDescriptor::browseForOpen( const wchar_t * title, void *(*then)(const wchar_t *)) {
const wchar_t *
FileDescriptor::browseForOpen( const wchar_t * title ) {
	static wchar_t path[MAX_PATH] = L"";
	OPENFILENAME ofn;
	ZeroMemory(&ofn, sizeof(OPENFILENAME));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.Flags = OFN_FILEMUSTEXIST;
	ofn.lpstrFile = path;
	ofn.lpstrFilter = L"All Files (*.*)\0*.*\0";
	ofn.lpstrTitle = title;
	ofn.nMaxFile = MAX_PATH;

	if (::GetOpenFileName(&ofn)) {
		//then(path);
		return path;
	} else {
		DWORD err = GetLastError();
		Kore::log(Error, "last error: %i", err);
	}

	return nullptr;
}

const wchar_t *
FileDescriptor::browseForSave( const wchar_t * title/*, void *(*then)(const wchar_t *)*/ ) {
//	if (::GetSaveFileName(&ofn)) {
//		then(path);
//	}
	return nullptr;
}

}}
