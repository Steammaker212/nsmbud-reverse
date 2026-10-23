/* registerProfile_chibiyoshi_ship_59B3E8
 * address: 0x6059B3E8   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *(__fastcall *registerProfile_chibiyoshi_ship_59B3E8())(int a1)
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD207B;
  Profile__ctor(&stru_60CAF93C, Actor_chibiyoshi_ship_build, 0x1C0u, &v1, &stru_60B04D3C, 6);
  dword_60CAF958 = CurrentStateID + 1;
  dword_60CAF95C = 292;
  dword_60CAF960 = 1;
  dword_60CAF964 = 296;
  dword_60CAF968 = 1;
  dword_60CAF96C = 300;
  dword_60CAF970 = 1;
  dword_60CAF954 = (int)&off_60C077DC;
  dword_60CAF974 = (int)&dword_60CB1828;
  dword_60CAF97C = CurrentStateID + 2;
  dword_60CAF978 = (int)&off_60C077F0;
  dword_60CAF980 = (int)SE_PLY_CH_YOSHI_HIT_ENEMY_ref;
  dword_60CAF984 = 0;
  dword_60CAF988 = (int)sub_60598588;
  dword_60CAF98C = 0;
  dword_60CAF990 = (int)sub_60598688;
  dword_60CAF994 = 0;
  unk_60CAF99C = CurrentStateID + 3;
  unk_60CAF9A0 = 448;
  dword_60CAF9A4 = 1;
  dword_60CAF9A8 = 452;
  dword_60CAF9AC = 1;
  dword_60CAF9B0 = 456;
  dword_60CAF9B4 = 1;
  dword_60CAF998 = (int)&off_60C077DC;
  dword_60CAF9B8 = (int)&dword_60CB1A00;
  stru_60CAF9BC.vtable = &off_60C077F0;
  stru_60CAF9BC.id = CurrentStateID + 4;
  dword_60CAF9C4 = (int)sub_60599FAC;
  dword_60CAF9C8 = 0;
  dword_60CAF9CC = (int)nullsub_4699;
  dword_60CAF9D0 = 0;
  dword_60CAF9D4 = (int)sub_6059A064;
  dword_60CAF9D8 = 0;
  dword_60CAF9DC = (int)&off_60C077F0;
  unk_60CAF9E0 = CurrentStateID + 5;
  dword_60CAF9E4 = (int)sub_6059A0B0;
  dword_60CAF9E8 = 0;
  dword_60CAF9EC = (int)&loc_6059A0F0;
  dword_60CAF9F0 = 0;
  dword_60CAF9F4 = (int)sub_6059A20C;
  dword_60CAF9F8 = 0;
  unk_60CAF9FC = &off_60C077F0;
  unk_60CAFA00 = CurrentStateID + 6;
  dword_60CAFA04 = (int)sub_6059A25C;
  dword_60CAFA08 = 0;
  dword_60CAFA0C = (int)&loc_6059A2A0;
  dword_60CAFA10 = 0;
  dword_60CAFA14 = (int)sub_6059A45C;
  dword_60CAFA18 = 0;
  unk_60CAFA1C = &off_60C077F0;
  unk_60CAFA20 = CurrentStateID + 7;
  dword_60CAFA24 = (int)sub_6059A470;
  dword_60CAFA28 = 0;
  dword_60CAFA2C = (int)sub_6059A4A0;
  dword_60CAFA30 = 0;
  dword_60CAFA34 = (int)sub_6059A5B8;
  dword_60CAFA38 = 0;
  CurrentStateID += 8;
  dword_60CAFA40 = CurrentStateID;
  dword_60CAFA3C = (int)&off_60C077F0;
  dword_60CAFA44 = (int)sub_6059A5CC;
  dword_60CAFA48 = 0;
  dword_60CAFA4C = (int)&loc_6059A684;
  dword_60CAFA50 = 0;
  dword_60CAFA54 = (int)sub_6059A744;
  dword_60CAFA58 = 0;
  return sub_6059A744;
}
