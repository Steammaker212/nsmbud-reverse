/* sub_6034D45C
 * address: 0x6034D45C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6034D45C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r1
  int v10; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  target = Enemy_CommonRotations[FIELD_U32(a1, 80)];
  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C94B90 + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*(int (**)(void))(dword_60C94BB0 + 8))()) )
  {
    v7 = FIELD_U32(a1, 80);
    target = dword_60C94CE0[v7 + 20];
  }
  else
  {
    v7 = FIELD_U32(a1, 80);
  }
  v8 = dword_60AFE3EC[v7];
  if ( v8 < 0 && v8 != 0x80000000 )
    v8 = -v8;
  v10 = v8;
  return moveValueTo((int *)(a1 + 160), &target, &v10);
}
