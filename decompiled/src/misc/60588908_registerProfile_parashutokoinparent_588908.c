/* registerProfile_parashutokoinparent_588908
 * address: 0x60588908   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_parashutokoinparent_588908())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CAF21C = 0;
  dword_60CAF220 = 0;
  dword_60CAF224 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "パラシュートコイン親";
  Profile__ctor(&stru_60CAF228, Actor_parashutokoinparent_build, 0x32u, &v1, &stru_60B04A68, 2);
  dword_60CAF240 = 17825792;
  dword_60CAF248 = CurrentStateID + 1;
  dword_60CAF244 = (int)&off_60C062DC;
  dword_60CAF24C = (int)sub_605870FC;
  dword_60CAF250 = 0;
  dword_60CAF254 = (int)&loc_605871C4;
  dword_60CAF258 = 0;
  dword_60CAF25C = (int)sub_60587494;
  dword_60CAF260 = 0;
  unk_60CAF264 = &off_60C062DC;
  unk_60CAF268 = CurrentStateID + 2;
  dword_60CAF26C = (int)para_receive_ref_2;
  dword_60CAF270 = 0;
  dword_60CAF274 = (int)sub_60587598;
  dword_60CAF278 = 0;
  dword_60CAF27C = (int)nullsub_4660;
  dword_60CAF280 = 0;
  CurrentStateID += 3;
  dword_60CAF288 = CurrentStateID;
  dword_60CAF284 = (int)&off_60C062DC;
  dword_60CAF28C = (int)sub_605875D0;
  dword_60CAF290 = 0;
  dword_60CAF294 = (int)sub_605875E8;
  dword_60CAF298 = 0;
  dword_60CAF29C = (int)nullsub_237;
  dword_60CAF2A0 = 0;
  return nullsub_237;
}
