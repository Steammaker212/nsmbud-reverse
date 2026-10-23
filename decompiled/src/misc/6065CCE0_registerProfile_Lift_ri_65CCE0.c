/* registerProfile_Lift_ri_65CCE0
 * address: 0x6065CCE0   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Lift_ri_65CCE0()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB6654 = CurrentStateID + 1;
  dword_60CB6650 = (int)&off_60C14900;
  dword_60CB6658 = (int)sub_60659BE0;
  dword_60CB665C = 0;
  dword_60CB6660 = (int)&loc_60659C04;
  dword_60CB6664 = 0;
  dword_60CB6668 = (int)nullsub_5046;
  dword_60CB666C = 0;
  unk_60CB6670 = &off_60C14900;
  unk_60CB6674 = CurrentStateID + 2;
  dword_60CB6678 = (int)sub_60659DB8;
  dword_60CB667C = 0;
  dword_60CB6680 = (int)&loc_60659E34;
  dword_60CB6684 = 0;
  dword_60CB6688 = (int)nullsub_5047;
  dword_60CB668C = 0;
  unk_60CB6690 = &off_60C14900;
  unk_60CB6694 = CurrentStateID + 3;
  dword_60CB6698 = (int)sub_6065A48C;
  dword_60CB669C = 0;
  dword_60CB66A0 = (int)&loc_6065A49C;
  dword_60CB66A4 = 0;
  dword_60CB66A8 = (int)nullsub_5048;
  dword_60CB66AC = 0;
  unk_60CB66B0 = &off_60C14900;
  unk_60CB66B4 = CurrentStateID + 4;
  dword_60CB66B8 = (int)nullsub_5049;
  dword_60CB66BC = 0;
  dword_60CB66C0 = (int)&loc_6065A7C0;
  dword_60CB66C4 = 0;
  dword_60CB66C8 = (int)nullsub_5050;
  dword_60CB66CC = 0;
  unk_60CB66D0 = &off_60C14900;
  unk_60CB66D4 = CurrentStateID + 5;
  dword_60CB66D8 = (int)sub_6065ACE0;
  dword_60CB66DC = 0;
  dword_60CB66E0 = (int)sub_6065ADE4;
  dword_60CB66E4 = 0;
  dword_60CB66E8 = (int)sub_6065AF60;
  dword_60CB66EC = 0;
  unk_60CB66F0 = &off_60C14900;
  unk_60CB66F4 = CurrentStateID + 6;
  dword_60CB66F8 = (int)sub_6065AFCC;
  dword_60CB66FC = 0;
  dword_60CB6700 = (int)sub_6065B0DC;
  dword_60CB6704 = 0;
  dword_60CB6708 = (int)nullsub_5051;
  dword_60CB670C = 0;
  CurrentStateID += 7;
  dword_60CB6714 = CurrentStateID;
  dword_60CB6710 = (int)&off_60C14900;
  dword_60CB6718 = (int)sub_6065B254;
  dword_60CB671C = 0;
  dword_60CB6720 = (int)sub_6065B364;
  dword_60CB6724 = 0;
  dword_60CB6728 = (int)nullsub_5052;
  dword_60CB672C = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD595C;
  Profile__ctor(&stru_60CB6730, Actor_Lift_ri_build, 0xE7u, v0, &stru_60B077DC, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD596C;
  Profile__ctor(&stru_60CB6748, Actor_Lift_ri_build, 0xE8u, v0, &stru_60B077DC, 2);
}
