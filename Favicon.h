#ifndef Favicon_h
#define Favicon_h

#include <Arduino.h>

// Byte array of favicon
// https://littlevgl.com/image-to-c-array 
// Colour format: RAW
PROGMEM const char FAVICON_DATA[] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x08, 0x06, 0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 
	0x61, 0x00, 0x00, 0x01, 0xd4, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0x63, 0x64, 0xa0, 0x10, 0x30, 
	0x62, 0x13, 0x54, 0x16, 0x63, 0xe2, 0xca, 0x70, 0xe6, 0x88, 0x31, 0x90, 0x67, 0xb6, 0xfa, 0x2f, 
	0xf7, 0x8f, 0xf1, 0xe2, 0xad, 0xbf, 0xc7, 0x66, 0xae, 0xf9, 0xb5, 0xf8, 0xce, 0x93, 0x7f, 0xdf, 
	0x08, 0x1a, 0xe0, 0x63, 0xc8, 0xaa, 0x3e, 0x2f, 0x95, 0x67, 0x1b, 0x27, 0x1b, 0xa3, 0x12, 0x88, 
	0xff, 0x4f, 0xe3, 0x2f, 0x58, 0xfc, 0xc7, 0xcf, 0xff, 0xf7, 0xd2, 0x9a, 0xbe, 0x79, 0x6f, 0x3c, 
	0xf8, 0xe7, 0x06, 0x4e, 0x03, 0xe4, 0x84, 0x99, 0x38, 0x4e, 0x37, 0xf1, 0x5f, 0xe2, 0x62, 0x67, 
	0x54, 0x85, 0x89, 0xc1, 0x0c, 0x00, 0x81, 0xef, 0x3f, 0xfe, 0xdf, 0xb1, 0x8c, 0xfb, 0xa2, 0x7b, 
	0xff, 0xd9, 0xbf, 0x1f, 0x58, 0x0d, 0x68, 0x0e, 0xe1, 0x4c, 0x2c, 0xf0, 0xe0, 0x9c, 0x87, 0x2c, 
	0x86, 0x6c, 0x00, 0x08, 0x4c, 0x59, 0xfe, 0x33, 0xa9, 0x7a, 0xea, 0x8f, 0xf9, 0x58, 0x0d, 0xd8, 
	0x5a, 0xc2, 0x3b, 0xd7, 0x4e, 0x83, 0x35, 0xe9, 0xef, 0x4f, 0x66, 0x86, 0xff, 0xff, 0x18, 0x19, 
	0xfe, 0xfd, 0x65, 0x62, 0xf8, 0x2f, 0xf1, 0x8f, 0x81, 0x91, 0x03, 0x88, 0x59, 0xfe, 0x33, 0x30, 
	0x0b, 0xfc, 0x61, 0x38, 0x7e, 0xe1, 0xcf, 0x7c, 0x8f, 0x9c, 0xaf, 0x49, 0x58, 0x0d, 0xd8, 0x51, 
	0xc6, 0xbb, 0xd0, 0x5a, 0x8d, 0x35, 0xee, 0xf7, 0x57, 0x56, 0x86, 0xff, 0xff, 0x19, 0x19, 0x98, 
	0x98, 0xff, 0x31, 0xfc, 0x93, 0xfd, 0xc7, 0xf0, 0xff, 0x07, 0x13, 0xd8, 0x00, 0x16, 0x89, 0x5f, 
	0x0c, 0x27, 0x2f, 0xff, 0x59, 0xe4, 0x96, 0xf9, 0x35, 0x1e, 0xab, 0x01, 0x4d, 0xc1, 0x9c, 0x09, 
	0x85, 0x9e, 0x9c, 0xf3, 0xff, 0xfe, 0x06, 0x6a, 0x60, 0xfc, 0xcf, 0xc0, 0x04, 0xd4, 0x04, 0xf2, 
	0xc2, 0xbf, 0xef, 0x4c, 0x0c, 0x0c, 0x7f, 0x81, 0x06, 0xf2, 0xfc, 0x65, 0x98, 0xb2, 0xec, 0x67, 
	0x62, 0xf5, 0xb4, 0x1f, 0x0b, 0xb0, 0x1a, 0x20, 0x25, 0xc0, 0xc8, 0x76, 0xae, 0x55, 0xe0, 0x0a, 
	0x37, 0x30, 0x10, 0xff, 0x7c, 0x67, 0x61, 0x60, 0xe1, 0xfc, 0x03, 0x36, 0xe0, 0xcf, 0x6b, 0x56, 
	0x06, 0x16, 0xd1, 0xdf, 0x0c, 0xdf, 0xbe, 0xff, 0xbf, 0x6d, 0x1a, 0xfd, 0x59, 0xe7, 0xc9, 0xab, 
	0xff, 0xbf, 0x70, 0x46, 0x63, 0x9a, 0x23, 0xbb, 0x4d, 0x6f, 0x34, 0xf7, 0x7e, 0xa0, 0x01, 0x2c, 
	0x28, 0x06, 0x88, 0xfc, 0xfe, 0x53, 0x31, 0xf1, 0xbb, 0xe3, 0xf4, 0x35, 0xbf, 0x8e, 0x10, 0x4c, 
	0x48, 0xab, 0x72, 0x79, 0x9a, 0xdc, 0xb4, 0x38, 0x6a, 0x41, 0xde, 0xf8, 0xa7, 0xfc, 0x0f, 0xec, 
	0xfc, 0x7d, 0x97, 0x7f, 0xb4, 0x04, 0x97, 0x7e, 0xab, 0x25, 0x2a, 0x25, 0x2a, 0x4a, 0xf1, 0xb2, 
	0x4f, 0xee, 0xc8, 0xf8, 0xfe, 0xef, 0x2f, 0x23, 0xa3, 0xb4, 0xac, 0x28, 0x03, 0x23, 0xfb, 0xbf, 
	0xff, 0x91, 0xf1, 0x1d, 0x9c, 0x37, 0xef, 0xbd, 0xff, 0x49, 0x94, 0x01, 0x20, 0xd0, 0x36, 0x65, 
	0xea, 0x7f, 0x10, 0x2d, 0x23, 0x2d, 0x03, 0xe6, 0xc7, 0x05, 0xfa, 0x63, 0x55, 0x4b, 0x3b, 0x03, 
	0xca, 0x9b, 0x5b, 0x56, 0x8b, 0x49, 0x4a, 0xfa, 0x48, 0x8b, 0x88, 0x31, 0xbc, 0x7d, 0xf5, 0x6a, 
	0x73, 0x76, 0x5a, 0x72, 0x18, 0x49, 0x06, 0x80, 0x80, 0x86, 0x8e, 0x8e, 0x36, 0x23, 0x23, 0x23, 
	0xc3, 0xf5, 0xcb, 0x97, 0xaf, 0xe2, 0x52, 0x03, 0x00, 0x62, 0x15, 0xbd, 0x11, 0xa4, 0xc1, 0x2d, 
	0x07, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82, 
};

#endif