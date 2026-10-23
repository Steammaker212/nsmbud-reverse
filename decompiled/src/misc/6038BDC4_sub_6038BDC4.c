/* sub_6038BDC4
 * address: 0x6038BDC4   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038BDC4(int a1)
{
  unsigned int v2; // r0
  float *v3; // r0
  float v4; // s0
  float *v5; // r2
  float v6; // s2
  int v7; // r8
  float v8; // s4
  float v9; // s6
  _DWORD *v10; // r10
  TileCheck *v11; // r0
  int v12; // r6
  int v13; // r0
  float v14; // s0
  float v15; // s2
  int v16; // r1
  float *v18; // [sp+8h] [bp-118h]
  float *v19; // [sp+Ch] [bp-114h]
  TileCheck_Result v20; // [sp+10h] [bp-110h] BYREF
  _BYTE v21[4]; // [sp+38h] [bp-E8h] BYREF
  float v22; // [sp+3Ch] [bp-E4h]
  int v23; // [sp+44h] [bp-DCh]
  int v24; // [sp+48h] [bp-D8h]
  _BYTE v25[4]; // [sp+60h] [bp-C0h] BYREF
  float v26; // [sp+64h] [bp-BCh]
  int v27; // [sp+6Ch] [bp-B4h]
  int v28; // [sp+70h] [bp-B0h]
  TileCheck v29; // [sp+8Ch] [bp-94h] BYREF
  TileCheck_Param v30; // [sp+D8h] [bp-48h] BYREF
  Vec2 positionOffset; // [sp+E4h] [bp-3Ch] BYREF
  Vec2 a3; // [sp+ECh] [bp-34h] BYREF
  Vec2 out; // [sp+F4h] [bp-2Ch] BYREF

  v2 = StageActor__distanceToPlayer((StateActor *)a1, &out);
  if ( v2 == -1 )
    return 0;
  FIELD_U32(a1, 8128) = v2;
  if ( v2 >= 4 )
    v2 = 0;
  v3 = *(float **)(PlayerMgr_instance + 4 * v2 + 32);
  if ( v3 )
  {
    v4 = v3[27] + v3[143];
    FIELD_F32(a1, 8144) = v4;
    v5 = (float *)(a1 + 8148);
    v6 = v3[28] + v3[144];
    FIELD_F32(a1, 8148) = v6;
    FIELD_U32(a1, 8152) = FIELD_U32(a1, 116);
  }
  else
  {
    v5 = (float *)(a1 + 8148);
    v6 = FIELD_F32(a1, 8148);
    v4 = FIELD_F32(a1, 8144);
  }
  v8 = FIELD_F32(a1, 108);
  v9 = FIELD_F32(a1, 112);
  v7 = 1;
  v10 = (_DWORD *)(a1 + 8156);
  FIELD_F32(a1, 8156) = v4 - v8;
  FIELD_F32(a1, 8160) = v6 - v9;
  if ( FIELD_U8(a1, 8285) )
  {
    v19 = (float *)(a1 + 8160);
    a3.x = v8;
    positionOffset.x = v4;
    v18 = v5;
    a3.y = v9;
    positionOffset.y = v6;
    *(_WORD *)&v30.field_0 = 0;
    v30.field_2 = FIELD_U8(a1, 86);
    v30.field_3 = FIELD_U8(a1, 87);
    v30.field_4 = 0;
    v30.field_8 = 0;
    v11 = TileCheck_ctor(&v29, &v30);
    v27 = 0;
    v23 = 0;
    v20.field_C = 0;
    v28 = 0;
    v24 = 0;
    v20.field_10 = 0;
    v12 = ((int (__fastcall *)(TileCheck *, _BYTE *, Vec2 *, Vec2 *, int))loc_6015D2DC)(
            v11,
            v25,
            &a3,
            &positionOffset,
            15);
    v13 = ((int (__fastcall *)(TileCheck *, _BYTE *, Vec2 *, Vec2 *, int))loc_6015D6F0)(
            &v29,
            v21,
            &a3,
            &positionOffset,
            15);
    if ( v12 || (v13 ^ 1) == 1 )
    {
      if ( v13 == 1 )
      {
        if ( FIELD_F32(a1, 120) >= 0.0 )
        {
          if ( v26 >= v22 )
            return v7;
        }
        else if ( v26 <= v22 )
        {
          return v7;
        }
      }
      if ( TileCheck_check(&v29, &v20, &a3, &positionOffset, 15) == 1
        && sqrtf(
             (float)((float)(v20.field_8 - FIELD_F32(a1, 112)) * (float)(v20.field_8 - FIELD_F32(a1, 112)))
           + (float)((float)(v20.field_4 - FIELD_F32(a1, 108)) * (float)(v20.field_4 - FIELD_F32(a1, 108)))) <= 64.0 )
      {
        v14 = FIELD_F32(a1, 112);
        v15 = *v18;
        *v10 = 0;
        *v19 = v15 - v14;
        v16 = FIELD_U32(a1, 156);
        if ( v16 == -1073741824 )
        {
          *v10 = 0;
          *v19 = -1.0;
        }
        else if ( v16 == 0x40000000 )
        {
          *v10 = 0;
          *v19 = 1.0;
        }
      }
    }
  }
  return v7;
}
