/* lkp_wait_ref_6AFA0
 * address: 0x6006AFA0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_wait_ref_6AFA0(_WORD *a1)
{
  int Resource; // r0
  _WORD *v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  _DWORD v9[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v10[6]; // [sp+8h] [bp-18h] BYREF

  v9[0] = &sead__SafeStringBase__vtable;
  v10[0] = &sead__SafeStringBase__vtable;
  v9[1] = "lkp_wait";
  v10[1] = "koopa";
  Resource = LoadResource(ResourceMgrRelated_instance, v10);
  v3 = a1 + 3556;
  sub_60421938(*((_DWORD **)a1 + 1778), Resource, (int)v9);
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
  if ( !(*(int (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 716))(a1) )
    (*(void (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 720))(a1);
  a1[3138] = 376;
  return 6276;
}
