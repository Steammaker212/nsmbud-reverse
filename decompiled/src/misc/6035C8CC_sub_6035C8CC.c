/* sub_6035C8CC
 * address: 0x6035C8CC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035C8CC(int result, int a2)
{
  FIELD_U32(result, 6864) = -178956970 * byte_60AFE3F4[a2];
  return result;
}
