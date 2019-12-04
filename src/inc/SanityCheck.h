/**
 * File: Version.h
 * Author: Daniel Rehbein
 * File Date: 191204
 * File Version: 0.01
 * Description: Config Test File for SkyGimbal Project.
 * Tests configuration values for errors during compilation.
*/

#pragma once

/**
 * Require gcc 4.7 or newer (first included with Arduino 1.6.8) for C++11 features.
 */
#if __cplusplus < 201103L
  #error "SkyGimbal requires C++11 support (gcc >= 4.7, Arduino IDE >= 1.6.8). Please upgrade your toolchain."
#endif

/**
 * We try our best to include sanity checks for all changed configuration
 * directives because users have a tendency to use outdated config files with
 * the bleeding-edge source code, but sometimes this is not enough. This check
 * forces a minimum config file revision. Otherwise SkyGimbal will not build.
 */

// #define HEXIFY(H) _CAT(0x,H)
// #ifndef (CONFIGURATION_H_VERSION) || HEXIFY(CONFIGURATION_H_VERSION) < HEXIFY(REQUIRED_CONFIGURATION_H_VERSION)
//   #error "You are using an old Configuration.h file, update it before building SkyGimbal."
// #endif

// #ifndef (CONFIGURATION_ADV_H_VERSION) || HEXIFY(CONFIGURATION_ADV_H_VERSION) < HEXIFY(REQUIRED_CONFIGURATION_ADV_H_VERSION)
//   #error "You are using an old Configuration_adv.h file, update it before building SkyGimbal."
// #endif
// #undef HEXIFY