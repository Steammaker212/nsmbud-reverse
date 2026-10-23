/* DryBones__vfD4
 * address: 0x60316D2C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A93AC
// 
// Overridden by: None
unsigned int __fastcall DryBones__vfD4(int a1)
{
  _DWORD *v2; // r6
  unsigned int result; // r0
  int v4; // r4
  _DWORD *v5; // t1
  int ResArchiveById; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  _DWORD v11[8]; // [sp+0h] [bp-20h] BYREF

  FIELD_U8(a1, 7659) = 1;
  v2 = (_DWORD *)(a1 + 7624);
  result = FIELD_U32(a1, 7624) - 1;
  if ( result <= 1 )
  {
    v5 = *(_DWORD **)(a1 + 6300);
    v4 = a1 + 6300;
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(v4 - 6288), 0);
    v11[0] = &sead__SafeStringBase__vtable;
    v11[1] = "walk";
    sub_60421938(v5, ResArchiveById, (int)v11);
    v7 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
      v7 += 4 * v8;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 1);
    v9 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v10 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v10 )
      v9 += 4 * v10;
    result = *(_DWORD *)v9;
    *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
    *v2 = 0;
  }
  return result;
}
