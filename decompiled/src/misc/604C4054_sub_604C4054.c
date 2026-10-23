/* sub_604C4054
 * address: 0x604C4054   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C4054(int result)
{
  *(_BYTE *)(FIELD_U32(result, 13872) + 64) |= 1u;
  FIELD_U8(result, 14170) = 1;
  FIELD_U8(result, 14171) = 1;
  FIELD_U8(result, 14175) = 0;
  FIELD_U8(result, 14178) = 0;
  return result;
}
