EXTRA_INCLUDEPATH += C:\\opensslx86\\include C:\\Utils\\my_sql\\mysql-5.6.11-win32\\include C:\\Utils\\postgresqlx86\\pgsql\\include
EXTRA_LIBDIR += C:\\opensslx86\\lib C:\\Utils\\my_sql\\mysql-5.6.11-win32\\lib C:\\Utils\\postgresqlx86\\pgsql\\lib
QT_CPU_FEATURES.i386 = sse sse2
QT.global_private.enabled_features = sse2 alloca_malloc_h alloca avx2 dbus gui network sql testlib widgets xml
QT.global_private.disabled_features = alloca_h android-style-assets private_tests dbus-linked gc_binaries libudev posix_fallocate reduce_exports reduce_relocations release_tools stack-protector-strong system-zlib
QT_COORD_TYPE = double
CONFIG += sse2 aesni sse3 ssse3 sse4_1 sse4_2 avx avx2 avx512f avx512bw avx512cd avx512dq avx512er avx512pf avx512vbmi compile_examples f16c force_debug_info largefile precompile_header rdrnd shani x86SimdAlways
QT_BUILD_PARTS += libs tools
QT_HOST_CFLAGS_DBUS += 
