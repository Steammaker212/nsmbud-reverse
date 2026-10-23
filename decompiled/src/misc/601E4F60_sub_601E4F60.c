/* sub_601E4F60
 * address: 0x601E4F60   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E4F60(int a1, unsigned int a2)
{
  int result; // r0

  if ( a2 >= 0x1E )
    a2 = 0;
  result = a1 + 48 * a2;
  FIELD_U8(result, 96) = 0;
  return result;
}
