/* sub_6039C64C
 * address: 0x6039C64C   size: 864   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039C64C(int a1)
{
  int v2; // r0
  Actor *v3; // r5
  float v4; // s0
  float v5; // s2
  float v6; // s22
  TileCheck *v7; // r0
  float v8; // s0
  float v9; // s22
  TileCheck *v10; // r0
  float v11; // s0
  TileCheck *v12; // r0
  int v13; // r0
  float v14; // s22
  int v15; // s0
  float v16; // s22
  int v17; // r0
  int v18; // s0
  int v19; // r0
  int v20; // s0
  float v22; // s0
  float v23; // s2
  float v24; // s4
  TileCheck *v25; // r0
  int v26; // [sp+4h] [bp-9Ch] BYREF
  TileCheck v27; // [sp+8h] [bp-98h] BYREF
  TileCheck_Param v28; // [sp+54h] [bp-4Ch] BYREF
  Vec2 positionOffset; // [sp+60h] [bp-40h] BYREF
  Vec2 a3[7]; // [sp+68h] [bp-38h] BYREF

  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    v2 = sub_6014B69C(a1 + 648);
    if ( v2 )
    {
      v3 = *(Actor **)(v2 + 144);
      if ( Actor__getProfileId(v3) == 201
        || Actor__getProfileId(v3) == 202
        || Actor__getProfileId(v3) == 121
        || Actor__getProfileId(v3) == 122 )
      {
        return 1;
      }
    }
  }
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 112);
  *(_WORD *)&v28.field_0 = 0;
  v6 = v4 + 16.0;
  a3[0].x = v4 + 16.0;
  a3[0].y = v5 + 4.0;
  positionOffset.x = v4 + 16.0;
  positionOffset.y = v5 + -32.0;
  v28.field_2 = FIELD_U8(a1, 86);
  v28.field_3 = FIELD_U8(a1, 87);
  v28.field_4 = 0;
  v28.field_8 = 0;
  v7 = TileCheck_ctor(&v27, &v28);
  if ( TileCheck_check(v7, 0, a3, &positionOffset, 8) != 1 )
    return 1;
  v8 = FIELD_F32(a1, 112);
  v9 = v6 + 16.0;
  *(_WORD *)&v28.field_0 = 0;
  a3[0].x = v9;
  positionOffset.x = v9;
  a3[0].y = v8 + 4.0;
  positionOffset.y = v8 + -32.0;
  v28.field_2 = FIELD_U8(a1, 86);
  v28.field_3 = FIELD_U8(a1, 87);
  v28.field_4 = 0;
  v28.field_8 = 0;
  v10 = TileCheck_ctor(&v27, &v28);
  if ( !TileCheck_check(v10, 0, a3, &positionOffset, 8) )
    return 1;
  v11 = FIELD_F32(a1, 112);
  *(_WORD *)&v28.field_0 = 0;
  a3[0].x = v9 + 16.0;
  positionOffset.x = v9 + 16.0;
  a3[0].y = v11 + 4.0;
  positionOffset.y = v11 + -32.0;
  v28.field_2 = FIELD_U8(a1, 86);
  v28.field_3 = FIELD_U8(a1, 87);
  v28.field_4 = 0;
  v28.field_8 = 0;
  v12 = TileCheck_ctor(&v27, &v28);
  if ( TileCheck_check(v12, 0, a3, &positionOffset, 8) != 1 )
    return 1;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v13 = FIELD_U32(a1, 116);
    v14 = FIELD_F32(a1, 108) + 16.0;
    *(float *)&v15 = FIELD_F32(a1, 112) + -32.0;
    *(float *)&v27.field_0 = v14;
    v27.field_4 = v15;
    v27.field_8 = v13;
    ((void (__fastcall *)(int *, _DWORD, TileCheck *, _DWORD))checkLiquidCollisions)(
      &v26,
      0,
      &v27,
      FIELD_U8(a1, 86));
    if ( v26 == 5 )
      return 1;
    v16 = v14 + 16.0;
    v17 = FIELD_U32(a1, 116);
    *(float *)&v18 = FIELD_F32(a1, 112) + -32.0;
    *(float *)&v27.field_0 = v16;
    v27.field_4 = v18;
    v27.field_8 = v17;
    ((void (__fastcall *)(int *, _DWORD, TileCheck *, _DWORD))checkLiquidCollisions)(
      &v26,
      0,
      &v27,
      FIELD_U8(a1, 86));
    if ( v26 == 5 )
      return 1;
    v19 = FIELD_U32(a1, 116);
    *(float *)&v20 = FIELD_F32(a1, 112) + -32.0;
    *(float *)&v27.field_0 = v16 + 16.0;
    v27.field_4 = v20;
    v27.field_8 = v19;
    ((void (__fastcall *)(int *, _DWORD, TileCheck *, _DWORD))checkLiquidCollisions)(
      &v26,
      0,
      &v27,
      FIELD_U8(a1, 86));
    if ( v26 == 5 )
      return 1;
  }
  v22 = FIELD_F32(a1, 108);
  v23 = FIELD_F32(a1, 112) + 8.0;
  v24 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  *(_WORD *)&v28.field_0 = 0;
  a3[0].x = v22 + (float)(v24 * 4.0);
  positionOffset.x = v22 + (float)(v24 * 64.0);
  a3[0].y = v23;
  positionOffset.y = v23;
  v28.field_2 = FIELD_U8(a1, 86);
  v28.field_3 = FIELD_U8(a1, 87);
  v28.field_4 = 0;
  v28.field_8 = 0;
  v25 = TileCheck_ctor(&v27, &v28);
  return TileCheck_check(v25, 0, a3, &positionOffset, 3);
}
