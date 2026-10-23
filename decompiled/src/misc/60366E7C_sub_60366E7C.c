/* sub_60366E7C
 * address: 0x60366E7C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60366E7C(int a1)
{
  _DWORD *v2; // r6
  int v3; // r7
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0

  v2 = (_DWORD *)(a1 + 6112);
  if ( FIELD_U32(a1, 6112) )
  {
    *v2 = 0;
    v3 = a1 + 6104;
    sub_60421938(*(_DWORD **)(a1 + 6104), FIELD_U32(a1, 6100), (int)dword_60C95A38);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6104) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6104) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6104) + 8) > v5 )
      v4 += 4 * v5;
    *(_DWORD *)(*(_DWORD *)v4 + 24) = dword_60C95A38[4 * *v2 + 2];
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), dword_60C95A38[4 * *v2 + 3]);
  }
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return 0;
}
