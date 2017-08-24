#pragma once

#include <functional>

namespace Kore { namespace FileSystem {
	struct FileDescriptor {
		static void browseForOpen( const wchar_t * title, std::function<void (const wchar_t *)> then );
		static void browseForSave( const wchar_t * title, std::function<void (const wchar_t *)> then );
	};
}}
