# isse-plus
Repository for tinkering with http://isse.sourceforge.net/ .
For original build instructions, see http://isse.sourceforge.net/wiki/index.php/Developer .

## TL;DR build instructions
```
	git submodule init
	git submodule update
```
Then, for OSX:
- Open `sdks/juce/extras/Projucer/Builds/MacOSK/Projucer.xcodeproj`, build and run Projucer
- open `ISSE.jucer` in Projucer
- click `Save project and open in IDE`, and select MacOSX
- in the opened ISSE Xcode project, first set the `deployment target` to match your system
- The packaging script fails (see issue #1) but the build itself is in `extras/builds/MacOSX/build/Debug` 

## Changes and updates

The code was initially ported from http://isse.sourceforge.net/. At that time,
manual addition of the submodules was necessary:
```
	git submodule add https://github.com/julianstorer/JUCE.git sdks/juce
	git submodule add https://github.com/RLovelett/eigen.git sdks/eigen
	git submodule add https://git.code.sf.net/p/isse/extra-code extras
```

Now, when building from this repository on Github, first running
```
	git submodule init
	git submodule update
```
should work.

Most of the changes done to the ISSE core pertain to an update of JUCE. See commit `f7c26bd1ac1a4a8960c520e1ce342caa5dda2a1a` for details. This includes mostly: 
- renaming a few classes to resolve namespace clashes with new JUCE functionality (e.g. regarding FFT)
- updating function calls after function signature updates: removing deprecated / adding new parameters etc.
- an update to the generated JUCE config files, related to a newer version of Projucer.

The project depends on FFTW, and builds by default as a "fat binary" for
i386 and x86_64. FFTW therefore needs to be built as fat binary on your 
system as well. These are corrected manual build instructions for FFTW on OSX:
```
    ./configure CFLAGS="-arch 386"
    make 
    ./configure --enable-float CFLAGS="-arch 386" 
    make 
    mkdir .libs/32 
    mv .libs/libfftw3.a .libs/32/ 
    mv .libs/libfftw3f.a .libs/32/ 
    ./configure CFLAGS="-arch x86_64" 
    make 
    ./configure --enable-float CFLAGS="-arch x86_64" 
    make 
    mkdir .libs/64
    mv .libs/libfftw3.a .libs/64/ 
    mv .libs/libfftw3f.a .libs/64/    
    lipo -create .libs/32/libfftw3.a .libs/64/libfftw3.a -output ./libs/libfftw3.a 
    lipo -create .libs/32/libfftw3f.a .libs/64/libfftw3f.a -output ./libs/libfftw3f.a 
    sudo make install
```
or to install manually, instead of that last line:
```
    sudo cp ./libs/libfftw3.a /usr/local/lib/libfftw3.a 
    sudo cp ./libs/libfftw3f.a /usr/local/lib/libfftw3f.a 
```

Then, to build ISSE, on OSX:
- build and run `sdks/juce/extras/Projucer/Builds/MacOSK/Projucer.xcodeproj`
- open `ISSE.jucer` in Projucer
- click `Save project and open in IDE`, and select MacOSX
- in the opened ISSE Xcode project, first set the deployment target to match your system

Known issues:
- script src/post-build-osx.sh does not run (and package the app) yet. Builds appear in `extras/builds/MacOSX/build/Debug`


## Original ISSE README 

ISSE - Interactive Sound Source Separation Editor (pronounced 'ice')
 
About: 

ISSE is an interactive sound source separation editor.  It allows you to 
import a single audio recording and separate into two distinct sound sources
via drawing and painting tools.  Example tasks include separating a cell 
phone ring from recorded speech, separating drums mixed with bass guitar, 
or separating vocals from background music. See demo videos for more 
information.

Authors: 

Nicholas J. Bryan (njb@ccrma.stanford.edu)
Gautham J. Mysore (gmysore@adobe.com)
Ge Wang (ge@ccrma.stanford.edu)

What this distribution includes:
  - Source Code, JUCE Project, Xcode Project, Visual Studio Project, 
    Makefiles, Audio/Image Resources
  - License

Currently supported platforms:
  - Mac OSX, Windows (XP, Vista, 7, 8), Linux

Homepage:
    http://isse.sourceforge.net
