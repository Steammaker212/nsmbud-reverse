/* sub_608F1BA4
 * address: 0x608F1BA4   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F1BA4(int result, int a2)
{
  char v2; // r2

  v2 = 2;
  if ( a2 )
    v2 = 3;
  FIELD_U8(result, 41) = v2;
  return result;
}
