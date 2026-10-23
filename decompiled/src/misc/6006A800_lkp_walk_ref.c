/* lkp_walk_ref
 * address: 0x6006A800   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_walk_ref(int a1)
{
  int Resource; // r0
  int v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  _DWORD v10[2]; // [sp+0h] [bp-18h] BYREF
  _DWORD v11[4]; // [sp+8h] [bp-10h] BYREF

  v10[0] = &sead__SafeStringBase__vtable;
  v11[0] = &sead__SafeStringBase__vtable;
  v10[1] = "lkp_walk";
  v11[1] = "koopa";
  Resource = LoadResource(ResourceMgrRelated_instance, v11);
  v4 = *(_DWORD **)(a1 + 7112);
  v3 = a1 + 7112;
  sub_60421938(v4, Resource, (int)v10);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  *(_DWORD *)(v3 - 6992) = 0;
  *(_DWORD *)(v3 - 6988) = 0;
  *(_DWORD *)(v3 - 6984) = 0;
  return -6984;
}
