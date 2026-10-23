/* sub_6063A044
 * address: 0x6063A044   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063A044(int a1)
{
  int v2; // r5
  _BYTE *v3; // r6
  unsigned int v4; // r7
  __int16 v5; // r0
  int v6; // r2
  int v7; // r2
  int v8; // r1
  float v9; // s0
  float v10; // s2
  float *v11; // r0
  float v12; // s6
  float v13; // s6
  unsigned int v14; // r1
  int v15; // r0
  bool v16; // cf
  __int16 v17; // r2
  int v18; // r1
  Vec2 positionOffset; // [sp+4h] [bp-9Ch] BYREF
  Vec2 a3; // [sp+Ch] [bp-94h] BYREF
  TileCheck v22; // [sp+14h] [bp-8Ch] BYREF
  TileCheck_Result v23; // [sp+60h] [bp-40h] BYREF

  v2 = 0;
  v3 = (_BYTE *)(a1 + 7025);
  v4 = FIELD_U8(a1, 7025);
  v23.field_C = 0;
  v23.field_10 = 0;
  sub_6015D0AC(&v22);
  v22.field_2 = *(v3 - 6939);
  v22.field_3 = *(v3 - 6938);
  v5 = 0;
  v6 = v22.field_1C;
  if ( v4 < 4 )
    v5 = v4;
  if ( v22.field_1C < v22.field_14 )
  {
    ++v22.field_1C;
    v7 = v22.field_18 + v6;
    v8 = v7 - v22.field_14;
    if ( v7 < v22.field_14 )
      v8 = v7;
    *(_DWORD *)(v22.field_10 + 4 * v8) = a1;
  }
  v9 = FIELD_F32(a1, 108);
  v10 = FIELD_F32(a1, 112);
  v11 = (float *)(116 * v5 + a1);
  v12 = v11[1549];
  a3.x = v11[1548] + v9;
  a3.y = v12 + v10;
  v13 = v11[1551];
  positionOffset.x = v11[1550] + v9;
  positionOffset.y = v13 + v10;
  if ( TileCheck_check(&v22, &v23, &a3, &positionOffset, 15) == 1 )
  {
    v14 = (unsigned __int8)*v3;
    v15 = LOBYTE(dword_60CB53D8[9 * v4 + 8]);
    if ( v14 != v15 )
    {
      v16 = v14 >= 4;
      v17 = (unsigned __int8)*v3;
      v18 = 9 * v14;
      if ( v16 )
        v17 = 0;
      *(_DWORD *)(116 * v17 + a1 + 6208) = &dword_60CB53D8[v18];
      *v3 = v15;
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB54A0);
      return 1;
    }
  }
  return v2;
}
