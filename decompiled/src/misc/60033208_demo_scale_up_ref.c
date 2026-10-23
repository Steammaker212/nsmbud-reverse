/* demo_scale_up_ref
 * address: 0x60033208   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall demo_scale_up_ref(int a1)
{
  int ResArchiveById; // r5
  int v3; // r4
  _DWORD *v4; // t1
  _DWORD *v5; // r0
  int *v6; // r0
  int v7; // r0
  int v8; // r0
  int (**v9)(); // [sp+0h] [bp-20h] BYREF
  const char *v10; // [sp+4h] [bp-1Ch]

  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v4 = *(_DWORD **)(a1 + 6300);
  v3 = a1 + 6300;
  v9 = &sead__SafeStringBase__vtable;
  v10 = "demo_scale_up";
  sub_60421938(v4, ResArchiveById, (int)&v9);
  *(_DWORD *)(v3 - 6156) = 1065353216;
  *(_DWORD *)(v3 - 6152) = 1065353216;
  *(_DWORD *)(v3 - 6148) = 1065353216;
  v5 = **(_DWORD ***)(*(_DWORD *)v3 + 28);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "demo_scale_up";
  ShuAnim_play(v5, ResArchiveById, (int)&v9);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 28) + 4), 0);
  v6 = *(int **)(*(_DWORD *)v3 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 24) > 1u )
    ++v6;
  v7 = *v6;
  v9 = &sead__SafeStringBase__vtable;
  v10 = "demo_scale_up";
  sub_60446088(v7, ResArchiveById, (int)&v9);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 24) > 1u )
    v8 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), 0);
}
