/* sub_60350AFC
 * address: 0x60350AFC   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60350AFC(int a1)
{
  bool v2; // zf
  float v3; // s16
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int v7; // r4
  int *v8; // r7
  int v9; // r0
  int v10; // r1
  int v11; // r5
  unsigned int v12; // r8
  int v13; // r0
  unsigned int v14; // r7
  int v15; // r6
  int v16; // r0
  _DWORD *v17; // r5
  int v18; // r0
  unsigned int v19; // r0
  unsigned int v20; // r1
  int result; // r0
  int v22; // r6
  int v23; // r0
  int v24; // [sp+0h] [bp-38h] BYREF
  int target; // [sp+4h] [bp-34h] BYREF
  signed int v26; // [sp+8h] [bp-30h] BYREF
  int v27[11]; // [sp+Ch] [bp-2Ch] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  v2 = FIELD_U8(a1, 6416) == 0;
  if ( FIELD_U8(a1, 6416) )
    v2 = FIELD_U8(a1, 6329) == 0;
  if ( !v2 )
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 6412) + 12));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_F32(a1, 108);
  v4 = 0;
  v5 = 0;
  if ( v3 <= 264.0 )
  {
    v4 = 1;
    FIELD_U32(a1, 108) = 1132724224;
  }
  v6 = FIELD_U32(a1, 2872) & 1;
  if ( v6 )
  {
    v7 = FIELD_U32(a1, 80);
    v8 = &v26;
    if ( !v7 )
      v8 = v27;
    v9 = sub_6014C4A4(a1 + 648);
    v10 = 2;
    *v8 = v9;
    if ( !v7 )
      v10 = -2;
    v5 = v9 / v10;
  }
  target = v5;
  v24 = 0x1000000;
  moveValueTo((int *)(a1 + 156), &target, &v24);
  if ( v6 )
    FIELD_U32(a1, 124) = 0;
  if ( v4 == 1 )
    FIELD_F32(a1, 108) = v3;
  v11 = FIELD_U32(a1, 6316);
  if ( v11 )
  {
    v12 = FIELD_U32(a1, 80);
    v13 = sub_60351954(FIELD_U32(a1, 6316));
    if ( v13 )
    {
      v14 = v12;
      if ( v12 >= 2 )
        v14 = 0;
      do
      {
        v15 = v11;
        v11 = *(_DWORD *)(v13 + 4 * v14 + 6308);
        v13 = sub_60351954(v11);
      }
      while ( v13 );
      if ( v15 )
        sub_60351A90(a1, v15, v12 ^ 1);
    }
  }
  sub_60352BD8(a1);
  v17 = (_DWORD *)(a1 + 6308);
  v16 = FIELD_U32(a1, 6308);
  if ( v16 && !sub_60351954(v16) )
  {
    v22 = 0;
  }
  else
  {
    v17 = (_DWORD *)(a1 + 6312);
    v18 = FIELD_U32(a1, 6312);
    if ( !v18 || sub_60351954(v18) )
    {
      v19 = FIELD_U32(a1, 80);
      v20 = v19;
      if ( v19 >= 2 )
        v20 = 0;
      v27[0] = *(_DWORD *)(a1 + 4 * v20 + 6320);
      v26 = dword_60AF1FF8[v19] << 26;
      result = sub_6083246C((int *)(a1 + 160), v27, &v26);
      if ( result == 1 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94F3C);
      return result;
    }
    v22 = 1;
  }
  FIELD_U32(a1, 6304) = FIELD_U32(a1, 8);
  *v17 = 0;
  sub_60351A90(a1, 0, v22 ^ 1);
  v23 = FIELD_U32(a1, 80);
  if ( v23 != v22 )
    FIELD_U32(a1, 80) = v23 != 1;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94FBC);
}
