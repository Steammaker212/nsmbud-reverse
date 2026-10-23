/* sub_602C0CC0
 * address: 0x602C0CC0   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C0CC0(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r5
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  float v9; // r0
  Vec3 v10[2]; // [sp+8h] [bp-20h] BYREF

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C9149C + 8))();
  if ( v2 != result )
  {
    FIELD_U8(a1, 6483) = 5;
    LODWORD(v10[0].x) = &sead__SafeStringBase__vtable;
    LODWORD(v10[0].y) = dword_60C91220;
    v4 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)v10);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6304) + 12);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6304) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
    v7 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
    FIELD_U32(a1, 6500) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 660))(a1);
    v9 = FIELD_F32(a1, 108);
    v10[0].y = FIELD_F32(a1, 112);
    v10[0].x = v9;
    v10[0].z = 4500.0;
    return EffectWrapper_update((EffectWrapper *)(a1 + 6508), 572, v10, (Vec3i *)(a1 + 156), 0);
  }
  return result;
}
