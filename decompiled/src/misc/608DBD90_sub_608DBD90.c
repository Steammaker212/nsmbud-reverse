/* sub_608DBD90
 * address: 0x608DBD90   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DBD90(int result)
{
  *(_DWORD *)result = off_60C5BBCC;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 4) = 0;
  FIELD_U32(result, 20) = 1065353216;
  FIELD_U32(result, 24) = 0;
  FIELD_U32(result, 28) = 0;
  FIELD_U8(result, 32) = 1;
  FIELD_U32(result, 36) = &sead__SafeStringBase__vtable;
  FIELD_U32(result, 40) = &byte_60B3BA34;
  FIELD_U32(result, 44) = 0;
  FIELD_U32(result, 48) = 0;
  FIELD_U8(result, 52) = 0;
  return result;
}
