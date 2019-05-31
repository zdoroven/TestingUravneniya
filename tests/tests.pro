include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov

DEFINES += INPUTDIR=\\\"$$PWD/input/\\\"

HEADERS +=  ../app/functions.h \
    calculate.h \
    cleararray.h \
    sort.h \
    calculate.h \
    cleararray.h \
    sort.h

SOURCES +=     main.cpp \
	../app/functions.c \
    main.cpp

INCLUDEPATH += ../app

DISTFILES += \
    expected/expected1 \
    expected/expected2 \
    expected/expected3 \
    input/input1 \
    input/input2 \
    input/input3 \
    output/output1 \
    output/output2 \
    output/output3
