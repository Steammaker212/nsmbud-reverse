/* sub_6075F8F8
 * address: 0x6075F8F8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6075F8F8(int a1)
{
  int v1; // r2

  v1 = a1 + 180;
  if ( (FIELD_U8(a1, 6900) & 1) == 0 )
    v1 = a1 + 636;
  return *(float *)v1;
}
