#pragma once

#include <functional>

namespace Kore { namespace FileSystem {
	struct FileDescriptor {
		static const wchar_t * browseForOpen( const wchar_t * title ); // , void *(*then)(const wchar_t *) );
		static const wchar_t * browseForSave( const wchar_t * title ); // , void *(*then)(const wchar_t *) );
	};
}}
