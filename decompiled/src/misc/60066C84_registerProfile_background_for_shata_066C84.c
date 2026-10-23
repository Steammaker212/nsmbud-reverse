/* registerProfile_background_for_shata_066C84
 * address: 0x60066C84   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_background_for_shata_066C84())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C81288 = 0;
  dword_60C8128C = 0;
  dword_60C81290 = 0;
  dword_60C81284 = (int)(float)((float)(2147500000.0 * -17.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABBADB;
  Profile__ctor(&stru_60C81204, Actor_background_for_shata_build, 0x2E3u, &v2, 0, 0);
  *v0 = &off_60BC67DC;
  dword_60C81220 = CurrentStateID + 1;
  dword_60C8121C = (int)&off_60BC68B0;
  dword_60C81224 = (int)nullsub_2572;
  dword_60C81228 = 0;
  dword_60C8122C = (int)nullsub_2573;
  dword_60C81230 = 0;
  dword_60C81234 = (int)nullsub_2574;
  dword_60C81238 = 0;
  unk_60C8123C = &off_60BC68B0;
  unk_60C81240 = CurrentStateID + 2;
  dword_60C81244 = (int)sub_600662AC;
  dword_60C81248 = 0;
  dword_60C8124C = (int)sub_600662E4;
  dword_60C81250 = 0;
  dword_60C81254 = (int)nullsub_2575;
  dword_60C81258 = 0;
  CurrentStateID += 3;
  dword_60C81260 = CurrentStateID;
  dword_60C8125C = (int)&off_60BC68B0;
  dword_60C81264 = (int)sub_60066378;
  dword_60C81268 = 0;
  dword_60C8126C = (int)SE_OBJ_WINDOW_FALL_ref;
  dword_60C81270 = 0;
  dword_60C81274 = (int)nullsub_2576;
  dword_60C81278 = 0;
  return nullsub_2576;
}
