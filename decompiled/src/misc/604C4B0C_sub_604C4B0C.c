/* sub_604C4B0C
 * address: 0x604C4B0C   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_604C4B0C(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  FIELD_U32(a1, 0x0) = (int)&off_60BFE3D4;
  result = sub_60475900(a1, (int)&FIELD_U32(a1 + (220) * 16, 0x8), 24);
  FIELD_U32(result, 0x0) = (int)&off_60BFE3D4;
  FIELD_U32(result + (220) * 16, 0x8) = 0;
  FIELD_U32(result + (220) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (221) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(result + (221) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(result + (221) * 16, 0x8)) = 0;
  FIELD_U32(result + (221) * 16, 0xC) = 0;
  FIELD_U32(result + (222) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (222) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(result + (222) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(result + (222) * 16, 0xC)) = 0;
  FIELD_U32(result + (223) * 16, 0x0) = 0;
  result[223].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[223].field_8 = (int)&byte_60B3BA34;
  FIELD_U32(result + (223) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(result + (224) * 16, 0x0)) = 0;
  FIELD_U32(result + (224) * 16, 0x4) = 0;
  FIELD_U32(result + (224) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (224) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(result + (225) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(result + (225) * 16, 0x4)) = 0;
  FIELD_U32(result + (225) * 16, 0x8) = 0;
  FIELD_U32(result + (225) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (226) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(result + (226) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(result + (226) * 16, 0x8)) = 0;
  FIELD_U32(result + (226) * 16, 0xC) = 0;
  FIELD_U32(result + (227) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (227) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(result + (227) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(result + (227) * 16, 0xC)) = 0;
  FIELD_U32(result + (228) * 16, 0x0) = 0;
  result[228].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[228].field_8 = (int)&byte_60B3BA34;
  FIELD_U32(result + (228) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(result + (229) * 16, 0x0)) = 0;
  FIELD_U32(result + (229) * 16, 0x4) = 0;
  FIELD_U32(result + (229) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (229) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(result + (230) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(result + (230) * 16, 0x4)) = 0;
  FIELD_U32(result + (230) * 16, 0x8) = 0;
  FIELD_U32(result + (230) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (231) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(result + (231) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(result + (231) * 16, 0x8)) = 0;
  FIELD_U32(result + (231) * 16, 0xC) = 0;
  FIELD_U32(result + (232) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (232) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(result + (232) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(result + (232) * 16, 0xC)) = 0;
  FIELD_U32(result + (233) * 16, 0x0) = 0;
  result[233].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[233].field_8 = (int)&byte_60B3BA34;
  FIELD_U32(result + (233) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(result + (234) * 16, 0x0)) = 0;
  FIELD_U32(result + (234) * 16, 0x4) = 0;
  FIELD_U32(result + (234) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (234) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(result + (235) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(result + (235) * 16, 0x4)) = 0;
  FIELD_U32(result + (235) * 16, 0x8) = 0;
  FIELD_U32(result + (235) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (236) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(result + (236) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(result + (236) * 16, 0x8)) = 0;
  FIELD_U32(result + (236) * 16, 0xC) = 0;
  FIELD_U32(result + (237) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (237) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(result + (237) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(result + (237) * 16, 0xC)) = 0;
  FIELD_U32(result + (238) * 16, 0x0) = 0;
  result[238].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[238].field_8 = (int)&byte_60B3BA34;
  FIELD_U32(result + (238) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(result + (239) * 16, 0x0)) = 0;
  FIELD_U32(result + (239) * 16, 0x4) = 0;
  FIELD_U32(result + (239) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (239) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(result + (240) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(result + (240) * 16, 0x4)) = 0;
  FIELD_U32(result + (240) * 16, 0x8) = 0;
  FIELD_U32(result + (240) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (241) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(result + (241) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(result + (241) * 16, 0x8)) = 0;
  FIELD_U32(result + (241) * 16, 0xC) = 0;
  FIELD_U32(result + (242) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (242) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(result + (242) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(result + (242) * 16, 0xC)) = 0;
  FIELD_U32(result + (243) * 16, 0x0) = 0;
  result[243].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[243].field_8 = (int)&byte_60B3BA34;
  FIELD_U32(result + (243) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(result + (244) * 16, 0x0)) = 0;
  FIELD_U32(result + (244) * 16, 0x4) = 0;
  FIELD_U32(result + (244) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (244) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(result + (245) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(result + (245) * 16, 0x4)) = 0;
  FIELD_U32(result + (245) * 16, 0x8) = 0;
  FIELD_U32(result + (245) * 16, 0xC) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (246) * 16, 0x0) = (int)&byte_60B3BA34;
  FIELD_U32(result + (246) * 16, 0x4) = 0;
  LOBYTE(FIELD_U32(result + (246) * 16, 0x8)) = 0;
  FIELD_U32(result + (246) * 16, 0xC) = 0;
  FIELD_U32(result + (247) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (247) * 16, 0x4) = (int)&byte_60B3BA34;
  FIELD_U32(result + (247) * 16, 0x8) = 0;
  LOBYTE(FIELD_U32(result + (247) * 16, 0xC)) = 0;
  FIELD_U32(result + (248) * 16, 0x0) = 0;
  result[248].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[248].field_8 = (int)&byte_60B3BA34;
  FIELD_U32(result + (248) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(result + (249) * 16, 0x0)) = 0;
  FIELD_U32(result + (249) * 16, 0x4) = 0;
  FIELD_U32(result + (249) * 16, 0x8) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (249) * 16, 0xC) = (int)&byte_60B3BA34;
  FIELD_U32(result + (250) * 16, 0x0) = 0;
  LOBYTE(FIELD_U32(result + (250) * 16, 0x4)) = 0;
  return result;
}
