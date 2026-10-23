/* registerProfile_resident_geyser_sand_6285F0
 * address: 0x606285F0   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_resident_geyser_sand_6285F0()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3F2F;
  Profile__ctor(&stru_60CB3BFC, Actor_resident_geyser_sand_build, 0x7Au, &v1, &stru_60B06958, 2);
  dword_60CB3C18 = ++CurrentStateID;
  dword_60CB3C14 = (int)&off_60C11EEC;
  dword_60CB3C1C = (int)sub_606281EC;
  dword_60CB3C20 = 0;
  dword_60CB3C24 = (int)sub_6062820C;
  dword_60CB3C28 = 0;
  dword_60CB3C2C = (int)nullsub_4940;
  dword_60CB3C30 = 0;
  return &dword_60CB3C14;
}
