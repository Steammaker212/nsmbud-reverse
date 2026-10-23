/* ridden_ref
 * address: 0x603A6218   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ridden_ref(_DWORD *a1)
{
  unsigned int *v2; // r10
  int ResArchiveById; // r1
  _DWORD *v4; // r0
  int v5; // r7
  int v6; // r1
  _DWORD *v7; // r0
  int v8; // r3
  int *v9; // r4
  int v10; // t1
  _DWORD *v11; // r6
  int v12; // r1
  _DWORD *v13; // r0
  _DWORD *v15; // [sp+0h] [bp-30h]
  int (**v16)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v17; // [sp+8h] [bp-28h]

  v2 = a1 + 5899;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1[1758] + 12), a1[5899]);
  v4 = **(_DWORD ***)(a1[1744] + 28);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "ridden";
  ShuAnim_play(v4, ResArchiveById, (int)&v16);
  v5 = 0;
  *(_DWORD *)(**(_DWORD **)(a1[1744] + 28) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1744] + 28) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[1744] + 28) + 4));
  v6 = Profile__getResArchiveById(*(Profile **)(a1[1956] + 12), *v2);
  v7 = **(_DWORD ***)(a1[1942] + 28);
  v16 = &sead__SafeStringBase__vtable;
  v17 = "ridden";
  ShuAnim_play(v7, v6, (int)&v16);
  *(_DWORD *)(**(_DWORD **)(a1[1942] + 28) + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1942] + 28) + 4), 0);
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(a1[1942] + 28) + 4));
  v15 = a1;
  v10 = a1[5892];
  v9 = a1 + 5892;
  v8 = v10;
  if ( v10 >= 1 )
  {
    v11 = v15 + 2140;
    do
    {
      v12 = Profile__getResArchiveById(*(Profile **)(v11[14] + 12), *v2);
      v13 = **(_DWORD ***)(*v11 + 28);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "ridden";
      ShuAnim_play(v13, v12, (int)&v16);
      *(_DWORD *)(**(_DWORD **)(*v11 + 28) + 24) = 1065353216;
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v11 + 28) + 4), 0);
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v11 + 28) + 4));
      v8 = *v9;
      ++v5;
      v11 += 196;
    }
    while ( v5 < *v9 );
  }
  v15[1754] = v15[1745];
  v15[1755] = v15[1746];
  v15[1756] = v15[1747];
  v15[1952] = v15[1943];
  v15[1953] = v15[1944];
  v15[1954] = v15[1945];
  v15[5901] = v8 - 1;
  return SE_OBJ_SNAKE_BLOCK_ref();
}
