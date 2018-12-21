project('recv', 'c',
    default_options : [
    'warning_level=3',
    'buildtype=debugoptimized',],
    version : '0.0.1',
    license : 'GPL')

cc = meson.get_compiler('c')

volk_dep = dependency('volk')

c_args = ['-mcpu=cortex-a53', '-mfpu=neon-fp-armv8', '-mfloat-abi=hard', '-funsafe-math-optimizations',]
add_global_arguments(c_args, language : 'c')

executable('tester',
    ['tujavolk.c', 'main.c',],
    dependencies: [volk_dep,])

shared_library('tujavolk', 'tujavolk.c',
    dependencies: [volk_dep,])
