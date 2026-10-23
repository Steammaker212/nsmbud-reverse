/* sub_602D2E88
 * address: 0x602D2E88   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602D2E88(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  int v3; // r7
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  _DWORD v10[8]; // [sp+0h] [bp-20h] BYREF

  v1 = (_DWORD *)(a1 + 6856);
  v2 = *(_DWORD **)(a1 + 6856);
  v3 = FIELD_U32(a1, 80);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = off_60BE68F0[v3];
  sub_60421938(v2, ResArchiveById, (int)v10);
  v5 = *(_DWORD *)(*v1 + 12);
  v6 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
  v7 = *(_DWORD *)(*v1 + 12);
  v8 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  *(v1 - 1684) = 0;
  *(v1 - 1683) = 0;
  *(v1 - 1682) = 0;
  v1[1] = 1;
  return 1;
}
