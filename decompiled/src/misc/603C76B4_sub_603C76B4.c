/* sub_603C76B4
 * address: 0x603C76B4   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C76B4(int a1, int a2)
{
  int v2; // r0
  int v4; // r4
  int v5; // r5
  StateBase *CurrentState; // r0
  int v7; // r6
  float v8; // s0
  int v9; // r1
  int v10; // r2
  signed int v11; // r3
  int v12; // r7

  v2 = FIELD_U32(a2, 64);
  if ( !v2 )
    return 0;
  v4 = FIELD_U32(a2, 64);
  v5 = 0;
  if ( sub_602A588C(v2) )
    return v5;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    return v5;
  if ( FIELD_U32(v4, 6300) )
  {
    v8 = 0.025;
    v9 = 16;
  }
  else
  {
    v8 = 0.0625;
    v9 = 24;
  }
  sub_602A3EFC(v4 + 6332, v9, v8);
  if ( FIELD_U32(v4, 11868) != 1 )
  {
    v12 = FIELD_U32(v4, 6356);
    FIELD_U32(v4, 11872) = FIELD_U32(v4, 11864);
    sub_603CBC1C((_DWORD *)v4, 1, v10, v11);
    FIELD_U32(v4, 11868) = 1;
    FIELD_U32(v4, 11876) = v12;
  }
  if ( FIELD_U32(v4, 6300) )
  {
    FIELD_U32(v4, 11720) |= 0x10u;
    return 1;
  }
  v5 = 1;
  if ( sub_603CCCF4(v4) != 1 )
    return v5;
  FIELD_U32(v4, 11720) |= 8u;
  return 1;
}
