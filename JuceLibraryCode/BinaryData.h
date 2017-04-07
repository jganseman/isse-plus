/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#ifndef BINARYDATA_H_39813234_INCLUDED
#define BINARYDATA_H_39813234_INCLUDED

namespace BinaryData
{
    extern const char*   FileIcon_icns;
    const int            FileIcon_icnsSize = 118993;

    extern const char*   ISSEIcon_png;
    const int            ISSEIcon_pngSize = 13222;

    extern const char*   about_txt;
    const int            about_txtSize = 587;

    extern const char*   COPYING;
    const int            COPYINGSize = 35147;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 4;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}

#endif
