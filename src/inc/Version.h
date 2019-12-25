/**
 * File: Version.h
 * Author: Daniel Rehbein
 * File Date: 191225
 * File Version: 1.0.01
 * Description: Version Control File for SkyGimbal Project
*/

#pragma once

/**
* Release Version. Leave the SkyGimbal version or apply a custom scheme.
*/

#ifndef SHORT_BUILD_VERSION
  #define SHORT_BUILD_VERSION "0.0.1.x"
#endif

/**
 * Verbose version identifier containing a unique identifier, such as the
 * vendor name, download location, GitHub account, etc.
 */
#ifndef DETAILED_BUILD_VERSION
  #define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION " (GitHub)"
#endif

/**
 * Minimum Configuration.h and Configuration_adv.h file versions.
 * Set based on the release version number. Used to catch an attempt to use
 * older configurations. Override these if using a custom versioning scheme
 * to alert users to major changes.
 */

#define SKYGIMBAL_HEX_VERSION 000001
#ifndef REQUIRED_CONFIGURATION_H_VERSION
  #define REQUIRED_CONFIGURATION_H_VERSION SKYGIMBAL_HEX_VERSION
#endif
#ifndef REQUIRED_CONFIGURATION_ADV_H_VERSION
  #define REQUIRED_CONFIGURATION_ADV_H_VERSION SKYGIMBAL_HEX_VERSION
#endif

/**
 * The protocol for communication to the host. Protocol indicates communication
 * standards such as the use of ASCII, "echo:" and "error:" line prefixes, etc.
 * (Other behaviors are given by the firmware version and capabilities report.)
 */
#ifndef PROTOCOL_VERSION
  #define PROTOCOL_VERSION "1.0"
#endif

/**
 * Define a generic SkyGimbal name to be output to the LCD after booting SkyGimbal.
 */
#ifndef MACHINE_NAME
  #define MACHINE_NAME "SkyGimbal :)"
#endif

/**
 * Website where users can find Marlin source code for the binary installed on the
 * device. Override this if you provide public source code download. (GPLv3 requires
 * providing the source code to your customers.)
 */
#ifndef SOURCE_CODE_URL
  #define SOURCE_CODE_URL "https://github.com/flyingguitarman/"
#endif

/**
 * Default generic printer UUID.
 */
#ifndef DEFAULT_MACHINE_UUID
  #define DEFAULT_MACHINE_UUID "bf94ef34-495c-47b0-b47d-e660d4194d77"
#endif  
/**   
 * 
 * The WEBSITE_URL is the location where users can get more information 
 * such as documentation about a specific SkyGimbal release.
 * Displayed in the InfoMenu. 
 * */
#ifndef WEBSITE_URL
  #define WEBSITE_URL "test.com"
#endif

// /**
//  * Set the vendor info the serial USB interface, if changable
//  * Currently only supported by DUE platform
//  */
// #ifndef USB_DEVICE_VENDOR_ID
//   #define  USB_DEVICE_VENDOR_ID           0x03EB /* ATMEL VID */
// #endif
// #ifndef USB_DEVICE_PRODUCT_ID
//   #define  USB_DEVICE_PRODUCT_ID          0x2424 /* MSC / CDC */
// #endif
// //! USB Device string definitions (Optional)
// #ifndef USB_DEVICE_MANUFACTURE_NAME
//   #define  USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
// #endif
// #ifdef CUSTOM_MACHINE_NAME
//   #define  USB_DEVICE_PRODUCT_NAME        CUSTOM_MACHINE_NAME
// #else
//   #define  USB_DEVICE_PRODUCT_NAME        MACHINE_NAME
// #endif
// #define  USB_DEVICE_SERIAL_NAME           "123985739853"