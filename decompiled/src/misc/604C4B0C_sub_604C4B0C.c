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
  result = sub_60475900(a1, (int)&a1[220].field_8, 24);
  FIELD_U32(result, 0x0) = (int)&off_60BFE3D4;
  result[220].field_8 = 0;
  result[220].field_C = (int)&sead__SafeStringBase__vtable;
  result[221].vtable = (int)&byte_60B3BA34;
  result[221].containingHeap = 0;
  LOBYTE(result[221].field_8) = 0;
  result[221].field_C = 0;
  result[222].vtable = (int)&sead__SafeStringBase__vtable;
  result[222].containingHeap = (int)&byte_60B3BA34;
  result[222].field_8 = 0;
  LOBYTE(result[222].field_C) = 0;
  result[223].vtable = 0;
  result[223].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[223].field_8 = (int)&byte_60B3BA34;
  result[223].field_C = 0;
  LOBYTE(result[224].vtable) = 0;
  result[224].containingHeap = 0;
  result[224].field_8 = (int)&sead__SafeStringBase__vtable;
  result[224].field_C = (int)&byte_60B3BA34;
  result[225].vtable = 0;
  LOBYTE(result[225].containingHeap) = 0;
  result[225].field_8 = 0;
  result[225].field_C = (int)&sead__SafeStringBase__vtable;
  result[226].vtable = (int)&byte_60B3BA34;
  result[226].containingHeap = 0;
  LOBYTE(result[226].field_8) = 0;
  result[226].field_C = 0;
  result[227].vtable = (int)&sead__SafeStringBase__vtable;
  result[227].containingHeap = (int)&byte_60B3BA34;
  result[227].field_8 = 0;
  LOBYTE(result[227].field_C) = 0;
  result[228].vtable = 0;
  result[228].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[228].field_8 = (int)&byte_60B3BA34;
  result[228].field_C = 0;
  LOBYTE(result[229].vtable) = 0;
  result[229].containingHeap = 0;
  result[229].field_8 = (int)&sead__SafeStringBase__vtable;
  result[229].field_C = (int)&byte_60B3BA34;
  result[230].vtable = 0;
  LOBYTE(result[230].containingHeap) = 0;
  result[230].field_8 = 0;
  result[230].field_C = (int)&sead__SafeStringBase__vtable;
  result[231].vtable = (int)&byte_60B3BA34;
  result[231].containingHeap = 0;
  LOBYTE(result[231].field_8) = 0;
  result[231].field_C = 0;
  result[232].vtable = (int)&sead__SafeStringBase__vtable;
  result[232].containingHeap = (int)&byte_60B3BA34;
  result[232].field_8 = 0;
  LOBYTE(result[232].field_C) = 0;
  result[233].vtable = 0;
  result[233].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[233].field_8 = (int)&byte_60B3BA34;
  result[233].field_C = 0;
  LOBYTE(result[234].vtable) = 0;
  result[234].containingHeap = 0;
  result[234].field_8 = (int)&sead__SafeStringBase__vtable;
  result[234].field_C = (int)&byte_60B3BA34;
  result[235].vtable = 0;
  LOBYTE(result[235].containingHeap) = 0;
  result[235].field_8 = 0;
  result[235].field_C = (int)&sead__SafeStringBase__vtable;
  result[236].vtable = (int)&byte_60B3BA34;
  result[236].containingHeap = 0;
  LOBYTE(result[236].field_8) = 0;
  result[236].field_C = 0;
  result[237].vtable = (int)&sead__SafeStringBase__vtable;
  result[237].containingHeap = (int)&byte_60B3BA34;
  result[237].field_8 = 0;
  LOBYTE(result[237].field_C) = 0;
  result[238].vtable = 0;
  result[238].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[238].field_8 = (int)&byte_60B3BA34;
  result[238].field_C = 0;
  LOBYTE(result[239].vtable) = 0;
  result[239].containingHeap = 0;
  result[239].field_8 = (int)&sead__SafeStringBase__vtable;
  result[239].field_C = (int)&byte_60B3BA34;
  result[240].vtable = 0;
  LOBYTE(result[240].containingHeap) = 0;
  result[240].field_8 = 0;
  result[240].field_C = (int)&sead__SafeStringBase__vtable;
  result[241].vtable = (int)&byte_60B3BA34;
  result[241].containingHeap = 0;
  LOBYTE(result[241].field_8) = 0;
  result[241].field_C = 0;
  result[242].vtable = (int)&sead__SafeStringBase__vtable;
  result[242].containingHeap = (int)&byte_60B3BA34;
  result[242].field_8 = 0;
  LOBYTE(result[242].field_C) = 0;
  result[243].vtable = 0;
  result[243].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[243].field_8 = (int)&byte_60B3BA34;
  result[243].field_C = 0;
  LOBYTE(result[244].vtable) = 0;
  result[244].containingHeap = 0;
  result[244].field_8 = (int)&sead__SafeStringBase__vtable;
  result[244].field_C = (int)&byte_60B3BA34;
  result[245].vtable = 0;
  LOBYTE(result[245].containingHeap) = 0;
  result[245].field_8 = 0;
  result[245].field_C = (int)&sead__SafeStringBase__vtable;
  result[246].vtable = (int)&byte_60B3BA34;
  result[246].containingHeap = 0;
  LOBYTE(result[246].field_8) = 0;
  result[246].field_C = 0;
  result[247].vtable = (int)&sead__SafeStringBase__vtable;
  result[247].containingHeap = (int)&byte_60B3BA34;
  result[247].field_8 = 0;
  LOBYTE(result[247].field_C) = 0;
  result[248].vtable = 0;
  result[248].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[248].field_8 = (int)&byte_60B3BA34;
  result[248].field_C = 0;
  LOBYTE(result[249].vtable) = 0;
  result[249].containingHeap = 0;
  result[249].field_8 = (int)&sead__SafeStringBase__vtable;
  result[249].field_C = (int)&byte_60B3BA34;
  result[250].vtable = 0;
  LOBYTE(result[250].containingHeap) = 0;
  return result;
}
