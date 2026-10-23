/* SledgeBro__beginState_DieFumi
 * address: 0x602D6B18   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7D9C
// 
// Overridden by: None
ActiveColliderMgr *__fastcall SledgeBro__beginState_DieFumi(Enemy *a1)
{
  _DWORD *v2; // r5
  int *v3; // r6
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  ActiveCollider *v9; // r4
  ActiveColliderMgr *v10; // r5
  _DWORD v12[6]; // [sp+0h] [bp-18h] BYREF

  v3 = &a1[1]._._._.field_22C;
  v2 = (_DWORD *)a1[1]._._._.field_22C;
  ResArchiveById = Profile__getResArchiveById(FIELD_U32(a1, 0xC), 0);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "dead";
  sub_60421938(v2, ResArchiveById, (int)v12);
  v5 = *(_DWORD *)(*v3 + 12);
  v6 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  FIELD_U32(a1, 0x9C) = 835125248;
  Enemy__beginState_DieFumi(a1);
  v9 = (ActiveCollider *)&a1[1]._._.collisionMgr[128];
  v10 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v9);
  ActiveColldierMgr_removeFromCreateList(v10, v9);
  return ActiveColldierMgr_removeFromList3(v10, (int)v9);
}
