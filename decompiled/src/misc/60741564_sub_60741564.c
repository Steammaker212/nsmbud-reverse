/* sub_60741564
 * address: 0x60741564   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60741564(int result)
{
  *(_BYTE *)(FIELD_U32(result, 56) + 110) = 0;
  FIELD_U8(result, 6103) = 0;
  FIELD_U32(result, 6104) = 30;
  FIELD_U32(result, 6108) = 0;
  return result;
}
