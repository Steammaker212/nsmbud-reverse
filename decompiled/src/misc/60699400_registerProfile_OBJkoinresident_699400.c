/* registerProfile_OBJkoinresident_699400
 * address: 0x60699400   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_OBJkoinresident_699400())()
{
  sead__SafeString v1[3]; // [sp+10h] [bp-18h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD6B4D;
  Profile__ctor(&stru_60CB9458, Actor_OBJkoinresident_build, 0xEu, v1, &stru_60B07FC8, 0);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD6B6F;
  Profile__ctor(&stru_60CB9470, Actor_OBJkoinresident_build, 0xFu, v1, &stru_60B07FEC, 0);
  dword_60CB948C = CurrentStateID + 1;
  dword_60CB9488 = (int)&off_60C180BC;
  dword_60CB9490 = (int)nullsub_5164;
  dword_60CB9494 = 0;
  dword_60CB9498 = (int)sub_60698E04;
  dword_60CB949C = 0;
  dword_60CB94A0 = (int)nullsub_5165;
  dword_60CB94A4 = 0;
  CurrentStateID += 2;
  dword_60CB94AC = CurrentStateID;
  dword_60CB94A8 = (int)&off_60C180BC;
  dword_60CB94B0 = (int)nullsub_5166;
  dword_60CB94B4 = 0;
  dword_60CB94B8 = (int)nullsub_5167;
  dword_60CB94BC = 0;
  dword_60CB94C0 = (int)nullsub_5168;
  dword_60CB94C4 = 0;
  return nullsub_5168;
}
