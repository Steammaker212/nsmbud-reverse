/* sub_60505F40
 * address: 0x60505F40   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60505F40(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  FIELD_U32(a1, 0x0) = (int)&off_60BFF240;
  result = sub_6047611C(a1, (int)&a1[220], 4);
  FIELD_U32(result, 0x0) = (int)&off_60BFF240;
  FIELD_U32(result + (220) * 16, 0x0) = 0;
  FIELD_U32(result + (220) * 16, 0x4) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (220) * 16, 0x8) = (int)&byte_60B3BA34;
  FIELD_U32(result + (220) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(result + (221) * 16, 0x0)) = 0;
  FIELD_U32(result + (221) * 16, 0x4) = 0;
  FIELD_U32(result + (221) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (221) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(result + (222) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(result + (222) * 16, 0x4)) = 0;
  FIELD_U32(result + (222) * 16, 0x8) = 0;
  FIELD_U32(result + (222) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (223) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(result + (223) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(result + (223) * 16, 0x8)) = 0;
  FIELD_U32(result + (223) * 16, 0xC) = 0;
  FIELD_U32(result + (224) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (224) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(result + (224) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(result + (224) * 16, 0xC)) = 0;
  FIELD_U32(result + (226) * 16, 0x0) = 0;
  FIELD_U32(result + (226) * 16, 0x4) = 1;
  return result;
}
