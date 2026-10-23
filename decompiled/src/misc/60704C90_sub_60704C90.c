/* sub_60704C90
 * address: 0x60704C90   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60704C90(int a1, int a2)
{
  __int64 v2; // d8
  __int64 v3; // d9
  __int64 v4; // d10
  __int64 v5; // d11
  __int64 v6; // d12
  int v7; // r1
  int v8; // r0
  int v9; // r4
  int v10; // r5
  int result; // r0
  int v12; // r6
  char v13; // r8
  _BYTE *v14; // r7
  float v15; // s22
  float v16; // s2
  float v17; // s20
  float v18; // s0
  float v19; // s16
  float v20; // s18
  TileCheck *v21; // r0
  int v22; // r1
  int v23; // r1
  int v24; // r1
  int v25; // r0
  unsigned int v26; // r1
  int v27; // r2
  int v28; // r9
  float *v29; // r2
  float v30; // s16
  float v31; // s18
  float v32; // s22
  float v33; // s24
  int v34; // r5
  int v35; // r0
  TileCheck_Result v36; // [sp+8h] [bp-160h] BYREF
  TileCheck v37; // [sp+34h] [bp-134h] BYREF
  TileCheck_Param v38; // [sp+80h] [bp-E8h] BYREF
  TileCheck v39; // [sp+8Ch] [bp-DCh] BYREF
  TileCheck_Param v40; // [sp+D8h] [bp-90h] BYREF
  int (**v41)(); // [sp+E4h] [bp-84h] BYREF
  TileCheck_Result v42; // [sp+E8h] [bp-80h] BYREF
  Vec2 positionOffset; // [sp+110h] [bp-58h] BYREF
  Vec2 a3; // [sp+118h] [bp-50h] BYREF
  __int64 v45; // [sp+120h] [bp-48h]
  __int64 v46; // [sp+128h] [bp-40h]
  __int64 v47; // [sp+130h] [bp-38h]
  __int64 v48; // [sp+138h] [bp-30h]
  __int64 v49; // [sp+140h] [bp-28h]

  v7 = FIELD_U32(a2, 2196);
  v8 = FIELD_U32(a1, 144);
  v45 = v2;
  v46 = v3;
  v47 = v4;
  v48 = v5;
  v49 = v6;
  v9 = v7;
  v10 = v8;
  result = 0;
  v12 = FIELD_S8(v7, 84);
  v13 = v12;
  if ( (unsigned __int8)v12 >= 4u )
    v12 = 0;
  v14 = (_BYTE *)(v10 + v12 + 7104);
  if ( !*v14 )
  {
    v15 = FIELD_F32(v7, 112);
    v16 = FIELD_F32(v7, 576);
    v17 = FIELD_F32(v7, 108);
    v18 = FIELD_F32(v7, 572);
    v19 = FIELD_F32(v10, 108);
    v20 = FIELD_F32(v10, 112);
    v42.field_C = 0;
    v42.field_10 = 0;
    *(_WORD *)&v40.field_0 = 0;
    positionOffset.x = v19;
    positionOffset.y = v20;
    v41 = off_60C20F2C;
    a3.x = v17 + v18;
    a3.y = v15 + v16;
    v40.field_2 = FIELD_U8(v10, 86);
    v40.field_3 = FIELD_U8(v10, 87);
    v40.field_4 = 0;
    v40.field_8 = (int)&v41;
    v21 = TileCheck_ctor(&v39, &v40);
    result = TileCheck_check(v21, &v42, &a3, &positionOffset, 15);
    v22 = 1;
    if ( !result )
    {
      *(_WORD *)&v38.field_0 = 0;
      v38.field_2 = FIELD_U8(v10, 86);
      v38.field_3 = FIELD_U8(v10, 87);
      v38.field_4 = 1;
      v38.field_8 = 0;
      TileCheck_ctor(&v37, &v38);
      v23 = v37.field_1C;
      v36.field_C = 0;
      v36.field_10 = 0;
      if ( v37.field_1C < v37.field_14 )
      {
        ++v37.field_1C;
        v24 = v37.field_18 + v23;
        v25 = v24 - v37.field_14;
        if ( v24 < v37.field_14 )
          v25 = v24;
        *(_DWORD *)(v37.field_10 + 4 * v25) = v10;
      }
      result = TileCheck_check(&v37, &v36, &a3, &positionOffset, 15);
      if ( result == 1 )
      {
        result = v36.field_20;
        if ( v36.field_20 )
        {
          result = *(_DWORD *)(v36.field_20 + 300);
          if ( result == 40 )
            return result;
LABEL_15:
          v26 = FIELD_U32(v10, 164);
          v27 = (v26 >> 20) & 0xFF0;
          v26 &= 0xFFFFFFu;
          v28 = (int)(float)(sqrtf(
                               (float)((float)(v20 - v15) * (float)(v20 - v15))
                             + (float)((float)(v19 - v17) * (float)(v19 - v17)))
                           * 0.0625);
          v29 = (float *)((char *)sinLutTable + v27);
          v30 = v29[2];
          v31 = v29[3];
          v32 = (float)v26;
          v33 = flt_60AF4F10[v28] * 1.3;
          ((void (__fastcall *)(int, unsigned int, float))loc_607BFCD0)(
            v9,
            v26,
            -(float)(v33 * (float)(*v29 + (float)((float)((float)v26 * v29[1]) * 0.000000059605))));
          ((void (__fastcall *)(int, float))loc_607BFB10)(
            v9,
            v33 * (float)(v30 + (float)((float)(v32 * v31) * 0.000000059605)));
          v34 = v10 + 6428;
          v35 = *(_DWORD *)(v34 + 4 * v12);
          *(_DWORD *)(v34 + 4 * v12) = v35 - 1;
          if ( v35 <= 1 )
          {
            if ( FIELD_U32(v9, 1320) == 5 )
              AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, v13, dword_60AF4F30[v28], 0, 0);
            else
              AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, v13, dword_60AF4F50[v28], 0, 0);
            *(_DWORD *)(v34 + 4 * v12) = 8;
          }
          *v14 = 1;
          return 1;
        }
      }
      v22 = 0;
    }
    if ( v22 )
      return result;
    goto LABEL_15;
  }
  return result;
}
