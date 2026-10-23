/* sub_60040F08
 * address: 0x60040F08   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60040F08(float *a1)
{
  float v2; // s8
  float v3; // s0
  float v4; // s10
  float v5; // s2
  float v6; // s4
  float v7; // s6
  float v8; // s8
  float v9; // s10
  SolidOnTopColliderInfo v11; // [sp+0h] [bp-38h] BYREF
  float v12; // [sp+18h] [bp-20h] BYREF
  float v13; // [sp+1Ch] [bp-1Ch]
  float v14; // [sp+20h] [bp-18h]
  float v15; // [sp+24h] [bp-14h]
  float v16; // [sp+28h] [bp-10h]
  float v17; // [sp+2Ch] [bp-Ch]

  v2 = a1[27];
  v3 = a1[2795] - v2;
  a1[2816] = v3;
  v4 = a1[28];
  v5 = a1[2796] - v4;
  a1[2817] = v5;
  v6 = a1[2807] - v2;
  a1[2818] = v6;
  v7 = a1[2808] - v4;
  a1[2819] = v7;
  v8 = a1[2810] - v2;
  a1[2820] = v8;
  v9 = a1[2811] - v4;
  a1[2821] = v9;
  if ( v3 <= v8 )
  {
    v12 = v3;
    v13 = v5;
    v14 = v6;
    v15 = v7;
    v16 = v8;
    v17 = v9;
  }
  else
  {
    v12 = v8;
    v13 = v9;
    v14 = v6;
    v15 = v7;
    v16 = v3;
    v17 = v5;
  }
  memset(&v11, 0, 16);
  v11.points = (Vec2 *)&v12;
  v11.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 2084), (StageActor *)a1, &v11);
  a1[2127] = 0.0;
  a1[2128] = 0.0;
  return 8512;
}
