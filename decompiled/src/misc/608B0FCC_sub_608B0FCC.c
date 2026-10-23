/* sub_608B0FCC
 * address: 0x608B0FCC   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0FCC(int a1, char a2)
{
  int result; // r0

  result = FIELD_U32(a1, 4);
  FIELD_U8(result, 192) = a2;
  return result;
}
