/* sub_6031F5A8
 * address: 0x6031F5A8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031F5A8(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  Profile **v3; // r6
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  _DWORD *v9; // r5
  int v10; // r0
  int (**v12)(); // [sp+0h] [bp-20h] BYREF
  const char *v13; // [sp+4h] [bp-1Ch]

  v1 = (_DWORD *)(a1 + 7124);
  v2 = *(_DWORD **)(a1 + 7124);
  v3 = (Profile **)(a1 + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "pinch";
  sub_60421938(v2, ResArchiveById, (int)&v12);
  v5 = *(_DWORD *)(*v1 + 12);
  v6 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(_DWORD *)(*v1 + 12);
  v8 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v8 )
    v7 += 4 * v8;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v7 + 4));
  v9 = **(_DWORD ***)(*v1 + 28);
  v10 = Profile__getResArchiveById(*v3, 0);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "pinch";
  ShuAnim_play(v9, v10, (int)&v12);
  *(_DWORD *)(**(_DWORD **)(*v1 + 28) + 24) = 0x40000000;
  v1[1468] = 90;
  return 5872;
}
