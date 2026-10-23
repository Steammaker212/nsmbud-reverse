/* sub_6050DF0C
 * address: 0x6050DF0C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6050DF0C(int a1)
{
  unsigned int result; // r0

  result = FIELD_U32(a1, 8);
  if ( result > 7 )
    return 0;
  return result;
}
