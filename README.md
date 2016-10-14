# dlopener for Android device bring ups.
Tool to help resolve missing symbols during dlopen

##Description
Proprietary blobs are not always talkative when they fail to load libraries. So this tool
which is mostly based on the way that libhardware loads libraries can tell you what the problem
is whe dlopen(ing) and "*.so" file in android.

## Installation

Just clone this into your Android build at for example:
external/dlopener

Then cd to external/dlopener use the mm command to build it.

Then push it to the device @ /system/bin

## Usage

dlopener /system/lib/whateverlib.so

