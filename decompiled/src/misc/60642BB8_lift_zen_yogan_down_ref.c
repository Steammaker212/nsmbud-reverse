/* lift_zen_yogan_down_ref
 * address: 0x60642BB8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int lift_zen_yogan_down_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5124;
  Profile__ctor(&stru_60CB5A18, Actor_rutokuLift_build, 0xB2u, &v1, &stru_60B0742C, 2);
  dword_60CB5A30 = (int)&sead__SafeStringBase__vtable;
  dword_60CB5A34 = (int)"lift_zen_yogan_down_S";
  byte_60CB5A38 = 4;
  dword_60CB5A3C = (int)&sead__SafeStringBase__vtable;
  dword_60CB5A40 = (int)"lift_zen_yogan_down_M";
  byte_60CB5A44 = 6;
  dword_60CB5A48 = (int)&sead__SafeStringBase__vtable;
  dword_60CB5A4C = (int)"lift_zen_yogan_down_L";
  byte_60CB5A50 = 12;
  return sub_60000288();
}
