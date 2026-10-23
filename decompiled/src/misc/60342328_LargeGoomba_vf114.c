/* LargeGoomba_vf114
 * address: 0x60342328   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall LargeGoomba_vf114(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  int *v5; // r1
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  _DWORD v11[6]; // [sp+0h] [bp-18h] BYREF

  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "split";
  v2 = a1 + 6304;
  sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)v11);
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v3 + 4), 1);
  v5 = *(int **)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += v6;
  v7 = *v5;
  FIELD_U32(v7, 20) = 0;
  FIELD_U32(v7, 28) |= 2u;
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
  return Enemy__beginState_DieFall((Enemy *)a1);
}
