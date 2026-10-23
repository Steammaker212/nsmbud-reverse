/* ridden_ref_3A6CA4
 * address: 0x603A6CA4   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ridden_ref_3A6CA4(_DWORD *a1)
{
  unsigned int *v2; // r11
  int ResArchiveById; // r1
  _DWORD *v4; // r6
  _DWORD *v5; // r0
  int v6; // r1
  _DWORD *v7; // r6
  _DWORD *v8; // r0
  _DWORD *v9; // r7
  int v10; // t1
  int v11; // r9
  _DWORD *v12; // r4
  int v13; // r1
  _DWORD *v14; // r0
  int v15; // r0
  _DWORD *v17; // [sp+0h] [bp-30h]
  int (**v18)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v19; // [sp+8h] [bp-28h]

  v2 = a1 + 5899;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1[1758] + 12), a1[5899]);
  v4 = a1 + 1744;
  v5 = **(_DWORD ***)(a1[1744] + 28);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "ridden";
  ShuAnim_play(v5, ResArchiveById, (int)&v18);
  *(_DWORD *)(**(_DWORD **)(*v4 + 28) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1744] + 28) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[1744] + 28) + 4));
  *(_DWORD *)(**(_DWORD **)(*v4 + 28) + 24) = 0;
  v6 = Profile__getResArchiveById(*(Profile **)(a1[1956] + 12), *v2);
  v7 = a1 + 1942;
  v8 = **(_DWORD ***)(a1[1942] + 28);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "ridden";
  ShuAnim_play(v8, v6, (int)&v18);
  *(_DWORD *)(**(_DWORD **)(*v7 + 28) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1942] + 28) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[1942] + 28) + 4));
  *(_DWORD *)(**(_DWORD **)(*v7 + 28) + 24) = 0;
  v17 = a1;
  v10 = a1[5892];
  v9 = a1 + 5892;
  if ( v10 >= 1 )
  {
    v11 = 0;
    v12 = v17 + 2140;
    do
    {
      v13 = Profile__getResArchiveById(*(Profile **)(v12[14] + 12), *v2);
      v14 = **(_DWORD ***)(*v12 + 28);
      v18 = &sead__SafeStringBase__vtable;
      v19 = "ridden";
      ShuAnim_play(v14, v13, (int)&v18);
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
  *((_WORD *)v17 + 11794) = 60;
  return 23588;
}
