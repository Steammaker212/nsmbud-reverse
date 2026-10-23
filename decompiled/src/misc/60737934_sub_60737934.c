/* sub_60737934
 * address: 0x60737934   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60737934(int a1)
{
  int v2; // r1
  int *v3; // r0
  StateBase *CurrentState; // r0
  int v5; // r6
  StateBase *v6; // r0
  int v7; // r5
  float v8; // s4
  float v9; // s6
  int v11; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v2 = FIELD_U8(a1, 7620);
  v3 = (int *)(a1 + 7600);
  if ( v2 )
  {
    target = 0;
    v11 = 0x1000000;
    moveValueTo(v3, &target, &v11);
  }
  else
  {
    *v3 += FIELD_U32(a1, 7604);
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*(int (**)(void))(dword_60CB0534 + 8))()
    || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
        v7 == (*(int (**)(void))(dword_60CB0558 + 8))()) )
  {
    BlockBase__vf174(a1);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 440))(a1);
  sub_605B2D70(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  v8 = FIELD_F32(a1, 112);
  v9 = FIELD_F32(a1, 7628);
  FIELD_F32(a1, 6292) = FIELD_F32(a1, 7624) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 6296) = v9 - v8;
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  return 1;
}
