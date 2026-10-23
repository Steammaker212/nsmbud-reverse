/* sub_60745DF4
 * address: 0x60745DF4   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60745DF4(int a1, int a2, int a3)
{
  int v3; // r11
  unsigned int v4; // r1
  float v5; // s16
  float v6; // s18
  unsigned int v7; // r7
  int v8; // r4
  unsigned int v9; // r8
  int i; // r9
  float *v11; // r0
  float v12; // s2
  float v13; // s4
  float v14; // s0
  int result; // r0
  float v16; // [sp+8h] [bp-60h] BYREF
  float v17; // [sp+Ch] [bp-5Ch]
  int v18; // [sp+10h] [bp-58h]
  int v19; // [sp+14h] [bp-54h]
  char v20; // [sp+18h] [bp-50h]
  char v21; // [sp+19h] [bp-4Fh]
  __int16 v22; // [sp+1Ah] [bp-4Eh]
  __int16 v23; // [sp+1Ch] [bp-4Ch]
  char v24; // [sp+1Eh] [bp-4Ah]

  v3 = 1;
  if ( !a2 )
  {
    if ( a3 )
      LOBYTE(v3) = 3;
    goto LABEL_10;
  }
  v4 = FIELD_U8(a2, 84);
  if ( a3 )
    v3 = 3;
  if ( v4 > 3 )
  {
LABEL_10:
    v16 = FIELD_F32(a1, 108);
    v17 = FIELD_F32(a1, 112);
    v18 = FIELD_U32(a1, 116);
    v19 = FIELD_U32(a1, 80);
    v20 = v3;
    v21 = FIELD_U8(a1, 86);
    v23 = 0;
    v22 = 0;
    v24 = 0;
    return sub_60583000(dword_60CAF15C, (int)&v16, 0);
  }
  v5 = FIELD_F32(a1, 108);
  v6 = FIELD_F32(a1, 112);
  v7 = 0x40000000;
  v8 = (char)v4;
  v9 = 0;
  for ( i = 0; i < v3; ++i )
  {
    v11 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
    v12 = *v11;
    v13 = v11[1];
    v14 = (float)v9 * 0.000000059605;
    v16 = v5 + (float)((float)(v11[2] + (float)(v14 * v11[3])) * 8.0);
    v17 = v6 + (float)((float)(v12 + (float)(v14 * v13)) * 8.0);
    sub_60584B74(dword_60CAF15C, &v16, 0, v8, 0, 0);
    result = v7 + 5592405;
    v9 += 5592405;
    v7 += 1431655765;
  }
  return result;
}
