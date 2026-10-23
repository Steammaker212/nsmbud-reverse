/* lkp_fire1_ref
 * address: 0x600699F0   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_fire1_ref(int *a1)
{
  int v2; // r1
  int *v3; // r5
  int Resource; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // t1
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v12; // r0
  _DWORD v13[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v14[6]; // [sp+8h] [bp-18h] BYREF

  if ( sub_600776A0() == 1 )
  {
    if ( (*(int (__fastcall **)(int *))(*a1 + 716))(a1) == 1 )
    {
      v2 = 1;
      v3 = a1 + 6343;
    }
    else
    {
      v3 = a1 + 6343;
      v12 = (*(int (__fastcall **)(int *))(*a1 + 720))(a1);
      v2 = 2;
      if ( v12 == 1 )
        v2 = 1;
    }
    *v3 = v2;
    return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C8148C);
  }
  else if ( ((int (__fastcall *)(int *))loc_60077258)(a1) )
  {
    v13[0] = &sead__SafeStringBase__vtable;
    v14[0] = &sead__SafeStringBase__vtable;
    v13[1] = "lkp_fire1";
    v14[1] = "koopa";
    Resource = LoadResource(ResourceMgrRelated_instance, v14);
    v6 = (_DWORD *)a1[1778];
    v5 = a1 + 1778;
    sub_60421938(v6, Resource, (int)v13);
    v7 = *(_DWORD *)(*v5 + 12);
    v8 = *(_DWORD *)(*v5 + 68);
    if ( *(_DWORD *)(*v5 + 8) > v8 )
      v7 += 4 * v8;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 0);
    v9 = *(_DWORD *)(*v5 + 12);
    v10 = *(_DWORD *)(*v5 + 68);
    if ( *(_DWORD *)(*v5 + 8) > v10 )
      v9 += 4 * v10;
    *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
    *(v5 - 1748) = 0;
    *(v5 - 1747) = 0;
    *(v5 - 1746) = 0;
    return -6984;
  }
  else
  {
    return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C813EC);
  }
}
