/* registerProfile_ZN10MegaHammerC3EPK14Act_145B84
 * address: 0x60145B84   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_ZN10MegaHammerC3EPK14Act_145B84())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C87FA8 = 0;
  dword_60C87FAC = 0;
  dword_60C87FB0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABEDC5;
  Profile__ctor(&stru_60C87FB4, MegaHammer__ctor, 0x2FFu, &v1, &stru_60AF69F8, 162);
  dword_60C87FD0 = CurrentStateID + 1;
  dword_60C87FCC = (int)&off_60BD3C34;
  dword_60C87FD4 = (int)sub_60144CE8;
  dword_60C87FD8 = 0;
  dword_60C87FDC = (int)sub_60144CFC;
  dword_60C87FE0 = 0;
  dword_60C87FE4 = (int)nullsub_2872;
  dword_60C87FE8 = 0;
  dword_60C87FEC = (int)&off_60BD3C34;
  unk_60C87FF0 = CurrentStateID + 2;
  dword_60C87FF4 = (int)sub_60144E40;
  dword_60C87FF8 = 0;
  dword_60C87FFC = (int)&loc_60144FE0;
  dword_60C88000 = 0;
  dword_60C88004 = (int)nullsub_2873;
  dword_60C88008 = 0;
  CurrentStateID += 3;
  dword_60C88010 = CurrentStateID;
  dword_60C8800C = (int)&off_60BD3C34;
  dword_60C88014 = (int)sub_60145180;
  dword_60C88018 = 0;
  dword_60C8801C = (int)sub_601451FC;
  dword_60C88020 = 0;
  dword_60C88024 = (int)nullsub_152;
  dword_60C88028 = 0;
  return nullsub_152;
}
