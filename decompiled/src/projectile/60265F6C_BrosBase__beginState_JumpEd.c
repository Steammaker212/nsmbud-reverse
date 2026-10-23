/* BrosBase__beginState_JumpEd
 * address: 0x60265F6C   size: 244   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
void __fastcall BrosBase__beginState_JumpEd(int a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  int v4; // r6
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int (**v9)(); // [sp+8h] [bp-18h] BYREF
  const char *v10; // [sp+Ch] [bp-14h]

  v9 = &sead__SafeStringBase__vtable;
  v10 = "bros";
  v2 = LoadResource(ResourceMgrRelated_instance, &v9);
  v4 = a1 + 6300;
  v3 = *(_DWORD **)(a1 + 6300);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "jump_ed";
  sub_60421938(v3, v2, (int)&v9);
  v5 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
  v6 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v7 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFD9D8, &stru_60AFD9E4, &stru_60AFD9F0);
}
