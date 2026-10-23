/* sub_608B8080
 * address: 0x608B8080   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B8080(int a1, int a2, __int16 a3)
{
  int result; // r0

  result = a1 + 2 * a2;
  FIELD_U16(result, 308) = a3;
  return result;
}
