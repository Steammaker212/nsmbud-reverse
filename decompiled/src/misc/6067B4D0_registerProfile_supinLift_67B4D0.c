/* registerProfile_supinLift_67B4D0
 * address: 0x6067B4D0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_supinLift_67B4D0())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD62CF;
  Profile__ctor(&stru_60CB7DF8, Actor_supinLift_build, 0x5Cu, &v1, &stru_60B07CF4, 2);
  dword_60CB7E10 = -1033895936;
  dword_60CB7E14 = 1090519040;
  dword_60CB7E18 = 1113587712;
  dword_60CB7E1C = 1090519040;
  dword_60CB7E20 = 0;
  dword_60CB7E24 = 0;
  dword_60CB7E28 = 0;
  dword_60CB7E2C = 0;
  dword_60CB7E30 = (int)&dword_60CB7E10;
  dword_60CB7E34 = 0;
  dword_60CB7E3C = CurrentStateID + 1;
  dword_60CB7E38 = (int)&off_60C16728;
  dword_60CB7E40 = (int)sub_6067A604;
  dword_60CB7E44 = 0;
  dword_60CB7E48 = (int)sub_6067A614;
  dword_60CB7E4C = 0;
  dword_60CB7E50 = (int)nullsub_5117;
  dword_60CB7E54 = 0;
  dword_60CB7E58 = (int)&off_60C16728;
  *(_DWORD *)algn_60CB7E5C = CurrentStateID + 2;
  dword_60CB7E60 = (int)nullsub_5118;
  dword_60CB7E64 = 0;
  dword_60CB7E68 = (int)sub_6067A6A0;
  dword_60CB7E6C = 0;
  dword_60CB7E70 = (int)nullsub_5119;
  dword_60CB7E74 = 0;
  CurrentStateID += 3;
  dword_60CB7E7C = CurrentStateID;
  dword_60CB7E78 = (int)&off_60C16728;
  dword_60CB7E80 = (int)sub_6067A71C;
  dword_60CB7E84 = 0;
  dword_60CB7E88 = (int)&loc_6067A740;
  dword_60CB7E8C = 0;
  dword_60CB7E90 = (int)nullsub_5120;
  dword_60CB7E94 = 0;
  return nullsub_5120;
}
