PATCH_BEGIN("D2Common.dll", 0xe3fd0984)

/* TODO: 0x5AD5D[0x5AD66, 0x5AD7B] */

PATCH(0x10AF, 0xEB, 0x2B /* jmp short 0x10DC */)
PATCH_REL(0x10EC, div64_clamp32)

PATCH(0x35587, 0xEB, 0x48 /* jmp short 0x355D1 */)
PATCH_REL(0x355DC, div64_clamp32)

PATCH(0x5ADD8, 0xEB, 0x49 /* jmp short 0x5AE23 */)
PATCH_REL(0x5AE2E, div64_clamp32)

PATCH(0x5BB10, 0xEB, 0x12 /* jmp short 0x5BB24 */)
PATCH_REL(0x5BB3B, div64_clamp32)

/**/
PATCH_ORIG(0x10AF, 0x81, 0xFF)
PATCH_ORIG(0x10EC, 0x50, 0x5E, 0x08, 0x00)
PATCH_ORIG(0x35587, 0x81, 0xFE)
PATCH_ORIG(0x355DC, 0x60, 0x19, 0x05, 0x00)
PATCH_ORIG(0x5ADD8, 0x81, 0xFE)
PATCH_ORIG(0x5AE2E, 0x0E, 0xC1, 0x02, 0x00)
PATCH_ORIG(0x5BB10, 0x3D, 0x00)
PATCH_ORIG(0x5BB3B, 0x01, 0xB4, 0x02, 0x00)

PATCH_END()