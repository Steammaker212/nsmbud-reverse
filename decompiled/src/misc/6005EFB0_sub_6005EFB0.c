/* sub_6005EFB0
 * address: 0x6005EFB0   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005EFB0(int a1)
{
  int v2; // r4
  _DWORD *v3; // t1
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int *v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  _DWORD v13[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v14[8]; // [sp+8h] [bp-20h] BYREF

  v14[2] = &sead__SafeStringBase__vtable;
  v14[3] = "fly_wait";
  sub_60051780(a1);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "fly_wait";
  sub_60051794(a1, (int)v14, 1);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "fly_wing_wait";
  v3 = *(_DWORD **)(a1 + 7836);
  v2 = a1 + 7836;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v2 - 7824), 0);
  sub_60421938(v3, ResArchiveById, (int)v13);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += 4 * v6;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 1);
  v7 = *(int **)(*(_DWORD *)v2 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
    v7 += v8;
  v9 = *v7;
  FIELD_U32(v9, 20) = 0;
  FIELD_U32(v9, 28) |= 2u;
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
    v10 += 4 * v11;
  *(_DWORD *)(*(_DWORD *)v10 + 24) = 1065353216;
  *(_WORD *)(v2 - 1560) = 10;
  return -1560;
}
