/* sub_60999294
 * address: 0x60999294   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60999294(int *a1)
{
  int result; // r0

  result = sub_609992C4();
  *a1 = result;
  if ( result )
    FIELD_U8(result, 33) = 0;
  return result;
}
