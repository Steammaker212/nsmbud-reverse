/* sub_60176750
 * address: 0x60176750   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60176750(int a1, int a2, float a3)
{
  int result; // r0

  *(float *)a2 = FIELD_F32(a1, 80) + a3;
  FIELD_U32(a2, 4) = FIELD_U32(a1, 84);
  result = FIELD_U32(a1, 88);
  FIELD_U32(a2, 8) = result;
  return result;
}
