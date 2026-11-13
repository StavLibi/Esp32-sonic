/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font C:/Users/68sta/OneDrive/Documentos/SonicCore/New folder/assets/ui/fonts/OpenSans-SemiBold.ttf -o C:/Users/68sta/OneDrive/Documentos/SonicCore/New folder/assets/ui/fonts\ui_font_OpenSansSemiBold18.c --format lvgl -r 0x20-0x7E -r 0x0590-0x05FF --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_OPENSANSSEMIBOLD18
#define UI_FONT_OPENSANSSEMIBOLD18 1
#endif

#if UI_FONT_OPENSANSSEMIBOLD18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xc0, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xf3, 0x90,

    /* U+0023 "#" */
    0x11, 0x9, 0x84, 0xc6, 0x6f, 0xf9, 0x90, 0x98,
    0x4c, 0xff, 0xb3, 0x19, 0xc, 0x84, 0xc0,

    /* U+0024 "$" */
    0x10, 0x10, 0x7f, 0xd2, 0xd0, 0xd0, 0xf0, 0x7c,
    0x1e, 0x13, 0x13, 0x96, 0xfc, 0x10, 0x10,

    /* U+0025 "%" */
    0x70, 0xc6, 0xcc, 0x36, 0x61, 0xb2, 0xd, 0xb0,
    0x6d, 0x7b, 0x7e, 0x4e, 0xb3, 0xd, 0x98, 0x4c,
    0xc2, 0x66, 0x33, 0x31, 0xf, 0x0,

    /* U+0026 "&" */
    0x3c, 0xc, 0xc1, 0x98, 0x33, 0x6, 0xe0, 0x78,
    0xe, 0x3, 0xc6, 0xec, 0xd8, 0xf3, 0xe, 0x73,
    0xc3, 0xec,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x33, 0x66, 0xcc, 0xcc, 0xcc, 0xcc, 0x66, 0x33,

    /* U+0029 ")" */
    0xcc, 0x66, 0x33, 0x33, 0x33, 0x33, 0x66, 0xcc,

    /* U+002A "*" */
    0x30, 0x22, 0x5f, 0xf3, 0x8d, 0x3b, 0x0,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0xdb, 0x40,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x6, 0x18, 0x30, 0x61, 0x83, 0x4, 0x18, 0x30,
    0xc1, 0x83, 0xc, 0x0,

    /* U+0030 "0" */
    0x3c, 0x66, 0x42, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0x42, 0x66, 0x3c,

    /* U+0031 "1" */
    0x19, 0xff, 0xb1, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x80,

    /* U+0032 "2" */
    0x78, 0xc4, 0x6, 0x6, 0x6, 0xe, 0xc, 0x1c,
    0x18, 0x30, 0x60, 0xe0, 0xff,

    /* U+0033 "3" */
    0x7c, 0x47, 0x3, 0x3, 0x3, 0x6, 0x38, 0x6,
    0x3, 0x3, 0x3, 0x86, 0xfc,

    /* U+0034 "4" */
    0x6, 0x7, 0x3, 0x83, 0xc3, 0x61, 0xb1, 0x98,
    0xcc, 0xc6, 0x7f, 0xc1, 0x80, 0xc0, 0x60,

    /* U+0035 "5" */
    0x7e, 0x60, 0x60, 0x60, 0x60, 0x7c, 0x6, 0x3,
    0x3, 0x3, 0x3, 0x86, 0xfc,

    /* U+0036 "6" */
    0x1e, 0x30, 0x60, 0x40, 0xc0, 0xdc, 0xe6, 0xc3,
    0xc3, 0xc3, 0x43, 0x66, 0x3c,

    /* U+0037 "7" */
    0xff, 0x3, 0x6, 0x6, 0x6, 0xc, 0xc, 0x1c,
    0x18, 0x18, 0x30, 0x30, 0x30,

    /* U+0038 "8" */
    0x7c, 0xc6, 0xc6, 0xc6, 0xee, 0x7c, 0x3c, 0x6e,
    0xc7, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3, 0x67, 0x7b,
    0x3, 0x2, 0x6, 0xc, 0x78,

    /* U+003A ":" */
    0xc0, 0x0, 0x30,

    /* U+003B ";" */
    0x60, 0x0, 0x1b, 0x48,

    /* U+003C "<" */
    0x1, 0x7, 0x1e, 0x70, 0xc0, 0x70, 0x1e, 0x7,
    0x1,

    /* U+003D "=" */
    0xff, 0x0, 0x0, 0x0, 0xff,

    /* U+003E ">" */
    0x80, 0xe0, 0x78, 0xe, 0x3, 0xe, 0x78, 0xe0,
    0x80,

    /* U+003F "?" */
    0x7c, 0x8c, 0x18, 0x30, 0x61, 0xc7, 0x1c, 0x30,
    0x60, 0x0, 0x3, 0x0,

    /* U+0040 "@" */
    0xf, 0xc1, 0xc3, 0xc, 0xc, 0xcf, 0x3c, 0xd9,
    0xec, 0xcf, 0x66, 0x7b, 0x33, 0xd9, 0xb6, 0x77,
    0x38, 0x0, 0xc0, 0x3, 0xc, 0xf, 0xc0,

    /* U+0041 "A" */
    0xe, 0x7, 0x81, 0xe0, 0x68, 0x1b, 0xc, 0xc3,
    0x30, 0xc6, 0x7f, 0x98, 0x66, 0xf, 0x83, 0xc0,
    0xc0,

    /* U+0042 "B" */
    0xfc, 0xc7, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc7,
    0xc3, 0xc3, 0xc3, 0xc6, 0xfc,

    /* U+0043 "C" */
    0x1f, 0x31, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0x60, 0x70, 0x1f,

    /* U+0044 "D" */
    0xfc, 0x63, 0x30, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0xd8, 0xcf, 0xc0,

    /* U+0045 "E" */
    0xff, 0x83, 0x6, 0xc, 0x18, 0x3f, 0x60, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x18, 0x3f, 0x60, 0xc1,
    0x83, 0x6, 0xc, 0x0,

    /* U+0047 "G" */
    0x1f, 0x98, 0x18, 0x18, 0xc, 0x6, 0x3, 0x1f,
    0x83, 0xc1, 0xe0, 0xd8, 0x6e, 0x31, 0xf8,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0xff,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x18,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x18, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x7e,

    /* U+004B "K" */
    0xc3, 0x63, 0x31, 0x99, 0x8d, 0x87, 0xc3, 0xe1,
    0xf0, 0xcc, 0x67, 0x31, 0x98, 0xec, 0x30,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+004D "M" */
    0xe0, 0x7e, 0x7, 0xf0, 0xff, 0xf, 0xd0, 0xbd,
    0x9b, 0xd9, 0xbc, 0x93, 0xc9, 0x3c, 0xf3, 0xcf,
    0x3c, 0x63, 0xc6, 0x30,

    /* U+004E "N" */
    0xe0, 0xf8, 0x3f, 0xf, 0xe3, 0xd8, 0xf7, 0x3c,
    0xcf, 0x3b, 0xc6, 0xf0, 0xfc, 0x3f, 0x7, 0xc1,
    0xc0,

    /* U+004F "O" */
    0x1e, 0x1c, 0xe6, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x19, 0xce, 0x1e,
    0x0,

    /* U+0050 "P" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x1e, 0x1c, 0xe6, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x19, 0xce, 0x1f,
    0x0, 0xc0, 0x38, 0x6,

    /* U+0052 "R" */
    0xfc, 0x63, 0x30, 0xd8, 0x6c, 0x36, 0x33, 0xf1,
    0x98, 0xc6, 0x63, 0x31, 0xd8, 0x6c, 0x38,

    /* U+0053 "S" */
    0x3e, 0x83, 0x6, 0xe, 0x1f, 0x1f, 0xf, 0xe,
    0xc, 0x1c, 0x6f, 0x80,

    /* U+0054 "T" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+0056 "V" */
    0xc0, 0xf8, 0x66, 0x19, 0x86, 0x61, 0x8c, 0xc3,
    0x30, 0xcc, 0x36, 0x7, 0x81, 0xe0, 0x70, 0xc,
    0x0,

    /* U+0057 "W" */
    0xc1, 0x87, 0x87, 0xd, 0x8e, 0x1b, 0x14, 0x66,
    0x2c, 0xcc, 0xd9, 0x8d, 0xb3, 0x1b, 0x2c, 0x34,
    0x78, 0x78, 0xf0, 0xf1, 0xe0, 0xe3, 0xc1, 0x83,
    0x0,

    /* U+0058 "X" */
    0x61, 0xb1, 0x8c, 0xc6, 0xc1, 0xe0, 0xe0, 0x70,
    0x3c, 0x36, 0x19, 0x98, 0xcc, 0x7c, 0x18,

    /* U+0059 "Y" */
    0x61, 0x98, 0x63, 0x30, 0xcc, 0x33, 0x7, 0x81,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

    /* U+005A "Z" */
    0xff, 0x7, 0x6, 0xe, 0xc, 0x1c, 0x18, 0x38,
    0x30, 0x70, 0x60, 0xe0, 0xff,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xf0,

    /* U+005C "\\" */
    0xc0, 0xc1, 0x83, 0x3, 0x6, 0x4, 0xc, 0x18,
    0x18, 0x30, 0x60, 0x60,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xf0,

    /* U+005E "^" */
    0x8, 0xe, 0x7, 0x6, 0xc3, 0x21, 0x19, 0x84,
    0x83,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0xc6, 0x30,

    /* U+0061 "a" */
    0x7c, 0x8c, 0x18, 0x37, 0xfc, 0xf1, 0xe3, 0xce,
    0xfc,

    /* U+0062 "b" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xdc, 0xe6, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xe6, 0xfc,

    /* U+0063 "c" */
    0x3e, 0xc3, 0x6, 0xc, 0x18, 0x30, 0x60, 0x62,
    0x7c,

    /* U+0064 "d" */
    0x3, 0x3, 0x3, 0x3, 0x3b, 0x67, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0x67, 0x3b,

    /* U+0065 "e" */
    0x3c, 0x66, 0xc3, 0xc3, 0xff, 0xc0, 0xc0, 0xc0,
    0x61, 0x3f,

    /* U+0066 "f" */
    0x3d, 0x86, 0x18, 0xf9, 0x86, 0x18, 0x61, 0x86,
    0x18, 0x61, 0x80,

    /* U+0067 "g" */
    0x3f, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x20, 0x60,
    0x60, 0x3e, 0xc3, 0xc3, 0xc7, 0x7c,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xf, 0xdc, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xc0,

    /* U+0069 "i" */
    0xc0, 0xff, 0xff, 0xf0,

    /* U+006A "j" */
    0x30, 0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3e,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc6, 0xcc, 0xcc, 0xd8,
    0xf8, 0xf8, 0xcc, 0xcc, 0xc6, 0xc7,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0xfd, 0xee, 0x73, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c, 0x63,

    /* U+006E "n" */
    0xfd, 0xcf, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8c,

    /* U+006F "o" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x66, 0x3c,

    /* U+0070 "p" */
    0xdc, 0xe6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xe6, 0xfc, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0071 "q" */
    0x3f, 0x67, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x67, 0x3b, 0x3, 0x3, 0x3, 0x3,

    /* U+0072 "r" */
    0xdf, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x0,

    /* U+0073 "s" */
    0x7f, 0xc, 0x38, 0xf9, 0xf1, 0xc3, 0x8f, 0xe0,

    /* U+0074 "t" */
    0x23, 0x3e, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0x70,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xce,
    0xfc,

    /* U+0076 "v" */
    0xc3, 0xc3, 0x63, 0x66, 0x66, 0x36, 0x34, 0x3c,
    0x1c, 0x18,

    /* U+0077 "w" */
    0xc7, 0x1a, 0x38, 0xd9, 0x4c, 0xca, 0x66, 0xdb,
    0x36, 0xd8, 0xf2, 0x87, 0x1c, 0x38, 0xe1, 0xc7,
    0x0,

    /* U+0078 "x" */
    0x63, 0x66, 0x36, 0x3c, 0x1c, 0x1c, 0x3c, 0x36,
    0x67, 0xe3,

    /* U+0079 "y" */
    0xc3, 0xc7, 0xc6, 0x66, 0x66, 0x6c, 0x3c, 0x3c,
    0x38, 0x18, 0x18, 0x30, 0x30, 0xe0,

    /* U+007A "z" */
    0xfc, 0x31, 0x86, 0x30, 0xc6, 0x18, 0xc3, 0xf0,

    /* U+007B "{" */
    0x1c, 0xc3, 0xc, 0x30, 0xc3, 0x30, 0x30, 0xc3,
    0xc, 0x30, 0xc1, 0xc0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xe0, 0xc3, 0xc, 0x30, 0xc3, 0x3, 0x30, 0xc3,
    0xc, 0x30, 0xce, 0x0,

    /* U+007E "~" */
    0xf1, 0x8f,

    /* U+05B0 "ְ" */
    0xcc,

    /* U+05B1 "ֱ" */
    0xf6, 0x1, 0x98,

    /* U+05B2 "ֲ" */
    0xec, 0x0, 0xc0,

    /* U+05B3 "ֳ" */
    0xed, 0x0, 0xc0,

    /* U+05B4 "ִ" */
    0xc0,

    /* U+05B5 "ֵ" */
    0xf0,

    /* U+05B6 "ֶ" */
    0xf0, 0x30,

    /* U+05B7 "ַ" */
    0xf0,

    /* U+05B8 "ָ" */
    0xe9, 0x0,

    /* U+05B9 "ֹ" */
    0xc0,

    /* U+05BA "ֺ" */
    0xc0,

    /* U+05BB "ֻ" */
    0xc0, 0x80, 0xc3,

    /* U+05BC "ּ" */
    0xc0,

    /* U+05BD "ֽ" */
    0xe0,

    /* U+05BE "־" */
    0xf0,

    /* U+05C1 "ׁ" */
    0xc0,

    /* U+05C2 "ׂ" */
    0xc0,

    /* U+05C7 "ׇ" */
    0xe9, 0x0,

    /* U+05D0 "א" */
    0xc3, 0x63, 0x63, 0x33, 0x7b, 0xdf, 0xce, 0xcc,
    0xc6, 0xc6, 0xc3,

    /* U+05D1 "ב" */
    0xf8, 0x1c, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc,
    0xc, 0xc, 0xff,

    /* U+05D2 "ג" */
    0x78, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x7e,
    0xc0,

    /* U+05D3 "ד" */
    0xff, 0x6, 0xc, 0xc, 0xc, 0xc, 0xc, 0xc,
    0xc, 0xc, 0xc,

    /* U+05D4 "ה" */
    0xfe, 0x7, 0x3, 0x3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+05D5 "ו" */
    0xff, 0xff, 0xfc,

    /* U+05D6 "ז" */
    0xf3, 0x26, 0x66, 0x66, 0x66, 0x60,

    /* U+05D7 "ח" */
    0xfe, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+05D8 "ט" */
    0xdc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c,

    /* U+05D9 "י" */
    0xff, 0xf8,

    /* U+05DA "ך" */
    0xf8, 0x18, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6,
    0xc, 0x18, 0x30, 0x60, 0xc1, 0x80,

    /* U+05DB "כ" */
    0xf8, 0x18, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6,
    0x1b, 0xe0,

    /* U+05DC "ל" */
    0xc1, 0x83, 0x7, 0xf0, 0x60, 0xc3, 0x6, 0xc,
    0x18, 0x60, 0xc1, 0x83, 0x0,

    /* U+05DD "ם" */
    0xfe, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xff,

    /* U+05DE "מ" */
    0xde, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xcf,

    /* U+05DF "ן" */
    0x6d, 0xb6, 0xdb, 0x6d, 0xb6, 0xd8,

    /* U+05E0 "נ" */
    0x70, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xfe,

    /* U+05E1 "ס" */
    0xfc, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x43, 0x66, 0x3c,

    /* U+05E2 "ע" */
    0xc1, 0x31, 0x98, 0xcc, 0x66, 0x31, 0x98, 0xcc,
    0x66, 0x36, 0xe, 0x3e, 0x18, 0x0,

    /* U+05E3 "ף" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xf3, 0x73, 0x3,
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,

    /* U+05E4 "פ" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xe3, 0x73, 0x13,
    0x3, 0x6, 0x7c,

    /* U+05E5 "ץ" */
    0xc7, 0xcd, 0x9b, 0x36, 0x67, 0xcf, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0x6, 0xc, 0x0,

    /* U+05E6 "צ" */
    0xc3, 0x63, 0x63, 0x33, 0x33, 0x1e, 0x1c, 0xc,
    0x6, 0x6, 0xff,

    /* U+05E7 "ק" */
    0xff, 0x3, 0x3, 0x6, 0xc6, 0xc6, 0xcc, 0xcc,
    0xcc, 0xcc, 0xcc, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+05E8 "ר" */
    0xfc, 0x1c, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6,
    0xc, 0x18,

    /* U+05E9 "ש" */
    0xc6, 0x78, 0xcd, 0x19, 0xb3, 0x36, 0xc6, 0xd8,
    0xde, 0x13, 0x86, 0x60, 0xcc, 0x71, 0xf8, 0x0,

    /* U+05EA "ת" */
    0x7f, 0x18, 0xcc, 0x66, 0x33, 0x19, 0x8c, 0xc6,
    0x63, 0x31, 0x98, 0xf8, 0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 64, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 75, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 121, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 8, .adv_w = 163, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 147, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 38, .adv_w = 227, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 182, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 67, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 79, .adv_w = 89, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 87, .adv_w = 89, .box_w = 4, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 95, .adv_w = 139, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 102, .adv_w = 147, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 110, .adv_w = 73, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 112, .adv_w = 88, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 113, .adv_w = 74, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 112, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 147, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 147, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 147, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 147, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 147, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 147, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 147, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 147, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 147, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 147, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 74, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 74, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 147, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 270, .adv_w = 147, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 275, .adv_w = 147, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 284, .adv_w = 114, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 228, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 319, .adv_w = 165, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 167, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 158, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 183, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 134, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 185, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 188, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 79, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 78, .box_w = 5, .box_h = 16, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 445, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 134, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 239, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 198, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 195, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 195, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 559, .adv_w = 162, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 140, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 599, .adv_w = 185, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 614, .adv_w = 158, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 243, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 152, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 147, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 140, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 92, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 709, .adv_w = 112, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 92, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 729, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 738, .adv_w = 126, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 739, .adv_w = 87, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 741, .adv_w = 147, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 159, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 773, .adv_w = 159, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 146, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 91, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 140, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 822, .adv_w = 160, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 73, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 839, .adv_w = 73, .box_w = 4, .box_h = 18, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 848, .adv_w = 145, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 862, .adv_w = 72, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 240, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 881, .adv_w = 160, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 155, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 900, .adv_w = 159, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 914, .adv_w = 159, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 928, .adv_w = 109, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 121, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 98, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 951, .adv_w = 160, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 135, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 970, .adv_w = 210, .box_w = 13, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 987, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 997, .adv_w = 135, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1011, .adv_w = 116, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 108, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1031, .adv_w = 138, .box_w = 2, .box_h = 18, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 1036, .adv_w = 108, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1048, .adv_w = 147, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1050, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1051, .adv_w = 0, .box_w = 7, .box_h = 3, .ofs_x = -3, .ofs_y = -4},
    {.bitmap_index = 1054, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -3, .ofs_y = -4},
    {.bitmap_index = 1057, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 1060, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1061, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 1062, .adv_w = 0, .box_w = 4, .box_h = 3, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 1064, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 1065, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1067, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -1, .ofs_y = 13},
    {.bitmap_index = 1068, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -1, .ofs_y = 12},
    {.bitmap_index = 1069, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = -2, .ofs_y = -5},
    {.bitmap_index = 1072, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -1, .ofs_y = 5},
    {.bitmap_index = 1073, .adv_w = 0, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1074, .adv_w = 89, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 1075, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -1, .ofs_y = 12},
    {.bitmap_index = 1076, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -1, .ofs_y = 12},
    {.bitmap_index = 1077, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 1079, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1090, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1110, .adv_w = 131, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1121, .adv_w = 163, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1132, .adv_w = 72, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1135, .adv_w = 81, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1141, .adv_w = 163, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1152, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1163, .adv_w = 70, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1165, .adv_w = 128, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1179, .adv_w = 124, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1189, .adv_w = 127, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1202, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1213, .adv_w = 165, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1224, .adv_w = 71, .box_w = 3, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1230, .adv_w = 109, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1237, .adv_w = 156, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1248, .adv_w = 153, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1262, .adv_w = 158, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1277, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 135, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1302, .adv_w = 150, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1313, .adv_w = 158, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1328, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1338, .adv_w = 192, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1354, .adv_w = 167, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0x1, 0x6
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1456, .range_length = 15, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1473, .range_length = 7, .glyph_id_start = 111,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 1488, .range_length = 27, .glyph_id_start = 114,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 4,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_OpenSansSemiBold18 = {
#else
lv_font_t ui_font_OpenSansSemiBold18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_OPENSANSSEMIBOLD18*/

