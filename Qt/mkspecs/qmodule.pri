QT_BUILD_PARTS += libs tools
QT_QCONFIG_PATH = 

host_build {
    QT_CPU_FEATURES.i386 =  sse sse2
} else {
    QT_CPU_FEATURES.i386 =  sse sse2
}
QT_COORD_TYPE += double
CONFIG += precompile_header pcre release compile_examples sse2 sse3 ssse3 sse4_1 sse4_2 avx avx2 largefile
QMAKE_QT_VERSION_OVERRIDE = 5
EXTRA_LIBS += -LC:/Utils/my_sql/my_sqlx86/lib -LC:/Utils/postgresqlx86/pgsql/lib
EXTRA_INCLUDEPATH += C:/Utils/my_sql/my_sqlx86/include C:/Utils/postgresqlx86/pgsql/include
sql-plugins    += mysql odbc psql sqlite
styles         += windows fusion windowsxp windowsvista
