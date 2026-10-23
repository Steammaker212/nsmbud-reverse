/* lkp_tired_ref
 * address: 0x6006B734   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_tired_ref(_WORD *a1)
{
  int v2; // r0
  _WORD *v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  __int16 v9; // r1
  int v10; // r0
  _DWORD v12[2]; // [sp+0h] [bp-38h] BYREF
  _DWORD v13[2]; // [sp+8h] [bp-30h] BYREF
  int (**v14)(); // [sp+10h] [bp-28h] BYREF
  const char *v15; // [sp+14h] [bp-24h]

  v14 = &sead__SafeStringBase__vtable;
  v15 = "koopa";
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "lkp_tired";
  v2 = LoadResource(ResourceMgrRelated_instance, &v14);
  v3 = a1 + 3556;
  sub_60421938(*((_DWORD **)a1 + 1778), v2, (int)v13);
  v4 = *(_DWORD *)(*((_DWORD *)a1 + 1778) + 12);
  v5 = *(_DWORD *)(*((_DWORD *)a1 + 1778) + 68);
  if ( *(_DWORD *)(*((_DWORD *)a1 + 1778) + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "lkp_tired";
  v14 = &sead__SafeStringBase__vtable;
  v15 = "koopa_model";
  v8 = LoadResource(ResourceMgrRelated_instance, &v14);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v3 + 20), v8, v12);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 24) = 1065353216;
  if ( (*(int (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 716))(a1) == 1 )
  {
    v9 = 240;
  }
  else
  {
    v10 = (*(int (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 720))(a1);
    v9 = 160;
    if ( v10 == 1 )
      v9 = 240;
  }
  a1[3138] = v9;
  return 6276;
}
