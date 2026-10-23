/* sub_60955528
 * address: 0x60955528   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60955528(int a1, int a2)
{
  int result; // r0
  __int16 v5; // r0
  __int16 v6; // r1

  result = FIELD_U8(a1, 80) & 1;
  if ( result != a2 )
  {
    sub_60958440(FIELD_U32(a1, 20));
    v5 = FIELD_U16(a1, 80);
    v6 = v5 & 0xFFFE;
    if ( a2 )
      v6 = v5 | 1;
    FIELD_U16(a1, 80) = v6;
    return sub_60958448(FIELD_U32(a1, 20));
  }
  return result;
}
