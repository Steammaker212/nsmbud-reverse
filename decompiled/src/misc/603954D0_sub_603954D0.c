/* sub_603954D0
 * address: 0x603954D0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603954D0(int a1)
{
  int *v2; // r5
  _DWORD *v3; // r6
  int v4; // r7
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int result; // r0

  v2 = (int *)(a1 + 6412);
  sub_6039E2D0(a1, a1 + 6424, FIELD_U32(a1, 6412));
  v3 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) != 1 )
  {
    *v3 = 1;
    v4 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&dword_60C96F38);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6304) + 12);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6304) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > v6 )
      v5 += 4 * v6;
    *(_DWORD *)(*(_DWORD *)v5 + 24) = dword_60C96F28[4 * *v3 + 2];
    v7 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v8 )
      v7 += 4 * v8;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), dword_60C96F28[4 * *v3 + 3]);
  }
  result = *v2;
  if ( *v2 == 1 )
  {
    FIELD_U32(a1, 80) = 1;
    return 1;
  }
  else if ( !result )
  {
    result = 0;
    FIELD_U32(a1, 80) = 0;
  }
  return result;
}
