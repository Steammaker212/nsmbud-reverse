/* BrosBase__beginState_Move
 * address: 0x6026522C   size: 312   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
void __fastcall BrosBase__beginState_Move(StateActor *a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  int *v4; // r6
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int (**v9)(); // [sp+8h] [bp-18h] BYREF
  const char *v10; // [sp+Ch] [bp-14h]

  a1[1]._._.aCollider.field_118 = 0;
  a1[1]._._.aCollider.field_10C = LOBYTE(a1[1]._._.field_1F8) != FIELD_U32(a1, 0x0)._.direction;
  a1[1]._._.aCollider.field_110 = 0;
  v9 = &sead__SafeStringBase__vtable;
  v10 = "bros";
  v2 = LoadResource(ResourceMgrRelated_instance, &v9);
  v4 = &a1[1]._._.aCollider._.field_C;
  v3 = (_DWORD *)a1[1]._._.aCollider._.field_C;
  v9 = &sead__SafeStringBase__vtable;
  v10 = "walk";
  sub_60421938(v3, v2, (int)&v9);
  v5 = *(_DWORD *)(a1[1]._._.aCollider._.field_C + 12);
  v6 = *(_DWORD *)(a1[1]._._.aCollider._.field_C + 68);
  if ( *(_DWORD *)(a1[1]._._.aCollider._.field_C + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*v4 + 12);
  v8 = *(_DWORD *)(*v4 + 68);
  if ( *(_DWORD *)(*v4 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 720))(a1);
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 732))(a1);
  CollisionMgr_init((CollisionMgr *)FIELD_U32(a1, 0x0).collisionMgr, a1, &stru_60AFD9D8, &stru_60AFD9E4, &stru_60AFD9F0);
}
