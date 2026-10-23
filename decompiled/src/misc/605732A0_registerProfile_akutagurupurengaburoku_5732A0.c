/* registerProfile_akutagurupurengaburoku_5732A0
 * address: 0x605732A0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutagurupurengaburoku_5732A0()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD18D1;
  Profile__ctor(&stru_60CAEA28, Actor_akutagurupurengaburoku_build, 0x129u, v0, &stru_60B04574, 4098);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD18FC;
  Profile__ctor(&stru_60CAEA40, Actor_akutagurupurengaburoku_build, 0x12Bu, v0, &stru_60B04598, 4098);
}
