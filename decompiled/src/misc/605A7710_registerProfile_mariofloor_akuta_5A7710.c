/* registerProfile_mariofloor_akuta_5A7710
 * address: 0x605A7710   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mariofloor_akuta_5A7710()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB0050 = 0;
  dword_60CB0054 = 0;
  dword_60CB0058 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD21A6;
  Profile__ctor(&stru_60CB005C, Actor_mariofloor_akuta_build, 0x5Au, &v0, &stru_60B04F14, 0);
}
