/* sub_60557E60
 * address: 0x60557E60   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60557E60(int a1)
{
  _DWORD *v2; // r5
  int result; // r0

  v2 = (_DWORD *)(a1 + 40);
  sub_604741D8((_DWORD *)(a1 + 40), 0, &dword_60CAD668, 0);
  FIELD_U8(a1, 3672) = 1;
  result = FIELD_U8(a1, 3688);
  if ( FIELD_U8(a1, 3688) )
  {
    result = sub_604741D8(v2, 1u, &dword_60CAD670, 0);
    FIELD_U8(a1, 3673) = 1;
    FIELD_U8(a1, 3688) = 0;
  }
  FIELD_U8(a1, 3685) = 1;
  return result;
}
