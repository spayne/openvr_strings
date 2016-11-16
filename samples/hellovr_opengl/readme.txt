hellovr_opengl_main.cpp

This sample is modified from the openvr sdk release to demonstrate using std::strings with the openvr_strings library.  Search for the words g_print in hellovr_opengl_main.cpp and you will get the idea.

To build the sample:
====================
You should be able to build it using visual studio.

1. Setup an environment variable: OPENVR_BASE so the compile and link properties point to you ropenvr install

2. Build Win32 debug.  Other configurations should work. 

To run it:
=========
1. First, before you can run,  you need provide a way for you exe to find it's dependent dlls.  The way I did it was to copy all of the dlls from my $OPENVR_BASE/samples/bin/* directory into our samples/bin/* directory.  

So in my case I copied glew32, glut32 icudt52 icuin52, icuuc52.dll, openvr_api.dll and sdl2.dll to my samples/bin/win32 directory.

2. The hellovr_opengl loads cube_texture.png.  Copy it from OPENVR_BASE into your samples/bin

3. You should then be able to debug from within Visual Studio.

