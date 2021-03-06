static const q31_t in_angles[23] = {
    0x00000000, 0x10000000, 0x20000000, 0x30000000,
    0x40000000, 0x50000000, 0x60000000, 0x7FFFFEAA,
    0xF0000000, 0xE0000000, 0xD0000000, 0xC0000000,
    0xB0000000, 0xA0000000, 0x80000000, 0x00000000,
    0x10000000, 0x20000000, 0x30000000, 0x40000000,
    0x50000000, 0x60000000, 0x7FFFFEAA
    };

static const q31_t in_sqrt[8] = {
    0xCCCCCCCD, 0x00000000, 0x0CCCCCCD, 0x7FFFFFFF,
    0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF
    };

static const q31_t ref_cos[23] = {
    0x7FFFFFFF, 0x5A82799A, 0x00000000, 0xA57D8666,
    0x80000000, 0xA57D8666, 0x00000000, 0x7FFFFFFF,
    0x5A82799A, 0x00000000, 0xA57D8666, 0x80000000,
    0xA57D8666, 0x00000000, 0x7FFFFFFF, 0x7FFFFFFF,
    0x5A82799A, 0x00000000, 0xA57D8666, 0x80000000,
    0xA57D8666, 0x00000000, 0x7FFFFFFF
    };

static const q31_t ref_sin[23] = {
    0x00000000, 0x5A82799A, 0x7FFFFFFF, 0x5A82799A,
    0x00000000, 0xA57D8666, 0x80000000, 0xFFFFF79D,
    0xA57D8666, 0x80000000, 0xA57D8666, 0x00000000,
    0x5A82799A, 0x7FFFFFFF, 0xFFFFF79D, 0x00000000,
    0x5A82799A, 0x7FFFFFFF, 0x5A82799A, 0x00000000,
    0xA57D8666, 0x80000000, 0xFFFFF79D
    };

static const q31_t ref_sqrt[8] = {
    0x00000000, 0x00000000, 0x287A26C5, 0x7FFFFFFF,
    0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF, 0x7FFFFFFF
    };

