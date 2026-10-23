/* sub_602451DC
 * address: 0x602451DC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602451DC(int result)
{
  unsigned __int8 *v1; // r4
  char v2; // r7
  unsigned int v3; // r2
  float v4; // s16
  float v5; // s18
  float v6; // s20
  float v7; // s22
  float v8; // s24
  int v9; // r0
  float v10; // s16
  unsigned int v11; // r2
  int v12; // r8
  int v13; // r0
  float v14; // s18
  unsigned int v15; // r2
  int v16; // r9
  int v17; // r0
  unsigned int v18; // r2
  int v19; // r6
  float v20; // [sp+0h] [bp-58h] BYREF
  float v21; // [sp+4h] [bp-54h]

  v1 = (unsigned __int8 *)result;
  v2 = 3;
  v3 = FIELD_U8(result, 86);
  if ( v3 != 1 )
  {
    v4 = FIELD_F32(result, 312);
    v5 = FIELD_F32(result, 316);
    v6 = FIELD_F32(result, 108) + FIELD_F32(result, 304);
    v7 = FIELD_F32(result, 112) + FIELD_F32(result, 308);
    v8 = v6 - v4;
    v20 = v6 - v4;
    v21 = v7 + v5;
    v9 = sub_60151960(result + 648, &v20, v3);
    v10 = v6 + v4;
    v11 = v1[86];
    v12 = v9;
    v20 = v10;
    v21 = v7 + v5;
    v13 = sub_60151960((int)(v1 + 648), &v20, v11);
    v14 = v7 - v5;
    v15 = v1[86];
    v16 = v13;
    v20 = v8;
    v21 = v14;
    v17 = sub_60151960((int)(v1 + 648), &v20, v15);
    v18 = v1[86];
    v19 = v17;
    v20 = v10;
    v21 = v14;
    result = sub_60151960((int)(v1 + 648), &v20, v18);
    if ( v12 || v19 != __PAIR64__(v16, 0) || result == 1 )
    {
      result = 6422;
      v2 = v1[6422];
    }
  }
  v1[296] = v2;
  return result;
}
