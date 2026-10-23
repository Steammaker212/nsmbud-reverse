/* registerProfile_CourseSelect_Miibarun_1A5738
 * address: 0x601A5738   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_CourseSelect_Miibarun_1A5738())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8A05C = 0;
  dword_60C8A060 = 0;
  dword_60C8A064 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABFB8C;
  Profile__ctor(&stru_60C8A068, Actor_CourseSelect_Miibarun_build, 0x380u, &v1, 0, 0);
  dword_60C8A084 = CurrentStateID + 1;
  dword_60C8A080 = (int)&off_60BD5F98;
  dword_60C8A088 = (int)sub_601A5044;
  dword_60C8A08C = 0;
  dword_60C8A090 = (int)sub_601A5060;
  dword_60C8A094 = 0;
  dword_60C8A098 = (int)nullsub_2934;
  dword_60C8A09C = 0;
  stru_60C8A0A0.vtable = &off_60BD5F98;
  stru_60C8A0A0.id = CurrentStateID + 2;
  dword_60C8A0A8 = (int)sub_601A50C8;
  dword_60C8A0AC = 0;
  dword_60C8A0B0 = (int)sub_601A50E4;
  dword_60C8A0B4 = 0;
  dword_60C8A0B8 = (int)nullsub_2935;
  dword_60C8A0BC = 0;
  stru_60C8A0C0.vtable = &off_60BD5F98;
  stru_60C8A0C0.id = CurrentStateID + 3;
  dword_60C8A0C8 = (int)sub_601A5154;
  dword_60C8A0CC = 0;
  dword_60C8A0D0 = (int)sub_601A5170;
  dword_60C8A0D4 = 0;
  dword_60C8A0D8 = (int)nullsub_2936;
  dword_60C8A0DC = 0;
  CurrentStateID += 4;
  dword_60C8A0E4 = CurrentStateID;
  dword_60C8A0E0 = (int)&off_60BD5F98;
  dword_60C8A0E8 = (int)sub_601A51E0;
  dword_60C8A0EC = 0;
  dword_60C8A0F0 = (int)sub_601A51FC;
  dword_60C8A0F4 = 0;
  dword_60C8A0F8 = (int)nullsub_2937;
  dword_60C8A0FC = 0;
  return nullsub_2937;
}
