/* sub_60288FB8
 * address: 0x60288FB8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60288FB8(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  StateBase *CurrentState; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5

  ++FIELD_U16(a1, 6592);
  v4 = FIELD_U32(a1, 6580);
  v2 = (_DWORD *)(a1 + 6580);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_602A33AC((_BYTE *)a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 != (*(int (**)(void))(dword_60C8F22C + 8))() )
  {
    v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
    if ( v8 != (*(int (**)(void))(dword_60C8F24C + 8))() && sub_60003AE0((StageActor *)a1) == 1 )
      SE_EMY_DOWN_ref_2A7624(a1);
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
