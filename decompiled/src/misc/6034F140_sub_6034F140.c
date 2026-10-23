/* sub_6034F140
 * address: 0x6034F140   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034F140(int result)
{
  __int64 v1; // r2

  HIDWORD(v1) = 1075838976;
  LODWORD(v1) = dword_60AF20C8[FIELD_U32(result, 80)];
  FIELD_U32(result, 132) = v1;
  FIELD_U64(result, 120) = v1;
  return result;
}
