/* sub_602BECC0
 * address: 0x602BECC0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BECC0(int a1)
{
  int v2; // r5
  int result; // r0
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C9149C + 8))();
  if ( v2 != result )
  {
    v4 = *(_DWORD **)(a1 + 6304);
    v5 = v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 656))(a1);
  }
  return result;
}
