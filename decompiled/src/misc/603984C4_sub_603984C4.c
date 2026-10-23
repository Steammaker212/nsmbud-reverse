/* sub_603984C4
 * address: 0x603984C4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603984C4(int a1)
{
  _DWORD *v1; // r5
  int v2; // r4
  int v3; // r1
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r0

  v1 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) != 25 )
  {
    *v1 = 25;
    v2 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&dword_60C970B8);
    v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
      v3 += 4 * v4;
    *(_DWORD *)(*(_DWORD *)v3 + 24) = dword_60C96F28[4 * *v1 + 2];
    v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), dword_60C96F28[4 * *v1 + 3]);
  }
}
