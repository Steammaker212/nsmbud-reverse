/* sub_60187014
 * address: 0x60187014   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60187014(int result)
{
  char v1; // r1

  v1 = FIELD_U8(result, 1098) + 1;
  if ( v1 == 4 )
    v1 = 0;
  FIELD_U8(result, 1098) = v1;
  return result;
}
