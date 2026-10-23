/* sub_608CAE20
 * address: 0x608CAE20   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CAE20(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = sub_608CB63C(a1 + 200 * a2, a3);
  if ( a4 == 1 )
    FIELD_U32(a1, 420) = a3;
  return result;
}
