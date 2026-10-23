/* BrosBase__beginState_DieFumi
 * address: 0x60266130   size: 280   group: projectile
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
ActiveColliderMgr *__fastcall BrosBase__beginState_DieFumi(int a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  int v4; // r6
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  ActiveCollider *v9; // r4
  ActiveColliderMgr *v10; // r5
  int (**v12)(); // [sp+8h] [bp-18h] BYREF
  const char *v13; // [sp+Ch] [bp-14h]

  v12 = &sead__SafeStringBase__vtable;
  v13 = "bros";
  v2 = LoadResource(ResourceMgrRelated_instance, &v12);
  v4 = a1 + 6300;
  v3 = *(_DWORD **)(a1 + 6300);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "dead";
  sub_60421938(v3, v2, (int)&v12);
  v5 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
  v6 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  Enemy__beginState_DieFall((Enemy *)a1);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, 0);
  v9 = (ActiveCollider *)(a1 + 12124);
  v10 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v9);
  ActiveColldierMgr_removeFromCreateList(v10, v9);
  return ActiveColldierMgr_removeFromList3(v10, (int)v9);
}
