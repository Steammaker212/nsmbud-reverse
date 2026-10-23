/* registerProfile_majikuhandogu_RDash_6844DC
 * address: 0x606844DC   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_majikuhandogu_RDash_6844DC()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB8298 = 0;
  unk_60CB8278 = 0;
  unk_60CB827C = 1139802112;
  dword_60CB8280 = 0;
  unk_60CB8284 = 0;
  unk_60CB8288 = -1044381696;
  unk_60CB828C = 1138753536;
  unk_60CB8290 = 1106247680;
  unk_60CB8294 = -1008730112;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD64BA;
  Profile__ctor(&stru_60CB829C, Actor_majikuhandogu_RDash_build, 0x149u, v0, &stru_60B07D68, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD64D6;
  Profile__ctor(&stru_60CB82B4, Actor_majikuhandogu_RDash_build, 0x14Au, v0, &stru_60B07D68, 2);
}
