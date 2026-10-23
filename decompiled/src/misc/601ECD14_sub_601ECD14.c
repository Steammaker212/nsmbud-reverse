/* sub_601ECD14
 * address: 0x601ECD14   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601ECD14(int a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r0
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r0
  _DWORD *v8; // r0
  int v9; // r2
  unsigned int v10; // r3
  unsigned int v11; // r0

  result = FIELD_U32(a1, 276);
  if ( result != a2 )
  {
    FIELD_U32(a1, 276) = a2;
    sub_60421938(*(_DWORD **)(a1 + 268), FIELD_U32(a1, 272), (int)&dword_60C8B570[4 * a2]);
    v4 = *(_DWORD **)(a1 + 268);
    v5 = v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v5 + 24) = dword_60C8B570[4 * FIELD_U32(a1, 276) + 2];
    v8 = *(_DWORD **)(a1 + 268);
    v9 = v8[3];
    v10 = v8[2];
    v11 = v8[17];
    if ( v10 > v11 )
      v9 += 4 * v11;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), dword_60C8B570[4 * FIELD_U32(a1, 276) + 3]);
    result = FIELD_U32(a1, 276);
    if ( result == 3 )
      return sub_601E4C88((_DWORD *)dword_60C8B13C, 207, (_DWORD *)(a1 + 80));
  }
  return result;
}
