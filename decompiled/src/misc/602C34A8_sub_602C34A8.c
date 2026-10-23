/* sub_602C34A8
 * address: 0x602C34A8   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C34A8(int a1)
{
  int v2; // r5
  int v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_U32(a1, 100) = -1115684864;
  FIELD_U32(a1, 120) = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 124) = 1069547520;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1077936128;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U8(a1, 6474) = 0;
  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 == (*(int (**)(void))(dword_60C9149C + 8))() )
  {
    FIELD_U8(a1, 6483) = 7;
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = dword_60C91230;
    v3 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)v9);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6304) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6304) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > v5 )
      v4 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 660))(a1);
}
