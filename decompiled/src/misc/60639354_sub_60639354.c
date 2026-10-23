/* sub_60639354
 * address: 0x60639354   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60639354(int result)
{
  *(_DWORD *)result = 0;
  FIELD_U32(result, 4) = 1065353216;
  FIELD_U32(result, 8) = 0x20000000;
  FIELD_U8(result, 12) = 1;
  return result;
}
