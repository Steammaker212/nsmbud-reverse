/* registerProfile_water_nikuice_buroku_big_6094B4
 * address: 0x606094B4   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_water_nikuice_buroku_big_6094B4()
{
  _DWORD *v0; // r0
  sead__SafeString v2[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB2AD8 = 0;
  dword_60CB2ADC = 0;
  dword_60CB2AE0 = 0;
  v2[0].vtable = &sead__SafeStringBase__vtable;
  v2[0].cstr = (char *)&unk_60AD353C;
  Profile__ctor(&stru_60CB2AE4, Actor_water_nikuice_buroku_big_build, 0x11Du, v2, &stru_60B0633C, 2);
  v2[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60C0F644;
  v2[0].cstr = (char *)&unk_60AD3558;
  Profile__ctor(&stru_60CB2AFC, Actor_water_nikuice_buroku_big_build, 0x11Eu, v2, &stru_60B06360, 2);
  dword_60CB2B18 = CurrentStateID + 1;
  dword_60CB2B14 = (int)&off_60C0F774;
  dword_60CB2B1C = (int)sub_60606B7C;
  dword_60CB2B20 = 0;
  dword_60CB2B24 = (int)sub_60606BB4;
  dword_60CB2B28 = 0;
  dword_60CB2B2C = (int)nullsub_4860;
  dword_60CB2B30 = 0;
  stru_60CB2B34.vtable = &off_60C0F774;
  stru_60CB2B34.id = CurrentStateID + 2;
  dword_60CB2B3C = (int)sub_60606CB0;
  dword_60CB2B40 = 0;
  dword_60CB2B44 = (int)sub_60606D64;
  dword_60CB2B48 = 0;
  dword_60CB2B4C = (int)nullsub_4861;
  dword_60CB2B50 = 0;
  stru_60CB2B54.vtable = &off_60C0F774;
  stru_60CB2B54.id = CurrentStateID + 3;
  dword_60CB2B5C = (int)sub_60606E08;
  dword_60CB2B60 = 0;
  dword_60CB2B64 = (int)sub_60606E58;
  dword_60CB2B68 = 0;
  dword_60CB2B6C = (int)nullsub_4862;
  dword_60CB2B70 = 0;
  stru_60CB2B74.vtable = &off_60C0F774;
  stru_60CB2B74.id = CurrentStateID + 4;
  dword_60CB2B7C = (int)nullsub_4863;
  dword_60CB2B80 = 0;
  dword_60CB2B84 = (int)&loc_6060700C;
  dword_60CB2B88 = 0;
  dword_60CB2B8C = (int)nullsub_4864;
  dword_60CB2B90 = 0;
  stru_60CB2B94.vtable = &off_60C0F774;
  stru_60CB2B94.id = CurrentStateID + 5;
  CurrentStateID += 6;
  dword_60CB2BB8 = CurrentStateID;
  dword_60CB2B9C = (int)sub_606070E0;
  dword_60CB2BB4 = (int)&off_60C0F774;
  dword_60CB2BA0 = 0;
  dword_60CB2BBC = (int)SE_OBJ_FLOAT_BOX_JUMP_FROM_WATER_ref;
  dword_60CB2BA4 = (int)sub_6060710C;
  dword_60CB2BC0 = 0;
  dword_60CB2BA8 = 0;
  dword_60CB2BC4 = (int)&loc_60607314;
  dword_60CB2BAC = (int)nullsub_4865;
  dword_60CB2BB0 = 0;
  dword_60CB2BC8 = 0;
  dword_60CB2BCC = (int)nullsub_4866;
  dword_60CB2BD0 = 0;
  return &dword_60CB2BB4;
}
