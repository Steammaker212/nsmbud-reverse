/* sub_603AD914
 * address: 0x603AD914   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603AD914(int a1, int a2)
{
  int v4; // r5
  int v5; // r6
  int ResArchiveById; // r0
  char *v7; // r10
  int v8; // r6
  int v9; // r0
  int v10; // r7
  int v11; // r0
  int v12; // r0
  int (**v14)(); // [sp+0h] [bp-28h] BYREF
  char *v15; // [sp+4h] [bp-24h]

  v4 = a1 + 6304;
  v5 = **(_DWORD **)(FIELD_U32(a1, 6304) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v14 = &sead__SafeStringBase__vtable;
  v7 = off_60BF50FC[a2];
  v15 = v7;
  SkeletalAnim_play(v5, ResArchiveById, (int)&v14);
  v8 = dword_60AF5A6C[a2];
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v4 + 12) + 4), v8);
  v9 = **(_DWORD **)(*(_DWORD *)v4 + 12);
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  v10 = **(_DWORD **)(*(_DWORD *)v4 + 20);
  if ( a2 == 1 )
  {
    v11 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v14 = &sead__SafeStringBase__vtable;
    v15 = v7;
    TexAnim_play(v10, v11, &v14);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v4 + 20) + 4), v8);
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v4 + 20) + 24) = 1065353216;
    v12 = **(_DWORD **)(*(_DWORD *)v4 + 20);
    FIELD_U32(v12, 20) = 0;
    FIELD_U32(v12, 28) |= 2u;
  }
  else
  {
    FIELD_U32(v10, 20) = 0;
    FIELD_U32(v10, 28) |= 2u;
    *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v4 + 20) + 24) = 0;
  }
  FIELD_U32(a1, 6644) = a2;
  return 6644;
}
