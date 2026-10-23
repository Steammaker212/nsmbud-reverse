/* sub_602BF4A8
 * address: 0x602BF4A8   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BF4A8(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r5
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C9149C + 8))();
  if ( v2 != result )
  {
    FIELD_U8(a1, 6483) = 6;
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = dword_60C91228;
    v4 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)v9);
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
    FIELD_U32(a1, 6344) = 0;
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 660))(a1);
  }
  return result;
}
