/* sub_606447F4
 * address: 0x606447F4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606447F4(_DWORD *a1, float a2)
{
  int result; // r0

  sub_606303F4(a1 + 1, a2);
  result = **(_DWORD **)(*a1 + 20);
  FIELD_F32(result, 20) = a2;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
