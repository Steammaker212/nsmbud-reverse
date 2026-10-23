/* frozen_ref
 * address: 0x6027B084   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall frozen_ref(int a1)
{
  int v1; // r4
  int v2; // r5
  int ResArchiveById; // r0
  int v4; // r0
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *result; // r0
  _DWORD v7[8]; // [sp+0h] [bp-20h] BYREF

  v1 = a1 + 6300;
  v2 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "frozen";
  SkeletalAnim_play(v2, ResArchiveById, (int)v7);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 24) = 1065353216;
  v4 = **(_DWORD **)(*(_DWORD *)v1 + 12);
  FIELD_U32(v4, 20) = 1065353216;
  FIELD_U32(v4, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 4), 0);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 2680));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(v1 + 2680));
  result = ActiveColldierMgr_removeFromList3(v5, v1 + 2680);
  FIELD_U32(v1, 2244) = 0;
  return result;
}
