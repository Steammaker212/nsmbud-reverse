/* sub_6075B5F0
 * address: 0x6075B5F0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075B5F0(int a1, unsigned int a2, float a3)
{
  int result; // r0

  if ( a2 >= 4 )
    a2 = 0;
  result = a1 + 4 * a2;
  FIELD_F32(result, 568) = a3;
  return result;
}
