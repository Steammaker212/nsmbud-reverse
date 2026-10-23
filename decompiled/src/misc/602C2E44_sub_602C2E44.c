/* sub_602C2E44
 * address: 0x602C2E44   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602C2E44(int a1)
{
  int v1; // r1
  float v2; // s0
  int v3; // r1
  int v4; // r2
  float v5; // s0
  float v6; // s0
  int v7; // r3
  int v8; // r4
  int v9; // lr
  float v10; // s0
  int v12; // [sp+0h] [bp-28h] BYREF
  int v13; // [sp+4h] [bp-24h]
  float v14; // [sp+8h] [bp-20h]
  int v15; // [sp+Ch] [bp-1Ch]
  int v16; // [sp+10h] [bp-18h]
  int v17; // [sp+14h] [bp-14h]
  int v18; // [sp+18h] [bp-10h]
  int v19; // [sp+1Ch] [bp-Ch]

  v1 = FIELD_U8(a1, 6483);
  if ( v1 == 7 && FIELD_U8(a1, 6473) )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = FIELD_U32(a1, 116);
    v4 = FIELD_U32(a1, 108);
    v12 = 0;
    v13 = v4;
    v5 = v2 + -17.0;
    v14 = v5;
    v15 = v3;
    v16 = 1067869798;
    v17 = 0x40000000;
    v18 = 1067869798;
    v19 = 0;
    FIELD_U32(a1, 6440) = v4;
    FIELD_F32(a1, 6444) = v5;
    FIELD_U32(a1, 6448) = v3;
    FIELD_U32(a1, 6452) = 1067869798;
    FIELD_U32(a1, 6456) = 0x40000000;
    FIELD_U32(a1, 6460) = 1067869798;
  }
  else
  {
    v6 = FIELD_F32(a1, 112);
    v7 = FIELD_U32(a1, 116);
    v8 = FIELD_U32(a1, 108);
    v12 = 0;
    v13 = v8;
    v9 = LODWORD(flt_60AFE7A0[2 * v1]);
    v10 = v6 + flt_60AFE7A0[2 * v1 + 1];
    v14 = v10;
    v15 = v7;
    v16 = 1071644672;
    v17 = v9;
    v18 = 1071644672;
    v19 = 0;
    FIELD_U32(a1, 6440) = v8;
    FIELD_F32(a1, 6444) = v10;
    FIELD_U32(a1, 6448) = v7;
    FIELD_U32(a1, 6452) = 1071644672;
    FIELD_U32(a1, 6456) = v9;
    FIELD_U32(a1, 6460) = 1071644672;
  }
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), &v12, 1u);
}
