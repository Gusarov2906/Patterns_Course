QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        CloseRoundBracketReplacing.cpp \
        DoubleSpaceReplacing.cpp \
        HyphenReplacing.cpp \
        NewLinesReplacing.cpp \
        OpenRoundBracketReplacing.cpp \
        QuotationMarksReplacing.cpp \
        TabReplacing.cpp \
        TextReplacing.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        CloseRoundBracketReplacing.h \
        DoubleSpaceReplacing.h \
        HyphenReplacing.h \
        IReplacing.h \
        NewLinesReplacing.h \
        OpenRoundBracketReplacing.h \
        QuotationMarksReplacing.h \
        TabReplacing.h \
        TextReplacing.h \
        mainwindow.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    mainwindow.ui


