/* sub_6032FEF8
 * address: 0x6032FEF8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032FEF8(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  unsigned int v3; // r2
  int v4; // r0
  int ResArchiveById; // r0
  int v6; // r1
  unsigned int v7; // r0
  int *v8; // r1
  unsigned int v9; // r0
  int result; // r0
  _DWORD v11[6]; // [sp+0h] [bp-18h] BYREF

  v1 = (_DWORD *)(a1 + 6300);
  v2 = *(_DWORD **)(a1 + 6300);
  v3 = v2[17];
  v4 = v2[3];
  if ( v2[2] > v3 )
    v4 += 4 * v3;
  v1[201] = *(_DWORD *)(*(_DWORD *)v4 + 20);
  ResArchiveById = Profile__getResArchiveById((Profile *)*(v1 - 1572), 0);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "wait";
  sub_60421938(v2, ResArchiveById, (int)v11);
  v6 = *(_DWORD *)(*v1 + 12);
  v7 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v7 )
    v6 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 1);
  v8 = *(int **)(*v1 + 12);
  v9 = *(_DWORD *)(*v1 + 68);
  if ( *(_DWORD *)(*v1 + 8) > v9 )
    v8 += v9;
  result = *v8;
  *(_DWORD *)(*v8 + 24) = 1065353216;
  return result;
}
