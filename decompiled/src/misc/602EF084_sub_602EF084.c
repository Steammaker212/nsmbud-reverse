/* sub_602EF084
 * address: 0x602EF084   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602EF084(int a1)
{
  int v2; // r1
  _BOOL4 result; // r0
  StateBase *CurrentState; // r0
  int v5; // r6
  TileCheck *v6; // r0
  float v7; // s0
  int v8; // r1
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r5
  Vec2 positionOffset; // [sp+4h] [bp-6Ch] BYREF
  Vec2 a3; // [sp+Ch] [bp-64h] BYREF
  TileCheck v15; // [sp+14h] [bp-5Ch] BYREF

  v2 = FIELD_U8(a1, 7525);
  result = 0;
  if ( !v2 && *(__int16 *)(FIELD_U32(a1, 7368) + 64) >= 3 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*(int (**)(void))(dword_60C923C4 + 8))() )
      goto LABEL_5;
    v6 = sub_6015D0AC(&v15);
    v15.field_2 = FIELD_U8(a1, 86);
    v15.field_3 = FIELD_U8(a1, 87);
    v7 = FIELD_F32(a1, 112);
    a3.x = FIELD_F32(a1, 108);
    positionOffset.x = a3.x;
    a3.y = v7 + -1.0;
    positionOffset.y = v7 + -3.0;
    v8 = TileCheck_check(v6, 0, &a3, &positionOffset, 8);
    result = 1;
    if ( !v8 )
    {
LABEL_5:
      v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
      if ( v10 == (*((int (**)(void))stru_60C925A4.vtable + 2))() )
        return sub_60003460(a1) != 0;
      v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
      return v12 == (*((int (**)(void))stru_60C92464.vtable + 2))() && sub_60003460(a1) != 0;
    }
  }
  return result;
}
