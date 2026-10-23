/* sub_604072BC
 * address: 0x604072BC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604072BC(int result)
{
  int i; // r1
  int v2; // r2

  for ( i = 0; i != 32; i += 2 )
  {
    v2 = result + 16 * i;
    FIELD_U32(v2, 20) &= ~4u;
    FIELD_U32(v2, 36) &= ~4u;
  }
  return result;
}
