/* sub_60639370
 * address: 0x60639370   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60639370(int result)
{
  char v1; // r1

  v1 = 0;
  if ( *(float *)result != 0.0 )
    v1 = 3;
  FIELD_U8(result, 12) = v1;
  return result;
}
