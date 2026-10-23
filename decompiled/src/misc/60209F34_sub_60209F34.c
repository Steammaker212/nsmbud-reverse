/* sub_60209F34
 * address: 0x60209F34   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60209F34(int a1)
{
  int ResArchiveById; // r0
  _DWORD *v3; // r0
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0
  int result; // r0
  _DWORD v12[4]; // [sp+0h] [bp-10h] BYREF

  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "walk";
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  sub_60421938(*(_DWORD **)(a1 + 408), ResArchiveById, (int)v12);
  v3 = *(_DWORD **)(a1 + 408);
  v4 = v3[3];
  v5 = v3[2];
  v6 = v3[17];
  if ( v5 > v6 )
    v4 += 4 * v6;
  *(_DWORD *)(*(_DWORD *)v4 + 24) = 1065353216;
  v7 = *(_DWORD **)(a1 + 408);
  v8 = v7[3];
  v9 = v7[2];
  v10 = v7[17];
  if ( v9 > v10 )
    v8 += 4 * v10;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), 1);
  result = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 192);
  FIELD_U32(a1, 520) = result;
  return result;
}
