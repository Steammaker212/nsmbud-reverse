/* sub_6038397C
 * address: 0x6038397C   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6038397C(int a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r4
  int v4; // r2
  float v5; // s0
  float v6; // r2
  float v7; // r1
  TileCheck *v8; // r0
  int v9; // r0
  bool v10; // zf
  float v11; // s2
  float v12; // s4
  float v13; // s6
  TileCheck *v14; // r0
  int v15; // r0
  bool v16; // zf
  TileCheck_Result v18; // [sp+8h] [bp-98h] BYREF
  TileCheck v19; // [sp+30h] [bp-70h] BYREF
  TileCheck_Param v20; // [sp+7Ch] [bp-24h] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-18h] BYREF
  Vec2 a3[2]; // [sp+90h] [bp-10h] BYREF

  v1 = FIELD_U32(a1, 80);
  v2 = a1 + 648;
  if ( ((*(_DWORD *)(a1 + 648 + 4 * ((v1 + 18) >> 5) + 2224) & (1 << ((v1 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v2 + 4 * ((v1 + 22) >> 5) + 2224) & (1 << ((v1 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v2 + 4 * ((v1 + 28) >> 5) + 2224) & (1 << ((v1 + 28) & 0x1F))) == 0 )
  {
    return 1;
  }
  v3 = 0;
  if ( (FIELD_U8(a1, 27) & 0x10) != 0 || !FIELD_U8(a1, 6391) )
    return v3;
  v4 = FIELD_U32(a1, 2872);
  v5 = FIELD_F32(a1, 6372);
  if ( v5 <= 0.0 )
  {
    if ( (v4 & 1) != 0 )
    {
      if ( FIELD_U16(a1, 5952) == 0x1F )
        return v3;
      goto LABEL_17;
    }
    v6 = FIELD_F32(a1, 588);
    v7 = FIELD_F32(a1, 584);
    *(_WORD *)&v20.field_0 = 0;
    a3[0].x = v7;
    a3[0].y = v6;
    positionOffset.x = v7;
    positionOffset.y = v6 + -16.0;
    v20.field_2 = FIELD_U8(a1, 86);
    v20.field_3 = FIELD_U8(a1, 87);
    v20.field_4 = 0;
    v20.field_8 = 0;
    v8 = TileCheck_ctor(&v19, &v20);
    v18.field_C = 0;
    v18.field_10 = 0;
    v9 = TileCheck_check(v8, &v18, a3, &positionOffset, 15);
    v10 = v9 == 1;
    if ( v9 == 1 )
      v10 = LOWORD(v18.field_18) == 0x11;
    return !v10;
  }
  if ( (v4 & 0x10400) != 0x400 )
    return 1;
  if ( FIELD_U16(a1, 5944) == 0x1F )
    return v3;
LABEL_17:
  v11 = FIELD_F32(a1, 108);
  v12 = FIELD_F32(a1, 112);
  v3 = 0;
  v13 = (float)byte_60AFE3F4[v1];
  *(_WORD *)&v20.field_0 = 0;
  a3[0].x = v11 + (float)(v13 * 8.0);
  positionOffset.x = a3[0].x;
  a3[0].y = v12 + (float)(v5 * -4.0);
  positionOffset.y = v12 + (float)(v5 * 6.0);
  v20.field_2 = FIELD_U8(a1, 86);
  v20.field_3 = FIELD_U8(a1, 87);
  v20.field_4 = 0;
  v20.field_8 = 0;
  v14 = TileCheck_ctor(&v19, &v20);
  v18.field_C = 0;
  v18.field_10 = 0;
  v15 = ((int (__fastcall *)(TileCheck *, TileCheck_Result *, Vec2 *, Vec2 *, int))loc_6015D6F0)(
          v14,
          &v18,
          a3,
          &positionOffset,
          15);
  v16 = v15 == 1;
  if ( v15 == 1 )
    v16 = LOWORD(v18.field_18) == 0x1F;
  if ( v16 )
    return 1;
  return v3;
}
