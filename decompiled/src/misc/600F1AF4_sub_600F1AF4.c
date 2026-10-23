/* sub_600F1AF4
 * address: 0x600F1AF4   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_600F1AF4(int a1, int a2)
{
  char v2; // r12
  int Resource; // r6
  _BYTE *v6; // r4
  int v7; // t1
  int *v8; // r5
  _DWORD **v9; // r0
  int v10; // r0
  ActiveCollider *v11; // r4
  ActiveColliderMgr *v12; // r5
  ActiveColliderMgr *result; // r0
  _DWORD v14[6]; // [sp+0h] [bp-18h] BYREF

  if ( ((unsigned int)algn_60C85704 & ~(1611602712 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C85704) )
  {
    dword_60C85750[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C85754 = (int)"EF_MortonHammerBlur1";
    dword_60C85758 = (int)&sead__SafeStringBase__vtable;
    dword_60C8575C = (int)"EF_MortonHammerBlur1_upper";
    dword_60C85760 = (int)&sead__SafeStringBase__vtable;
    dword_60C85764 = (int)"EF_MortonHammerBlur2";
    dword_60C85768 = (int)&sead__SafeStringBase__vtable;
    dword_60C8576C = (int)"EF_MortonHammerBlur2_upper";
    dword_60C85770 = (int)&sead__SafeStringBase__vtable;
    dword_60C85774 = (int)"EF_MortonHammerBlur4";
    sub_60000288();
    _cxa_guard_release((__guard *)algn_60C85704);
  }
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "EF_MortonHammerBlur";
  Resource = LoadResource(ResourceMgrRelated_instance, v14);
  v7 = FIELD_U32(a1, 8652);
  v6 = (_BYTE *)(a1 + 8652);
  v8 = &dword_60C85750[2 * a2];
  sub_6040F4B8(v7, v8, 0);
  sub_60446088(**(_DWORD **)(*(_DWORD *)v6 + 28), Resource, (int)v8);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v6 + 28) + 4), 0);
  v9 = *(_DWORD ***)(*(_DWORD *)v6 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v6 + 24) > 1u )
    ++v9;
  ShuAnim_play(*v9, Resource, (int)v8);
  v10 = *(_DWORD *)(*(_DWORD *)v6 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v6 + 24) > 1u )
    v10 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
  v6[4] = 1;
  v11 = (ActiveCollider *)(v6 - 532);
  v12 = ActiveColliderMgr_instance;
  result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v11);
  if ( !result )
  {
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v12, v11);
    if ( !result )
      return ActiveColliderMgr_addToCreateList(v12, v11);
  }
  return result;
}
