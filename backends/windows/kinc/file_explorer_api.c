// #include <Kore/FileExplorer/FileDescriptor.hpp>

#include <Shlobj_core.h>

// #include <Kore/Log.h>

// #include <Windows.h>

// TODO (DK) implement via common dialog items?
	// https://msdn.microsoft.com/en-us/library/windows/desktop/bb776913(v=vs.85).aspx

wchar_t *
kinc_fileexplorer_browseForOpenFolder( wchar_t *title ) {
	wchar_t path[MAX_PATH];
	BROWSEINFO info;
	memset(&info, 0, sizeof(BROWSEINFO));
	info.pszDisplayName = path;
	PIDLIST_ABSOLUTE browseResult;

	browseResult = SHBrowseForFolder(&info);

	if (browseResult == NULL) { // CANCEL
		return NULL;
	}

	return info.path;
}

wchar_t *
kinc_fileexplorer_browseForOpenFiles( wchar_t *title ) {
	// wchar_t path[MAX_PATH] = L"";
	// OPENFILENAME ofn;
	// ZeroMemory(&ofn, sizeof(OPENFILENAME));
	// ofn.lStructSize = sizeof(OPENFILENAME);
	// ofn.Flags = OFN_FILEMUSTEXIST;
	// ofn.lpstrFile = path;
	// ofn.lpstrFilter = L"All Files (*.*)\0*.*\0";
	// ofn.lpstrTitle = title;
	// ofn.nMaxFile = MAX_PATH;

	// if (::GetOpenFileName(&ofn)) {
	// 	return path;
	// }

	// DWORD err = GetLastError();
	// ::log(Error, "last error: %i", err);
	return NULL;
}

const wchar_t *
kinc_fileexplorer_browseForSaveFolder( wchar_t * title/*, void *(*then)(const wchar_t *)*/ ) {
//	if (::GetSaveFileName(&ofn)) {
//		then(path);
//	}
	return NULL;
}

const wchar_t *
kinc_fileexplorer_browseForSaveFile( wchar_t * title/*, void *(*then)(const wchar_t *)*/ ) {
//	if (::GetSaveFileName(&ofn)) {
//		then(path);
//	}
	return NULL;
}
