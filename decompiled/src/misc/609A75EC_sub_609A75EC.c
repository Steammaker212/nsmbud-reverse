/* sub_609A75EC
 * address: 0x609A75EC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609A75EC(_DWORD *result, int a2)
{
  _DWORD v2[14]; // [sp+0h] [bp-38h] BYREF

  v2[0] = &sead__SafeStringBase__vtable;
  v2[1] = "reduce";
  v2[2] = &sead__SafeStringBase__vtable;
  *result = &sead__SafeStringBase__vtable;
  v2[3] = "expand";
  v2[4] = &sead__SafeStringBase__vtable;
  v2[5] = "blur";
  v2[6] = &sead__SafeStringBase__vtable;
  v2[7] = "color_correction";
  v2[8] = &sead__SafeStringBase__vtable;
  v2[9] = "change_format";
  v2[10] = &sead__SafeStringBase__vtable;
  v2[11] = "color_drift";
  v2[12] = &sead__SafeStringBase__vtable;
  v2[13] = "trimming";
  result[1] = v2[2 * a2 + 1];
  return result;
}
