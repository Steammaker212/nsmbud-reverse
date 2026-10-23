/* sub_608DA77C
 * address: 0x608DA77C   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DA77C(int a1, float a2)
{
  int result; // r0

  result = FIELD_U32(a1, 12);
  FIELD_F32(result, 36) = a2;
  return result;
}
