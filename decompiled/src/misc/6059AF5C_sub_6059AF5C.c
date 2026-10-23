/* sub_6059AF5C
 * address: 0x6059AF5C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059AF5C(int result, int *a2)
{
  int v2; // r2

  v2 = *a2;
  FIELD_U32(result, 6384) = a2[1];
  FIELD_U32(result, 6380) = v2;
  return result;
}
