/* sub_609AC744
 * address: 0x609AC744   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609AC744(_DWORD *a1)
{
  int v1; // r9
  float *v2; // r5
  unsigned __int8 *v3; // r10
  unsigned __int8 *v4; // r6
  unsigned __int8 *v5; // r7
  _DWORD *v6; // r11
  unsigned __int8 *v7; // r4
  float v8; // s16
  float v9; // s0
  float v10; // s0
  float v11; // s0
  int v12; // r0
  _DWORD *v13; // r2
  unsigned int v14; // r1
  int result; // r0
  int v17; // [sp+8h] [bp-58h]
  _DWORD *v18; // [sp+Ch] [bp-54h]
  _DWORD *v19; // [sp+10h] [bp-50h]
  _DWORD *v20; // [sp+14h] [bp-4Ch]

  v1 = 0;
  v2 = (float *)(a1 + 1078);
  v20 = a1 + 1127;
  v3 = (unsigned __int8 *)(a1 + 1128);
  v19 = a1 + 1124;
  v4 = (unsigned __int8 *)(a1 + 1125);
  v18 = a1 + 1121;
  v5 = (unsigned __int8 *)(a1 + 1122);
  v6 = a1 + 1118;
  v7 = (unsigned __int8 *)(a1 + 1119);
  v17 = 0;
  do
  {
    v8 = (float)v1 / 7.0;
    *v2 = ((float (__fastcall *)(unsigned __int8 *, _DWORD, float))off_60C60D30[*v7])(v7, *v6, v8);
    v2[1] = ((float (__fastcall *)(unsigned __int8 *, _DWORD, float))off_60C60D30[*v5])(v5, *v18, v8);
    v2[2] = ((float (__fastcall *)(unsigned __int8 *, _DWORD, float))off_60C60D30[*v4])(v4, *v19, v8);
    v2[3] = ((float (__fastcall *)(unsigned __int8 *, _DWORD, float))off_60C60D30[*v3])(v3, *v20, v8);
    v9 = v8 - *v2;
    if ( v9 > 0.00000011921
      || v9 < -0.00000011921
      || (v10 = v8 - v2[1], v10 > 0.00000011921)
      || v10 < -0.00000011921
      || (v11 = v8 - v2[2], v11 > 0.00000011921)
      || v11 < -0.00000011921 )
    {
      v17 = 1;
    }
    ++v1;
    v2 += 4;
  }
  while ( v1 != 8 );
  a1[1110] = a1[1106];
  a1[1111] = a1[1107];
  a1[1112] = a1[1108];
  a1[1113] = a1[1109];
  v13 = a1 + 1260;
  v12 = a1[1260];
  if ( v17 != (unsigned __int8)(v12 & 0x40) >> 6 )
  {
    v14 = v12 & 0xFFFFFFBD;
    if ( (v17 & 1) != 0 )
      v14 = v12 | 0x40;
    v12 = v14 | 2;
    *v13 = v14 | 2;
  }
  result = v12 | 1;
  *v13 = result;
  return result;
}
