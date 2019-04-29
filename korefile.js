const project = new Project('kore-fileexplorer', __dirname);

project.addDefine('KORE_FILEEXPLORER');
project.addIncludeDir('./');

console.log(`building for "${platform}"`);

switch (platform) {
    case 'windows':
        project.addDefine('KORE_FILEEXPLORER_WINDOWS');
        project.addFile('Backends/Windows/**');
        break;
    case 'linux':
        project.addDefine('KORE_FILEEXPLORER_LINUX');
        project.addFile('Backends/Linux/**');
        break;
    case 'android':
        project.addDefine('KORE_FILEEXPLORER_ANDROID');
        project.addFile('Backends/Empty/**');
        break;
    default:
        const err = `Backend "${platform}" not implemented (yet)`;
        console.log(err);
        reject(err);
}

resolve(project);
