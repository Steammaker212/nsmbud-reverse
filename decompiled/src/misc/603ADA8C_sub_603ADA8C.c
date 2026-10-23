/* sub_603ADA8C
 * address: 0x603ADA8C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603ADA8C(int a1, int a2)
{
  int v4; // r7
  int v5; // r6
  Profile **v6; // r5
  int ResArchiveById; // r0
  char *v8; // r11
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // s0
  _DWORD *v15; // r0
  int (**v17)(); // [sp+4h] [bp-2Ch] BYREF
  char *v18; // [sp+8h] [bp-28h]

  v4 = a1 + 6300;
  v5 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  v6 = (Profile **)(a1 + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v8 = off_60BF5104[a2];
  v17 = &sead__SafeStringBase__vtable;
  v18 = v8;
  SkeletalAnim_play(v5, ResArchiveById, (int)&v17);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v4 + 12) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v4 + 12) + 24) = 1065353216;
  v9 = **(_DWORD **)(*(_DWORD *)v4 + 12);
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  v10 = **(_DWORD **)(*(_DWORD *)v4 + 20);
  v11 = Profile__getResArchiveById(*v6, 0);
  v17 = &sead__SafeStringBase__vtable;
  v18 = v8;
  TexAnim_play(v10, v11, &v17);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v4 + 20) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v4 + 20) + 24) = 1065353216;
  v12 = **(_DWORD **)(*(_DWORD *)v4 + 20);
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  v13 = **(_DWORD ***)(*(_DWORD *)v4 + 12);
  if ( a2 )
  {
    v13[5] = 0;
    v14 = 0;
    v13[7] |= 2u;
    v15 = **(_DWORD ***)(*(_DWORD *)v4 + 20);
  }
  else
  {
    v13[5] = v13[2];
    v13[7] |= 2u;
    v15 = **(_DWORD ***)(*(_DWORD *)v4 + 20);
    v14 = v15[2];
  }
  v15[5] = v14;
  v15[7] |= 2u;
  FIELD_U32(a1, 6648) = a2;
  return 6648;
}
