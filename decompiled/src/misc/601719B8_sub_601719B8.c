/* sub_601719B8
 * address: 0x601719B8   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_601719B8(int a1, _DWORD *a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r3
  unsigned int v8; // r0
  float *v9; // r0
  __n64 result; // d0
  int v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r2
  int v14; // r5
  unsigned int v15; // r3
  int v16; // r6
  int v17; // r5
  int v18; // r5
  int v19; // r0
  float v20; // s16
  float v21; // s18
  int v22; // r0
  int v23; // r0
  float v24; // s22
  float v25; // s24
  int v26; // r0
  float v27; // s4

  v3 = sub_601A443C(dword_60C89E18, *a2, a2[1]);
  v4 = sub_60182E50(v3, a2[2]);
  if ( v4 )
  {
    v5 = *a2;
    v6 = a2[1];
    v7 = 0;
    v8 = v4 - 1;
    if ( *a2 >= 9u )
      v5 = 0;
    if ( v6 >= 2 )
      v6 = 0;
    if ( v8 < 0x1F )
      v7 = v8;
    v9 = (float *)(dword_60CC6D78 + 1488 * v5 + 744 * v6 + 24 * v7);
    result.n64_f32[1] = v9[538] + v9[541];
    result.n64_f32[0] = v9[537] + v9[540];
  }
  else
  {
    v11 = sub_60182E38(v3, a2[2]);
    v12 = sub_6081F5DC(dword_60CC6D78, *a2, a2[1], v11);
    v13 = a2[1];
    v14 = 0;
    v15 = 0;
    if ( *a2 < 9u )
      v14 = *a2;
    v16 = dword_60CC6D78 + 9216 * v14;
    v17 = 0;
    if ( v13 < 2 )
      v17 = a2[1];
    v18 = 9 * v17;
    if ( v12 < 0x80 )
      v15 = v12;
    v19 = v16 + (v18 << 9) + 36 * v15;
    v20 = FIELD_F32(v19, 15564);
    v21 = FIELD_F32(v19, 15560);
    v22 = sub_601A4454(dword_60C89E18, *a2, v13);
    v23 = sub_60178780(v22, a2[2]);
    v24 = FIELD_F32(v23, 72);
    v25 = FIELD_F32(v23, 76);
    v26 = sub_601CF9C0(dword_60C8AEF0);
    v27 = v25 + sub_601C7324(v26);
    result.n64_f32[0] = v21 + v24;
    result.n64_f32[1] = v20 + v27;
  }
  return result;
}
