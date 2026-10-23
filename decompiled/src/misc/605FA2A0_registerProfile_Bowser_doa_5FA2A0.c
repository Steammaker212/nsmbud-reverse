/* registerProfile_Bowser_doa_5FA2A0
 * address: 0x605FA2A0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_Bowser_doa_5FA2A0()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CB24F0 = 0;
  dword_60CB24F4 = 0;
  dword_60CB24F8 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD30F7;
  Profile__ctor(&stru_60CB24C8, Actor_Bowser_doa_build, 0x261u, &v1, &stru_60B05FA8, 2);
  unk_60CB24E0 = 1113587712;
  unk_60CB24E4 = 1121714176;
  unk_60CB24E8 = 0;
  dword_60CB24EC = 1125187584;
  return 1113587712;
}
