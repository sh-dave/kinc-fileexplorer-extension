#include <Kore/FileExplorer/FileDescriptor.hpp>

namespace Kore { namespace FileExplorer {

const wchar_t *
FileDescriptor::browseForOpen( const wchar_t * title ) {
	return nullptr;
}

const wchar_t *
FileDescriptor::browseForSave( const wchar_t * title/*, void *(*then)(const wchar_t *)*/ ) {
	return nullptr;
}

}}
