cd "C:\Jenkins\jobs\Jenkins_Val\workspace\testunit"
 
call "C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\bin\vcvars32.bat"
SET PATH=%PATH%;C:\Qt\4.7.4\bin
 
call qmake -r -spec win32-msvc2008 CONFIG+=debug DEFINES+=UNIT_TESTS CONFIG-=console
call jom debug

call debug\testunit.exe -xunitxml -o unit.xml

call qmake -r -spec win32-msvc2008 CONFIG+=release CONFIG-=console
call jom release

