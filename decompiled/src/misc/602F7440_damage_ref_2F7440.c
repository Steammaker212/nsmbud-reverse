/* damage_ref_2F7440
 * address: 0x602F7440   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall damage_ref_2F7440(int a1)
{
  _DWORD *v2; // r7
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int *v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  ActiveCollider *v11; // r4
  int v12; // t1
  int vtable; // r0
  ActiveColliderMgr *v14; // r5
  int (**v16)(); // [sp+0h] [bp-28h] BYREF
  const char *v17; // [sp+4h] [bp-24h]

  v16 = &sead__SafeStringBase__vtable;
  v17 = "damage";
  v2 = (_DWORD *)(a1 + 6300);
  v3 = a1 + 6304;
  sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&v16);
  v4 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
  v6 = *(int **)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += v7;
  v8 = *v6;
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
  *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 0;
  *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 0;
  v16 = &sead__SafeStringBase__vtable;
  v17 = "damage";
  v12 = FIELD_U32(a1, 6316);
  v11 = (ActiveCollider *)(a1 + 6316);
  sub_6045195C(v12, *v2, &v16);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(v11, 0x0).vtable + 4), 0);
  vtable = FIELD_U32(v11, 0x0).vtable;
  FIELD_U32(vtable, 20) = 0;
  FIELD_U32(vtable, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(v11, 0x0).vtable + 24) = 1065353216;
  v11[-21].lastCollisionOffsetX = 0.0;
  v11[-21].field_C0 = 0;
  v11[-21].field_C4 = 0;
  v11[-21].field_E4 = 0;
  v11 = (ActiveCollider *)((char *)v11 - 6128);
  v14 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v11);
  ActiveColldierMgr_removeFromCreateList(v14, v11);
  return ActiveColldierMgr_removeFromList3(v14, (int)v11);
}
