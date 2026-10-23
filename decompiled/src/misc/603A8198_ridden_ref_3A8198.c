/* ridden_ref_3A8198
 * address: 0x603A8198   size: 736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ridden_ref_3A8198(_DWORD *a1)
{
  unsigned int *v2; // r11
  int ResArchiveById; // r1
  _DWORD *v4; // r6
  _DWORD *v5; // r0
  int v6; // r1
  _DWORD *v7; // r6
  _DWORD *v8; // r0
  int *v9; // r7
  int v10; // t1
  int v11; // r9
  _DWORD *v12; // r4
  int v13; // r1
  _DWORD *v14; // r0
  int v15; // r0
  int result; // r0
  int v17; // r5
  _DWORD *v18; // r4
  _DWORD *v19; // [sp+0h] [bp-30h]
  int (**v20)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v21; // [sp+8h] [bp-28h]

  v2 = a1 + 5899;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1[1758] + 12), a1[5899]);
  v4 = a1 + 1744;
  v5 = **(_DWORD ***)(a1[1744] + 28);
  v20 = &sead__SafeStringBase__vtable;
  v21 = "ridden";
  ShuAnim_play(v5, ResArchiveById, (int)&v20);
  *(_DWORD *)(**(_DWORD **)(*v4 + 28) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1744] + 28) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[1744] + 28) + 4));
  *(_DWORD *)(**(_DWORD **)(*v4 + 28) + 24) = 0;
  v6 = Profile__getResArchiveById(*(Profile **)(a1[1956] + 12), *v2);
  v7 = a1 + 1942;
  v8 = **(_DWORD ***)(a1[1942] + 28);
  v20 = &sead__SafeStringBase__vtable;
  v21 = "ridden";
  ShuAnim_play(v8, v6, (int)&v20);
  *(_DWORD *)(**(_DWORD **)(*v7 + 28) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1942] + 28) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[1942] + 28) + 4));
  *(_DWORD *)(**(_DWORD **)(*v7 + 28) + 24) = 0;
  v19 = a1;
  v10 = a1[5892];
  v9 = a1 + 5892;
  if ( v10 >= 1 )
  {
    v11 = 0;
    v12 = v19 + 2140;
    do
    {
      v13 = Profile__getResArchiveById(*(Profile **)(v12[14] + 12), *v2);
      v14 = **(_DWORD ***)(*v12 + 28);
      v20 = &sead__SafeStringBase__vtable;
      v21 = "ridden";
      ShuAnim_play(v14, v13, (int)&v20);
      *(_DWORD *)(**(_DWORD **)(*v12 + 28) + 24) = 1065353216;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v12 + 28) + 4), 0);
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v12 + 28) + 4));
      v15 = *v12;
      ++v11;
      v12 += 196;
      *(_DWORD *)(**(_DWORD **)(v15 + 28) + 24) = 0;
    }
    while ( v11 < *v9 );
  }
  sub_60160948(v19 + 1578);
  v19[1748] = v19[1745];
  v19[1749] = v19[1746];
  v19[1750] = v19[1747];
  sub_60160948(v19 + 1776);
  v19[1946] = v19[1943];
  v19[1947] = v19[1944];
  v19[1948] = v19[1945];
  result = *v9;
  if ( *v9 >= 1 )
  {
    v17 = 0;
    v18 = v19 + 1974;
    do
    {
      sub_60160948(v18);
      ++v17;
      v18[170] = v18[167];
      v18[171] = v18[168];
      v18[172] = v18[169];
      v18 += 196;
      result = *v9;
    }
    while ( v17 < *v9 );
  }
  return result;
}
