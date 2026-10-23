/* registerProfile_buroku_parent_5FE3DC
 * address: 0x605FE3DC   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_buroku_parent_5FE3DC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB26BC = CurrentStateID + 1;
  dword_60CB26B8 = (int)&off_60C0E8DC;
  dword_60CB26C0 = (int)sub_605FDF1C;
  dword_60CB26C4 = 0;
  dword_60CB26C8 = (int)&loc_605FDF60;
  dword_60CB26CC = 0;
  dword_60CB26D0 = (int)nullsub_4842;
  dword_60CB26D4 = 0;
  CurrentStateID += 2;
  dword_60CB26DC = CurrentStateID;
  dword_60CB26D8 = (int)&off_60C0E8DC;
  dword_60CB26E0 = (int)sub_605FE030;
  dword_60CB26E4 = 0;
  dword_60CB26E8 = (int)sub_605FE040;
  dword_60CB26EC = 0;
  dword_60CB26F0 = (int)sub_605FE078;
  dword_60CB26F4 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD32A7;
  Profile__ctor(&stru_60CB26F8, Actor_buroku_parent_build, 0x34u, &v0, &stru_60B0610C, 0);
}
