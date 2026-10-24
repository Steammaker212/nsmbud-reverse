/* GiantWiggler_onCreate_helper_2559BC
 * address: 0x602559BC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GiantWiggler_onCreate_helper_2559BC(Enemy *a1)
{
  int v2; // r6
  float y; // s2
  float x; // r0
  TileCheck *v5; // r0
  float v6; // r0
  bool v7; // zf
  int v8; // r8
  int *v9; // r9
  float v10; // r1
  float *v11; // r7
  int v12; // r1
  int v13; // r2
  _DWORD *v14; // r7
  signed int v15; // r0
  int direction; // r4
  int result; // r0
  TileCheck_Result v18; // [sp+8h] [bp-C0h] BYREF
  TileCheck v19; // [sp+30h] [bp-98h] BYREF
  TileCheck_Param v20; // [sp+7Ch] [bp-4Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-40h] BYREF
  Vec2 a3; // [sp+90h] [bp-38h] BYREF
  sead_ListNode *next; // [sp+98h] [bp-30h]
  int childCount; // [sp+9Ch] [bp-2Ch]
  int v25; // [sp+A0h] [bp-28h]

  v2 = 0;
  v25 = a1[1]._._._._.field_2C;
  childCount = a1[1]._._._._.childCount;
  next = FIELD_U32(a1 + (1) * 6300, 0x24);
  y = FIELD_F32(a1, 0x70);
  x = FIELD_F32(a1, 0x6C);
  *(_WORD *)&v20.field_0 = 0;
  a3.x = x;
  positionOffset.x = x;
  a3.y = y + 32.0;
  positionOffset.y = y + -32.0;
  v20.field_2 = FIELD_U8(a1, 0x56);
  v20.field_3 = FIELD_U8(a1, 0x57);
  v20.field_4 = 0;
  v20.field_8 = 0;
  v5 = TileCheck_ctor(&v19, &v20);
  v18.field_C = 0;
  v18.field_10 = 0;
  v6 = COERCE_FLOAT(TileCheck_check(v5, &v18, &a3, &positionOffset, 8));
  v7 = LODWORD(v6) == 0;
  LOWORD(v8) = 0;
  if ( v6 != 0.0 )
    v6 = v18.field_8;
  HIWORD(v8) = 16928;
  if ( !v7 )
    FIELD_F32(a1, 0x70) = v6;
  v9 = &a1[1]._._._.aCollider.field_4C;
  do
  {
    v10 = FIELD_F32(a1, 0x70);
    v9[8 * v2] = LODWORD(FIELD_F32(a1, 0x6C));
    v11 = (float *)&v9[8 * v2];
    v11[1] = v10;
    v12 = childCount;
    v13 = v25;
    *((_DWORD *)v11 + 2) = next;
    *((_DWORD *)v11 + 3) = v12;
    *((_DWORD *)v11 + 4) = v13;
    *((_DWORD *)v11 + 5) = v8;
    *((_DWORD *)v11 + 7) = sub_6014C4A4((int)FIELD_U8(a1, 0x288));
    v14 = v11 + 2;
    v15 = sub_6014C4A4((int)FIELD_U8(a1, 0x288));
    if ( sub_6014C57C((int)FIELD_U8(a1, 0x288), v15) )
    {
      direction = FIELD_U32(a1, 0x50);
      result = sub_6014C540((int)FIELD_U8(a1, 0x288));
      if ( direction )
      {
        v7 = result == 0;
        result = -1;
        if ( v7 )
          result = 1;
      }
      else if ( result != 1 )
      {
        result = -1;
      }
    }
    else
    {
      result = 0;
    }
    ++v2;
    v14[4] = result;
  }
  while ( v2 != 120 );
  return result;
}
