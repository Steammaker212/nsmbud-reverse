/* sub_6032DDBC
 * address: 0x6032DDBC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6032DDBC(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  int ResArchiveById; // r0
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 6300);
  v2 = *(_DWORD **)(a1 + 6300);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "wait";
  sub_60421938(v2, ResArchiveById, (int)v9);
  v4 = *(_DWORD *)(*v1 + 12);
  v5 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
  v6 = *(_DWORD *)(*v1 + 12);
  v7 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  v1[2] = 180;
  return 180;
}
