/* sub_60131F18
 * address: 0x60131F18   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60131F18(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r5
  char v6; // r12
  int v7; // r0
  bool v8; // zf
  StateBase *CurrentState; // r0
  int v11; // r5

  v4 = FIELD_U32(a1, 6512);
  v2 = (_DWORD *)(a1 + 6512);
  v3 = v4;
  if ( v4 < 1 )
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
  }
  else
  {
    *v2 = v3 - 1;
    FIELD_F32(a1, 144) = FIELD_F32(a1, 144) + FIELD_F32(a1, 6500);
    FIELD_F32(a1, 148) = FIELD_F32(a1, 148) + FIELD_F32(a1, 6504);
    FIELD_F32(a1, 152) = FIELD_F32(a1, 152) + FIELD_F32(a1, 6508);
  }
  v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6580));
  if ( ((unsigned int)dword_60C7B430 & ~(1611866056 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  if ( !v5 )
    goto LABEL_11;
  v7 = (**(int (__fastcall ***)(int, int *))v5)(v5, &Enemy_RTTI);
  v8 = v7 == 1;
  if ( v7 == 1 )
    v8 = FIELD_U8(v5, 536) == 0;
  if ( v8
    && (CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084)),
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v11 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))()) )
  {
    if ( FIELD_U8(a1, 6476) )
      StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C875C4);
  }
  else
  {
LABEL_11:
    FIELD_U8(a1, 19) = 1;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
}
