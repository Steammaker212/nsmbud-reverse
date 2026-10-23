/* sub_60998FA0
 * address: 0x60998FA0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998FA0(int result)
{
  *(_DWORD *)result = 0;
  FIELD_U32(result, 4) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = 1;
  FIELD_U32(result, 16) = 1;
  FIELD_U32(result, 20) = 1;
  FIELD_U16(result, 24) = 0;
  FIELD_U32(result, 28) = 0;
  FIELD_U32(result, 32) = 1;
  return result;
}
