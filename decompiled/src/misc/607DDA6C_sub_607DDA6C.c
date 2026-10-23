/* sub_607DDA6C
 * address: 0x607DDA6C   size: 1188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DDA6C(_DWORD *a1, unsigned int a2, unsigned int a3, float a4, float a5, float a6, float a7)
{
  unsigned int v7; // r5
  const char *v13; // r1
  int result; // r0
  int v15; // r0
  int v16; // r1
  double v17; // d11
  unsigned int v18; // r0
  int v19; // [sp+4h] [bp-54h] BYREF
  const char *v20; // [sp+8h] [bp-50h]
  const char *v21; // [sp+Ch] [bp-4Ch]
  char *v22; // [sp+10h] [bp-48h]
  int v23; // [sp+14h] [bp-44h]
  int v24; // [sp+18h] [bp-40h]
  char v25; // [sp+1Ch] [bp-3Ch]
  int v26; // [sp+20h] [bp-38h]
  int v27; // [sp+24h] [bp-34h]

  v7 = a2;
  if ( a2 - 4000 >= 0xABE1 )
  {
    v19 = 49;
    v20 = "D:/home/Project/RedPro-S/App/Program/Rumble/VibrationEncoder.cpp";
    v21 = "Init";
    v22 = &byte_60ABC94D;
    v23 = 1;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v13 = "Sampling rate (%u) must be in [%u; %u]\n";
LABEL_7:
    nn__diag__detail__LogImpl(&v19, v13);
    return 3587;
  }
  if ( a3 - 4000 >= 0xABE1 )
  {
    v19 = 54;
    v20 = "D:/home/Project/RedPro-S/App/Program/Rumble/VibrationEncoder.cpp";
    v21 = "Init";
    v22 = &byte_60ABC94D;
    v23 = 1;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v13 = "Resampling rate (%u) must be in [%u; %u]\n";
    goto LABEL_7;
  }
  if ( a3 % 0xC8 )
  {
    v19 = 59;
    v20 = "D:/home/Project/RedPro-S/App/Program/Rumble/VibrationEncoder.cpp";
    v21 = "Init";
    v22 = &byte_60ABC94D;
    v23 = 1;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    nn__diag__detail__LogImpl(&v19, "Resampling rate (%u) must be a multiple of 200\n", a3);
    return 3587;
  }
  v15 = a2 / a3;
  if ( a2 % a3 )
  {
    v19 = 64;
    v20 = "D:/home/Project/RedPro-S/App/Program/Rumble/VibrationEncoder.cpp";
    v21 = "Init";
    v22 = &byte_60ABC94D;
    v23 = 1;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v13 = "Sampling rate (%u) must be a multiple of resampling rate (%u)\n";
    goto LABEL_7;
  }
  if ( a4 >= a5 )
  {
    v19 = 69;
    v20 = "D:/home/Project/RedPro-S/App/Program/Rumble/VibrationEncoder.cpp";
    v21 = "Init";
    v22 = &byte_60ABC94D;
    v23 = 1;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v13 = "Low cutoff frequencies must be less than high cutoff frequencies\n";
    goto LABEL_7;
  }
  if ( a4 < 10.0 || a5 > 2500.0 || a6 < 10.0 || a7 > 2500.0 )
  {
    v19 = 74;
    v20 = "D:/home/Project/RedPro-S/App/Program/Rumble/VibrationEncoder.cpp";
    v21 = "Init";
    v22 = &byte_60ABC94D;
    v23 = 1;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v13 = "Cutoff frequencies must be in the range [10; 2500]\n";
    goto LABEL_7;
  }
  if ( (float)(a3 >> 1) <= a5 )
  {
    v19 = 79;
    v20 = "D:/home/Project/RedPro-S/App/Program/Rumble/VibrationEncoder.cpp";
    v21 = "Init";
    v22 = &byte_60ABC94D;
    v23 = 1;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v13 = "High cutoff frequencies must be less than resamplingRate/2\n";
    goto LABEL_7;
  }
  a1[392] = a2;
  a1[393] = a3;
  a1[394] = v15;
  a1[396] = 5 * a3 / 0x3E8;
  a1[397] = 0;
  a1[191] = 0;
  a1[190] = 0;
  a1[189] = 0;
  a1[188] = 0;
  a1[383] = 0;
  a1[382] = 0;
  a1[381] = 0;
  a1[380] = 0;
  v16 = a7 > a5;
  if ( v15 == 1 )
    v16 = -1;
  a1[395] = v16;
  v17 = (double)a3;
  result = ((int (__fastcall *)(_DWORD *, int, int, float, float, float, float))loc_607D8C58)(
             a1 + 94,
             6,
             1,
             COERCE_FLOAT(COERCE_UNSIGNED_INT64((double)a3)),
             COERCE_FLOAT(HIDWORD(COERCE_UNSIGNED_INT64((double)a3))),
             COERCE_FLOAT(COERCE_UNSIGNED_INT64(a4)),
             COERCE_FLOAT(HIDWORD(COERCE_UNSIGNED_INT64(a4))));
  if ( !result )
  {
    v18 = a3;
    if ( !a1[395] )
      v18 = v7;
    result = ((int (__fastcall *)(_DWORD *, int, _DWORD, float, float, float, float))loc_607D8C58)(
               a1,
               6,
               0,
               COERCE_FLOAT(COERCE_UNSIGNED_INT64((double)v18)),
               COERCE_FLOAT(HIDWORD(COERCE_UNSIGNED_INT64((double)v18))),
               COERCE_FLOAT(COERCE_UNSIGNED_INT64(a5)),
               COERCE_FLOAT(HIDWORD(COERCE_UNSIGNED_INT64(a5))));
    if ( !result )
    {
      result = ((int (__fastcall *)(_DWORD *, int, int, float, float, float, float))loc_607D8C58)(
                 a1 + 286,
                 6,
                 1,
                 *(float *)&v17,
                 *((float *)&v17 + 1),
                 COERCE_FLOAT(COERCE_UNSIGNED_INT64(a6)),
                 COERCE_FLOAT(HIDWORD(COERCE_UNSIGNED_INT64(a6))));
      if ( !result )
      {
        if ( a1[395] != 1 )
          v7 = a3;
        result = ((int (__fastcall *)(_DWORD *, int, _DWORD, float, float, float, float))loc_607D8C58)(
                   a1 + 192,
                   6,
                   0,
                   COERCE_FLOAT(COERCE_UNSIGNED_INT64((double)v7)),
                   COERCE_FLOAT(HIDWORD(COERCE_UNSIGNED_INT64((double)v7))),
                   COERCE_FLOAT(COERCE_UNSIGNED_INT64(a7)),
                   COERCE_FLOAT(HIDWORD(COERCE_UNSIGNED_INT64(a7))));
        if ( !result )
          return sub_607DD6A0(a1 + 384, a3);
      }
    }
  }
  return result;
}
