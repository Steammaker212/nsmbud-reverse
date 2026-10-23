/* registerProfile_ShortPlay_result_Demo_Tag_2_831A64
 * address: 0x60831A64   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_ShortPlay_result_Demo_Tag_2_831A64()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AE4F6F;
  Profile__ctor(&stru_60CC7170, Actor_ShortPlay_result_Demo_Tag_2_build, 0x31Du, &v1, &stru_60B0E16C, 0);
  dword_60CC718C = CurrentStateID + 1;
  dword_60CC7188 = (int)&off_60C2B074;
  dword_60CC7190 = (int)sub_60830C08;
  dword_60CC7194 = 0;
  dword_60CC7198 = (int)sub_60830C8C;
  dword_60CC719C = 0;
  dword_60CC71A0 = (int)nullsub_5631;
  dword_60CC71A4 = 0;
  stru_60CC71A8.vtable = &off_60C2B074;
  stru_60CC71A8.id = CurrentStateID + 2;
  dword_60CC71B0 = (int)sub_60830DCC;
  dword_60CC71B4 = 0;
  dword_60CC71B8 = (int)sub_60830DE0;
  dword_60CC71BC = 0;
  dword_60CC71C0 = (int)nullsub_5632;
  dword_60CC71C4 = 0;
  stru_60CC71C8.vtable = &off_60C2B074;
  stru_60CC71C8.id = CurrentStateID + 3;
  dword_60CC71D0 = (int)sub_60830F48;
  dword_60CC71D4 = 0;
  dword_60CC71D8 = (int)sub_60831044;
  dword_60CC71DC = 0;
  dword_60CC71E0 = (int)sub_608311C8;
  dword_60CC71E4 = 0;
  stru_60CC71E8.vtable = &off_60C2B074;
  stru_60CC71E8.id = CurrentStateID + 4;
  dword_60CC71F0 = (int)sub_60831288;
  dword_60CC71F4 = 0;
  dword_60CC71F8 = (int)sub_608312A4;
  dword_60CC71FC = 0;
  dword_60CC7200 = (int)nullsub_5633;
  dword_60CC7204 = 0;
  CurrentStateID += 5;
  dword_60CC720C = CurrentStateID;
  dword_60CC7208 = (int)&off_60C2B074;
  dword_60CC7210 = (int)sub_60831490;
  dword_60CC7214 = 0;
  dword_60CC7218 = (int)&loc_608314C8;
  dword_60CC721C = 0;
  dword_60CC7220 = (int)sub_60831800;
  dword_60CC7224 = 0;
  dword_60CC7228 = 1147535360;
  dword_60CC722C = -1006370816;
  return &dword_60CC7228;
}
