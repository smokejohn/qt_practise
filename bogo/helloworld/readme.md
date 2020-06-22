# QDebug usage on Linux systems

If you get no "Hello World" output from the binary on a linux system, it might be due to the systems debug logging settings for QT.
you can globally set the debug logging rules via a configuration file.

create or edit the `qtlogging.ini` file at `~/.config/QtProject/qtlogging.ini` and add:
```
[Rules]
*.debug=true
qt.qpa.input*.debug=false
```
[>> Stackoverflow thread discussing this issue <<](https://stackoverflow.com/questions/30583577/qt-qdebug-not-working-with-qconsoleapplication-or-qapplication)

This is a global ruleset so it will enable debug message for all Qt Applications you are launching
