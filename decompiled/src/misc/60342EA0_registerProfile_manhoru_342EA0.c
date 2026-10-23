/* registerProfile_manhoru_342EA0
 * address: 0x60342EA0   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_manhoru_342EA0())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC4D26;
  Profile__ctor(&stru_60C946D4, Actor_manhoru_build, 0x26Bu, &v1, &stru_60AFFBC0, 34);
  dword_60C946F0 = CurrentStateID + 1;
  dword_60C946EC = (int)&off_60BEDBA8;
  dword_60C946F4 = (int)sub_60342984;
  dword_60C946F8 = 0;
  dword_60C946FC = (int)sub_60342998;
  dword_60C94700 = 0;
  dword_60C94704 = (int)nullsub_3378;
  dword_60C94708 = 0;
  CurrentStateID += 2;
  dword_60C94710 = CurrentStateID;
  dword_60C9470C = (int)&off_60BEDBA8;
  dword_60C94714 = (int)sub_603429B4;
  dword_60C94718 = 0;
  dword_60C9471C = (int)sub_603429FC;
  dword_60C94720 = 0;
  dword_60C94724 = (int)nullsub_3379;
  dword_60C94728 = 0;
  return nullsub_3379;
}
