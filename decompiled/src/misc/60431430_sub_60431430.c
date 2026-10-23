/* sub_60431430
 * address: 0x60431430   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60431430(int result)
{
  *(_DWORD *)result = off_60BFA720;
  FIELD_U32(result, 4) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U8(result, 20) = 2;
  FIELD_U32(result, 28) = 0;
  FIELD_U32(result, 32) = 0;
  FIELD_U32(result, 36) = 0;
  return result;
}
