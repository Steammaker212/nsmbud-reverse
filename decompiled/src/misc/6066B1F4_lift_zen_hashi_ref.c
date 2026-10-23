/* lift_zen_hashi_ref
 * address: 0x6066B1F4   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void lift_zen_hashi_ref()
{
  sead__SafeString v0; // [sp+10h] [bp-18h] BYREF

  dword_60CB6D98 = (int)&sead__SafeStringBase__vtable;
  dword_60CB6D9C = (int)"lift_zen_hashi_S";
  dword_60CB6DA0 = 1107296256;
  dword_60CB6DA4 = 1121976320;
  dword_60CB6DA8 = (int)&sead__SafeStringBase__vtable;
  dword_60CB6DAC = (int)"lift_zen_hashi_M";
  dword_60CB6DB0 = 1107296256;
  dword_60CB6DB4 = 1125122048;
  dword_60CB6DB8 = (int)&sead__SafeStringBase__vtable;
  dword_60CB6DBC = (int)"lift_zen_hashi_L";
  dword_60CB6DC0 = 1107296256;
  dword_60CB6DC4 = 1128267776;
  sub_60000288();
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD5D02;
  Profile__ctor(&stru_60CB6DC8, Actor_ne_build, 0x93u, &v0, &stru_60B07A48, 2);
}
