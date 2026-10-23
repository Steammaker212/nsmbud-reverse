/* sub_6028D8CC
 * address: 0x6028D8CC   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028D8CC(Enemy *a1)
{
  _DWORD *vtable; // r0
  Enemy *v3; // r5
  int *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  int heap; // r1
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int result; // r0
  _DWORD v16[6]; // [sp+0h] [bp-18h] BYREF

  v3 = a1 + 1;
  vtable = (_DWORD *)a1[1]._._._._.vtable;
  v4 = (int *)vtable[3];
  v5 = vtable[2];
  v6 = vtable[17];
  if ( v5 > v6 )
    v4 += v6;
  v7 = *v4;
  heap = a1[1]._._._._.heap;
  v16[0] = &sead__SafeStringBase__vtable;
  v16[1] = "dead";
  SkeletalAnim_play(v7, heap, (int)v16);
  v9 = *(_DWORD *)(FIELD_U32(v3, 0x0) + 12);
  v10 = *(_DWORD *)(FIELD_U32(v3, 0x0) + 68);
  if ( *(_DWORD *)(FIELD_U32(v3, 0x0) + 8) > v10 )
    v9 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
  v11 = *(_DWORD *)(FIELD_U32(v3, 0x0) + 12);
  v12 = *(_DWORD *)(FIELD_U32(v3, 0x0) + 68);
  if ( *(_DWORD *)(FIELD_U32(v3, 0x0) + 8) > v12 )
    v11 += 4 * v12;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
  v13 = *(_DWORD *)(FIELD_U32(v3, 0x0) + 12);
  v14 = *(_DWORD *)(FIELD_U32(v3, 0x0) + 68);
  if ( *(_DWORD *)(FIELD_U32(v3, 0x0) + 8) > v14 )
    v13 += 4 * v14;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v13 + 4));
  Enemy__beginState_DieFumi(a1);
  result = 16;
  if ( FIELD_U32(a1, 0x50) != FIELD_U32(a1, 0x188C) )
  {
    FIELD_U32(a1, 0x9C) = -1073741824;
    result = 32;
  }
  a1[1]._._._._.field_2C = result;
  return result;
}
