# isse-plus
Repository for tinkering with http://isse.sourceforge.net/ .
For original build instructions, see http://isse.sourceforge.net/wiki/index.php/Developer .

## Changes and updates

The code was initially ported from http://isse.sourceforge.net/. At that time,
manual addition of the submodules was necessary:
	git submodule add https://github.com/julianstorer/JUCE.git sdks/juce
	git submodule add https://github.com/RLovelett/eigen.git sdks/eigen
	git submodule add https://git.code.sf.net/p/isse/extra-code extras

When building from this repository on Github, just running
	git submodule init
	git submodule update
should work.

The JUCE library on which it depends is in the meantime upgraded from 
version 3.1.0 to version 4.3.0. This introduced some errors and namespace 
clashes in the original code. To the best of my ability, these have been
fixed in this repository for MacOSX (no guarantees given for other platforms).
There is now a new Jucer file in the main directory which should be used to
generate a new XCodeProject file from, which will automatically overwrite 
the one imported from the isse/extras submodule.

These are corrected build instructions for FFTW on OSX:
    ./configure CFLAGS="-arch 386" 
    make 
    ./configure --enable-float CFLAGS="-arch 386" 
    make 
    mkdir .libs/32 
    mv .libs/libfftw3.a .libs/32/ 
    mv .libs/libfftw3f.a .libs/32/ 
    ./configure CFLAGS="arch x86_64" 
    make 
    ./configure --enable-float CFLAGS="-arch x86_64" 
    make 
    mkdir .libs/64
    mv .libs/libfftw3.a .libs/64/ 
    mv .libs/libfftw3f.a .libs/64/    
    lipo -create .libs/32/libfftw3.a .libs/64/libfftw3.a -output ./libs/libfftw3.a 
    lipo -create .libs/32/libfftw3f.a .libs/64/libfftw3f.a -output ./libs/libfftw3f.a 
    sudo make install
or if you want to install manually:   
    sudo cp ./libs/libfftw3.a /usr/local/lib/libfftw3.a 
    sudo cp ./libs/libfftw3f.a /usr/local/lib/libfftw3f.a 



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
