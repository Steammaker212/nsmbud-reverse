/* registerProfile_sea_for_678250
 * address: 0x60678250   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_sea_for_678250()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD6250;
  Profile__ctor(&stru_60CB7CFC, Actor_sea_for_build, 0x31Eu, &v1, &stru_60B07C88, 36);
  dword_60CB7D18 = ++CurrentStateID;
  dword_60CB7D14 = (int)&off_60C16318;
  dword_60CB7D1C = (int)nullsub_5113;
  dword_60CB7D20 = 0;
  dword_60CB7D24 = (int)sub_60677DE4;
  dword_60CB7D28 = 0;
  dword_60CB7D2C = (int)nullsub_261;
  dword_60CB7D30 = 0;
  return &dword_60CB7D14;
}
