/* sub_60553218
 * address: 0x60553218   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60553218(int a1, _DWORD *a2)
{
  int result; // r0
  _DWORD *v5; // r5
  int v6; // t1
  char v7; // r7
  char v8; // r6

  result = FIELD_U8(a1, 41);
  if ( result )
  {
    v6 = FIELD_U32(a1, 17828);
    v5 = (_DWORD *)(a1 + 17828);
    v7 = FIELD_U8(v6, 64);
    v8 = *(_BYTE *)(v5[1] + 64);
    FIELD_U8(v6, 64) = v7 & 0xFE;
    *(_BYTE *)(v5[1] + 64) &= ~1u;
    sub_60473B88(v5 - 4446, a2, 0);
    *(_BYTE *)(*v5 + 64) = *(_BYTE *)(*v5 + 64) & 0xFE | v7 & 1;
    *(_BYTE *)(v5[1] + 64) = *(_BYTE *)(v5[1] + 64) & 0xFE | v8 & 1;
    sub_60473B88(v5 - 2659, a2, 0);
    return sub_60473B88(v5 - 1774, a2, 0);
  }
  return result;
}
