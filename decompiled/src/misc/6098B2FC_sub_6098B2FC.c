/* sub_6098B2FC
 * address: 0x6098B2FC   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098B2FC(int result)
{
  *(_DWORD *)result = 0x100000;
  FIELD_U32(result, 4) = 0x100000;
  FIELD_U16(result, 8) = 0;
  return result;
}
