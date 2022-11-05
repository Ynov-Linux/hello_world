project('helloworld','c', version: '1.0.0')

inc = []
inc += include_directories('inc')
sources = ['src/main.c', 'src/version.c']

subdir('lib')

inc += inc_world

executable('helloworld', sources,
            include_directories: inc,
            link_with: worldlib)
