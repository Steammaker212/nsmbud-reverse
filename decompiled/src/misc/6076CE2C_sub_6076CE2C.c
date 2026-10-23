/* sub_6076CE2C
 * address: 0x6076CE2C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076CE2C(int a1)
{
  int v2; // r2
  int result; // r0

  v2 = FIELD_U32(a1, 9788);
  result = 0;
  if ( !v2 && (FIELD_U8(a1, 1219) & 8) == 0 )
    return sub_60766958(a1) ^ 1;
  return result;
}
