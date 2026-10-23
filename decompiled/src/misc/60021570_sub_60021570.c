/* sub_60021570
 * address: 0x60021570   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60021570(int result, int a2)
{
  int v2; // r1

  v2 = FIELD_U32(result, 12) - a2;
  FIELD_U32(result, 8) = 5;
  if ( v2 <= 0 )
    v2 = 0;
  FIELD_U32(result, 12) = v2;
  return result;
}
