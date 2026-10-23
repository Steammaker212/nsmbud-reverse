/* sub_608A7E9C
 * address: 0x608A7E9C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A7E9C(int result, int a2)
{
  int v2; // r2

  v2 = 2;
  if ( a2 < 0x10000 )
    v2 = 1;
  if ( a2 < 256 )
    v2 = 0;
  FIELD_U32(result, 16) = v2;
  FIELD_U32(result, 28) = a2;
  return result;
}
