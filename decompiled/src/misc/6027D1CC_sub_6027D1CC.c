/* sub_6027D1CC
 * address: 0x6027D1CC   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027D1CC(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  ActiveColliderMgr *v5; // r7
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r6
  int result; // r0
  StateBase *v13; // r0
  int v14; // r6
  int v15; // r6
  int v16; // r5
  int ResArchiveById; // r1
  StateBase *v18; // r0
  int v19; // r5
  _DWORD v20[8]; // [sp+0h] [bp-20h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C8EE58 + 8))() )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EE38);
    FIELD_U32(a1, 8548) = 120;
    v5 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8980));
    ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(a1 + 8980));
    ActiveColldierMgr_removeFromList3(v5, a1 + 8980);
  }
  v6 = StateMgr__getCurrentState(v2);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 == (*(int (**)(void))(dword_60C8EEB8 + 8))()
    || (v8 = StateMgr__getCurrentState(v2),
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
        v9 == (*(int (**)(void))(dword_60C8EE98 + 8))())
    || (v10 = StateMgr__getCurrentState(v2),
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
        result = (*(int (**)(void))(dword_60C8EF18 + 8))(),
        v11 == result) )
  {
    FIELD_U8(a1, 9320) = 1;
    v13 = StateMgr__getCurrentState(v2);
    v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
    if ( v14 == (*(int (**)(void))(dword_60C8EE78 + 8))() )
    {
      v15 = a1 + 6300;
      v16 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      v20[0] = &sead__SafeStringBase__vtable;
    }
    else
    {
      v18 = StateMgr__getCurrentState(v2);
      v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
      if ( v19 != (*(int (**)(void))(dword_60C8EE98 + 8))() )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EED8);
      FIELD_U8(a1, 9321) = 1;
      v15 = a1 + 6300;
      v16 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      v20[0] = &sead__SafeStringBase__vtable;
    }
    v20[1] = "walk";
    SkeletalAnim_play(v16, ResArchiveById, (int)v20);
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v15 + 12) + 24) = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v15 + 12) + 4), 1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EED8);
  }
  return result;
}
