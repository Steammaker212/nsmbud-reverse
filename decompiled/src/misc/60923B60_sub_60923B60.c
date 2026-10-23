/* sub_60923B60
 * address: 0x60923B60   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60923B60(int result, unsigned int a2, int a3)
{
  int v3; // r1

  if ( a2 >= 0x80 )
    a2 = 0;
  v3 = result + 4 * a2;
  FIELD_U32(result, 516) -= FIELD_U32(v3, 4);
  FIELD_U32(v3, 4) = a3;
  FIELD_U32(result, 516) += a3;
  return result;
}
