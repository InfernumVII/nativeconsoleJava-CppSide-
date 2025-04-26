#include <jni.h>
#include <windows.h>
#include <conio.h>  //For _kbhit and _getch
#include "NativeConsole.h"


JNIEXPORT jint JNICALL Java_com_infernumvii_NativeConsole_readCharImmediately(JNIEnv* env, jclass cls) {
    if (_kbhit()) { //Non-blocking check if key is available
        return _getch(); //Get character without echo
    }
    return -1;
}