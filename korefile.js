const project = new Project('Kore-FileSystem', __dirname);

project.addDefine('KORE_FILESYSTEM');
project.addIncludeDir('./');

console.log(`building for "${platform}"`);

switch (platform) {
    case 'windows':
        project.addDefine('KORE_FILESYSTEM_WINDOWS');
        project.addFile('Backends/Windows/**');
        break;
    case 'linux':
        project.addDefine('KORE_FILESYSTEM_LINUX');
        project.addFile('Backends/Linux/**');
        break;
    case 'android':
        project.addDefine('KORE_FILESYSTEM_ANDROID');
        project.addFile('Backends/Empty/**');
        break;
    default:
        const err = `Backend "${platform}" not implemented (yet)`;
        console.log(err);
        reject(err);
}

resolve(project);

// project.addDefine('KORE_WINDOWS');
// addBackend('System/Windows');
// project.addLib('dxguid');
// project.addLib('dsound');
// project.addLib('dinput8');

// project.addDefine('_CRT_SECURE_NO_WARNINGS');
// project.addDefine('_WINSOCK_DEPRECATED_NO_WARNINGS');
// project.addLib('ws2_32');

// project.addFile('Backends/System/Windows/Libraries/DirectShow/**');
// project.addIncludeDir('Backends/System/Windows/Libraries/DirectShow/BaseClasses'
// project.addLibFor('Win32', 'Backends/Graphics5/Vulkan/Libraries/win32/vulkan-1'

// if (platform === Platform.Windows) {
