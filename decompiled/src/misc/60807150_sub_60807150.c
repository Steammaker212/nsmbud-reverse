/* sub_60807150
 * address: 0x60807150   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60807150(int result)
{
  *(_DWORD *)result = 0;
  FIELD_U32(result, 4) = 0;
  FIELD_U32(result, 8) = 4;
  FIELD_U32(result, 12) = 3;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 24) = 1;
  FIELD_U32(result, 28) = 9216000;
  FIELD_U8(result, 32) = 1;
  return result;
}
