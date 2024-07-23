#ifndef MINIMAL_COMP__VISIBILITY_CONTROL_H_
#define MINIMAL_COMP__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define MINIMAL_COMP_EXPORT __attribute__ ((dllexport))
    #define MINIMAL_COMP_IMPORT __attribute__ ((dllimport))
  #else
    #define MINIMAL_COMP_EXPORT __declspec(dllexport)
    #define MINIMAL_COMP_IMPORT __declspec(dllimport)
  #endif
  #ifdef MINIMAL_COMP_BUILDING_LIBRARY
    #define MINIMAL_COMP_PUBLIC MINIMAL_COMP_EXPORT
  #else
    #define MINIMAL_COMP_PUBLIC MINIMAL_COMP_IMPORT
  #endif
  #define MINIMAL_COMP_PUBLIC_TYPE MINIMAL_COMP_PUBLIC
  #define MINIMAL_COMP_LOCAL
#else
  #define MINIMAL_COMP_EXPORT __attribute__ ((visibility("default")))
  #define MINIMAL_COMP_IMPORT
  #if __GNUC__ >= 4
    #define MINIMAL_COMP_PUBLIC __attribute__ ((visibility("default")))
    #define MINIMAL_COMP_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define MINIMAL_COMP_PUBLIC
    #define MINIMAL_COMP_LOCAL
  #endif
  #define MINIMAL_COMP_PUBLIC_TYPE
#endif

#endif  // MINIMAL_COMP__VISIBILITY_CONTROL_H_
