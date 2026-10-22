"""Retype the generated `flt_` / `dbl_` accessor macros to float / double.

gen_data_header.py chose the C type from the WIDTH of the symbol alone:

    PREFIX_WIDTH = {"flt_": 4, "dbl_": 8, ...}
    CTYPE        = {4: "int32_t", 8: "int64_t"}

so every `flt_` accessor was emitted as

    #define flt_60C5D5B0 (*(int32_t *)(uintptr_t)(0x60000000u + 0x60C5D5B0u))

That reads the four bytes of a float as an int32_t. Compiled silently, it turns

    float scale = (kind == 0x3B) ? flt_60C5D5B0 : flt_60C5D5B4;

into an integer load converted to float -- 1065353216.0f instead of 1.0f. 1,214 accessors are affected, and the
`arr_flt_` pointer forms have the same defect.

The width is right; only the element type is wrong. Fixed here in the header, and the same mapping needs to be
used if the header is ever regenerated from scratch.
"""
import re

DATA = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\include\nsmbudx_data.h"


def main():
    text = open(DATA, encoding="utf-8", errors="replace").read()

    n_flt = len(re.findall(r"#define flt_(\w+)(\s+)\(\*\(int32_t \*\)", text))
    n_dbl = len(re.findall(r"#define dbl_(\w+)(\s+)\(\*\(int64_t \*\)", text))
    n_aflt = len(re.findall(r"#define arr_flt_(\w+)(\s+)\(\(int32_t \*\)", text))
    n_adbl = len(re.findall(r"#define arr_dbl_(\w+)(\s+)\(\(int64_t \*\)", text))

    text = re.sub(r"#define (flt_\w+)(\s+)\(\*\(int32_t \*\)", r"#define \1\2(*(float *)", text)
    text = re.sub(r"#define (dbl_\w+)(\s+)\(\*\(int64_t \*\)", r"#define \1\2(*(double *)", text)
    text = re.sub(r"#define (arr_flt_\w+)(\s+)\(\(int32_t \*\)", r"#define \1\2((float *)", text)
    text = re.sub(r"#define (arr_dbl_\w+)(\s+)\(\(int64_t \*\)", r"#define \1\2((double *)", text)

    open(DATA, "w", encoding="utf-8", newline="").write(text)
    print("flt_ -> float: %d    dbl_ -> double: %d" % (n_flt, n_dbl))
    print("arr_flt_ -> float*: %d    arr_dbl_ -> double*: %d" % (n_aflt, n_adbl))


if __name__ == "__main__":
    main()
