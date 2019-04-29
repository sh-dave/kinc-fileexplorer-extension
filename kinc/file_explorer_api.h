#pragma once

#include <wchar.h>

#if defined(__cplusplus)
extern "C" {
#endif

wchar_t *
kinc_fileexplorer_browseForOpenFolder( wchar_t *title );

wchar_t *
kinc_fileexplorer_browseForOpenFiles( wchar_t *title );

wchar_t *
kinc_filexplorer_browseForSaveFolder( wchar_t *title );

wchar_t *
kinc_filexplorer_browseForSaveFile( wchar_t *title );

#if defined(__cplusplus)
}
#endif
