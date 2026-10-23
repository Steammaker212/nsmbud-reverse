/* registerProfile_geyser_water_bosufor_child_akuta_70072C
 * address: 0x6070072C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_geyser_water_bosufor_child_akuta_70072C())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60CBC5B0 = 0;
  dword_60CBC5B4 = 0;
  dword_60CBC5B8 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD85B9;
  Profile__ctor(&stru_60CBC5BC, Actor_geyser_water_bosufor_child_akuta_build, 0x7Fu, &v2, &stru_60B09630, 0);
  *v0 = &off_60C20814;
  dword_60CBC5D8 = CurrentStateID + 1;
  dword_60CBC5D4 = (int)&off_60C20914;
  dword_60CBC5DC = (int)sub_606FD24C;
  dword_60CBC5E0 = 0;
  dword_60CBC5E4 = (int)nullsub_5328;
  dword_60CBC5E8 = 0;
  dword_60CBC5EC = (int)nullsub_5329;
  dword_60CBC5F0 = 0;
  unk_60CBC5F4 = &off_60C20914;
  unk_60CBC5F8 = CurrentStateID + 2;
  dword_60CBC5FC = (int)SE_AMB_WATERPILLAR_SIGN_ref;
  dword_60CBC600 = 0;
  dword_60CBC604 = (int)sub_606FD324;
  dword_60CBC608 = 0;
  dword_60CBC60C = (int)nullsub_5330;
  dword_60CBC610 = 0;
  dword_60CBC614 = (int)&off_60C20914;
  unk_60CBC618 = CurrentStateID + 3;
  dword_60CBC61C = (int)sub_606FD430;
  dword_60CBC620 = 0;
  dword_60CBC624 = (int)SE_AMB_WATERPILLAR_SPOUT_ref_2;
  dword_60CBC628 = 0;
  dword_60CBC62C = (int)nullsub_5331;
  dword_60CBC630 = 0;
  CurrentStateID += 4;
  dword_60CBC638 = CurrentStateID;
  dword_60CBC634 = (int)&off_60C20914;
  dword_60CBC63C = (int)sub_606FD9B0;
  dword_60CBC640 = 0;
  dword_60CBC644 = (int)waterpillar_top_end_ref_6FDB54;
  dword_60CBC648 = 0;
  dword_60CBC64C = (int)nullsub_5332;
  dword_60CBC650 = 0;
  return nullsub_5332;
}
