/* sub_605D586C
 * address: 0x605D586C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D586C(int a1, int a2, int a3)
{
  int v6; // r5
  StateBase *CurrentState; // r0
  int v8; // r7
  int v9; // r1
  int result; // r0
  TileCheck *v11; // r0
  float v12; // r2
  int v13; // r0
  int v14; // r2
  Vec2 positionOffset; // [sp+8h] [bp-A0h] BYREF
  TileCheck_Result v16; // [sp+10h] [bp-98h] BYREF
  TileCheck v17; // [sp+38h] [bp-70h] BYREF
  TileCheck_Param v18; // [sp+84h] [bp-24h] BYREF

  v6 = FIELD_U32(a2, 64);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 940));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v9 = (*(int (**)(void))(dword_60CB12A8 + 8))();
  result = 0;
  if ( v8 != v9 )
  {
    if ( !FIELD_U8(v6, 752) )
      goto LABEL_6;
    *(_WORD *)&v18.field_0 = 256;
    v18.field_2 = FIELD_U8(v6, 86);
    v18.field_3 = FIELD_U8(v6, 87);
    v18.field_4 = 0;
    v18.field_8 = 0;
    v11 = TileCheck_ctor(&v17, &v18);
    v16.field_C = 0;
    v16.field_10 = 0;
    v12 = FIELD_F32(v6, 772);
    positionOffset.x = FIELD_F32(v6, 768);
    positionOffset.y = v12;
    if ( TileCheck_check(v11, &v16, (Vec2 *)a3, &positionOffset, 15) )
    {
      sub_602A3EFC(v6 + 888, 24, 0.04);
      sub_6015BD44(a1, a2, a3);
      return 1;
    }
    else
    {
LABEL_6:
      v13 = FIELD_U32(v6, 116);
      v14 = FIELD_U32(a3, 4);
      *(_DWORD *)&v17.field_0 = *(_DWORD *)a3;
      v17.field_4 = v14;
      v17.field_8 = v13;
      return sub_605D56D4(v6, (int)&v17, -1, 1);
    }
  }
  return result;
}
