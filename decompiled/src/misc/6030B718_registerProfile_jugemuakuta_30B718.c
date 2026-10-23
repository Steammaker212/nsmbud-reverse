/* registerProfile_jugemuakuta_30B718
 * address: 0x6030B718   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_jugemuakuta_30B718())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  unk_60C930F0 = 786432000;
  unk_60C930F4 = -786432000;
  unk_60C930F8 = 0;
  dword_60C930FC = 0;
  dword_60C93100 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC4422;
  Profile__ctor(&stru_60C93074, Actor_jugemuakuta_build, 0x26Cu, &v1, &stru_60AFF210, 18);
  dword_60C93090 = CurrentStateID + 1;
  dword_60C9308C = (int)&off_60BE97A0;
  dword_60C93094 = (int)nullsub_3323;
  dword_60C93098 = 0;
  dword_60C9309C = (int)sub_6030A124;
  dword_60C930A0 = 0;
  dword_60C930A4 = (int)nullsub_3324;
  dword_60C930A8 = 0;
  unk_60C930AC = &off_60BE97A0;
  unk_60C930B0 = CurrentStateID + 2;
  dword_60C930B4 = (int)&loc_6030A168;
  dword_60C930B8 = 0;
  dword_60C930BC = (int)&loc_6030A2B8;
  dword_60C930C0 = 0;
  dword_60C930C4 = (int)nullsub_3325;
  dword_60C930C8 = 0;
  CurrentStateID += 3;
  dword_60C930D0 = CurrentStateID;
  dword_60C930CC = (int)&off_60BE97A0;
  dword_60C930D4 = (int)sub_6030A870;
  dword_60C930D8 = 0;
  dword_60C930DC = (int)&loc_6030A8B0;
  dword_60C930E0 = 0;
  dword_60C930E4 = (int)nullsub_3326;
  dword_60C930E8 = 0;
  return nullsub_3326;
}
