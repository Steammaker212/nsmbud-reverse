/* sub_60786D24
 * address: 0x60786D24   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60786D24(int result, int a2)
{
  bool v2; // zf
  int v3; // r2

  if ( (FIELD_U8(result, 5) & 4) != 0 )
  {
    v2 = a2 == 5;
    v3 = FIELD_U32(result, 132) | (1 << a2);
    if ( a2 == 5 )
      a2 = v3 | 0x2000;
    FIELD_U32(result, 132) = v3;
    if ( v2 )
      FIELD_U32(result, 132) = a2;
  }
  return result;
}
