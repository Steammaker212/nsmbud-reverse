/* lkp_fire4_ref
 * address: 0x6006A144   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_fire4_ref(_DWORD *a1)
{
  int Resource; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  _DWORD v10[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v11[6]; // [sp+8h] [bp-18h] BYREF

  if ( !((int (*)(void))loc_60077258)() )
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C813EC);
  v10[0] = &sead__SafeStringBase__vtable;
  v11[0] = &sead__SafeStringBase__vtable;
  v10[1] = "lkp_fire4";
  v11[1] = "koopa";
  Resource = LoadResource(ResourceMgrRelated_instance, v11);
  v4 = (_DWORD *)a1[1778];
  v3 = a1 + 1778;
  sub_60421938(v4, Resource, (int)v10);
  v5 = *(_DWORD *)(*v3 + 12);
  v6 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v7 = *(_DWORD *)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  *(v3 - 1748) = 0;
  *(v3 - 1747) = 0;
  *(v3 - 1746) = 0;
  return -6984;
}
