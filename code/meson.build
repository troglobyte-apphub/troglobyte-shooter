sdl2_dep = dependency('sdl2')

code_lib = static_library('code_lib',
    'program.c',
    'draw.c',
    'init.c'
    'input.c'
    include_directories: '.',
    dependencies : [sdl2_dep],
    install: true)

code_dep = declare_dependency(
    link_with: code_lib,
    include_directories: '.')

executable('trog-shooter',
    'main.c',
    dependencies: [code_dep],
    install: true)
