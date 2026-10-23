/* registerProfile_ice_buroku_61DF44
 * address: 0x6061DF44   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ice_buroku_61DF44()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB360C = 0;
  dword_60CB3608 = 0;
  dword_60CB3604 = 0;
  dword_60CB3600 = 0;
  dword_60CB3610 = -1056964608;
  dword_60CB3614 = 1098907648;
  dword_60CB3618 = 1090519040;
  dword_60CB361C = 0;
  dword_60CB3620 = 0;
  dword_60CB3628 = CurrentStateID + 1;
  dword_60CB3624 = (int)&off_60C10F70;
  dword_60CB362C = (int)sub_6061D350;
  dword_60CB3630 = 0;
  dword_60CB3634 = (int)sub_6061D36C;
  dword_60CB3638 = 0;
  dword_60CB363C = (int)nullsub_4915;
  dword_60CB3640 = 0;
  CurrentStateID += 2;
  dword_60CB3648 = CurrentStateID;
  dword_60CB3644 = (int)&off_60C10F70;
  dword_60CB364C = (int)sub_6061D384;
  dword_60CB3650 = 0;
  dword_60CB3654 = (int)sub_6061D41C;
  dword_60CB3658 = 0;
  dword_60CB365C = (int)nullsub_4916;
  dword_60CB3660 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3DB0;
  Profile__ctor(&stru_60CB3664, Actor_ice_buroku_build, 0x162u, &v0, &stru_60B06780, 0);
}
