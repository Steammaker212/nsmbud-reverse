/* sub_602A3EFC
 * address: 0x602A3EFC   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A3EFC(int result, int a2, float a3)
{
  FIELD_U32(result, 24) = a2;
  FIELD_U32(result, 16) = 1065353216;
  FIELD_F32(result, 20) = a3;
  return result;
}
