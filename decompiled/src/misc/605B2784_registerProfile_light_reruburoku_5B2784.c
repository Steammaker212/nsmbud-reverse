/* registerProfile_light_reruburoku_5B2784
 * address: 0x605B2784   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_light_reruburoku_5B2784())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  unk_60CB03C0 = -1040187392;
  unk_60CB03C4 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD245D;
  Profile__ctor(&stru_60CB03C8, Actor_light_reruburoku_build, 0xBCu, &v1, &stru_60B05348, 2);
  dword_60CB03E4 = CurrentStateID + 1;
  dword_60CB03E0 = (int)&off_60C093E8;
  dword_60CB03E8 = (int)sub_605B1EAC;
  dword_60CB03EC = 0;
  dword_60CB03F0 = (int)sub_605B1EC4;
  dword_60CB03F4 = 0;
  dword_60CB03F8 = (int)nullsub_4733;
  dword_60CB03FC = 0;
  stru_60CB0400.vtable = &off_60C093E8;
  stru_60CB0400.id = CurrentStateID + 2;
  dword_60CB0408 = (int)sub_605B1F0C;
  dword_60CB040C = 0;
  dword_60CB0410 = (int)sub_605B1F24;
  dword_60CB0414 = 0;
  dword_60CB0418 = (int)nullsub_4734;
  dword_60CB041C = 0;
  stru_60CB0420.vtable = &off_60C093E8;
  stru_60CB0420.id = CurrentStateID + 3;
  dword_60CB0428 = (int)sub_605B1F6C;
  dword_60CB042C = 0;
  dword_60CB0430 = (int)sub_605B1FA4;
  dword_60CB0434 = 0;
  dword_60CB0438 = (int)sub_605B1FF4;
  dword_60CB043C = 0;
  CurrentStateID += 4;
  dword_60CB0444 = CurrentStateID;
  dword_60CB0440 = (int)&off_60C093E8;
  dword_60CB0448 = (int)sub_605B2024;
  dword_60CB044C = 0;
  dword_60CB0450 = (int)sub_605B2030;
  dword_60CB0454 = 0;
  dword_60CB0458 = (int)nullsub_4735;
  dword_60CB045C = 0;
  return nullsub_4735;
}
