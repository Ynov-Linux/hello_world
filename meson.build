project('helloworld','c', version: '1.0.0')

inc = include_directories('inc')
sources = ['src/main.c', 'src/version.c']

subdir('lib')

executable('helloworld', sources,
            include_directories: inc)
