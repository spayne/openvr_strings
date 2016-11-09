tracked_camera_openvr_sample

This sample is modified from the openvr sdk release to demonstrate using QStrings with the openvr_strings library.

(The modifications were: 1.  To the .pro file to reference the openvr sources based on an environment variable and to include the openvr_strings into this project.  2.  Three string handling functions in tracked_camera_openvr_sample were changed to use openvr_strings functions instead of the Qt ones.) 


To build the sample:
====================
1. Setup an environment variable: OPENVR_BASE so the qmake build script can find the openvr headers

2. Open tracked_camera_openvr_sample.pro in Qt Creator

3. Qt Creator may prompt you about generating a configuration.  Accept the defaults. 

4. From the gui select Build|Run qmake. This builds the make environment. No errors should be reported.  If you do have errors, have a look at the .pro file and check that your OPENVR_BASE directory variable is set.

5. From the qtcreator GUI, run Build|Build All.  Some unused variable warnings will be shown, but it should build fine.

To run it:
=========
1. First, before you can run,  you need provide a way for you exe to find it's dependent dlls.  The way I did it was to copy all of the dlls from my $OPENVR_BASE/samples/bin/* directory into our samples/bin/* directory.  

So in my case I copied glew32, glut32 icudt52 icuin52, icuuc52.dll, openvr_api.dll and sdl2.dll to my samples/bin/win32 directory.

2. Then, from qtcreator gui, you can click on the play or debug button and you should see video from your hmd streaming into the gui window.  Matrix and velocity vectors on the right hand side are formatted with openvr_strings functions.

