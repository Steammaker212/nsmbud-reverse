/* sub_609A70BC
 * address: 0x609A70BC   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A70BC(int result, int a2)
{
  int v2; // r2

  v2 = 1;
  if ( a2 )
    v2 = 5;
  FIELD_U32(result, 1632) = v2;
  return result;
}
