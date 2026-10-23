/* FinalBowser__vf308
 * address: 0x60076FB4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026784
// 
// Overridden by: None
int __fastcall FinalBowser__vf308(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  StateBase *v6; // r0
  int v7; // r5
  int Resource; // r0
  int v9; // r4
  int v10; // t1
  _DWORD v11[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v12[6]; // [sp+8h] [bp-18h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C8152C + 8))();
  if ( v4 != result )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    result = (*(int (**)(void))(dword_60C8154C + 8))();
    if ( v7 != result )
    {
      v11[0] = &sead__SafeStringBase__vtable;
      v12[0] = &sead__SafeStringBase__vtable;
      v11[1] = "lkp_wait";
      v12[1] = "koopa_model";
      Resource = LoadResource(ResourceMgrRelated_instance, v12);
      v10 = FIELD_U32(a1, 7112);
      v9 = a1 + 7112;
      TexAnim_play(**(_DWORD **)(v10 + 20), Resource, v11);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v9 + 20) + 4), 1);
      result = **(_DWORD **)(*(_DWORD *)v9 + 20);
      FIELD_U32(result, 24) = 1065353216;
    }
  }
  return result;
}
