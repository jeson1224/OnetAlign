TEMPLATE = subdirs
SUBDIRS += \
           Service \
           src/SARibbonBar \
           src/OnetAlign/MainWindow \
 #           src/example/UiPluginLoaderTest
#    src/example/UseDesginerMainWindowExample

CONFIG += ordered

OTHER_FILES += \
           readme.md \
           doc/saribbon-guide.md \
