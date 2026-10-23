/* registerProfile_tsurara_big_6235CC
 * address: 0x606235CC   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_tsurara_big_6235CC()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60CB3A78 = 0;
  dword_60CB3A7C = 0;
  dword_60CB3A80 = 0;
  dword_60CB3A60 = (int)(float)((float)(2147500000.0 * 2.8125) / 180.0);
  dword_60CB3A64 = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
  dword_60CB3A68 = (int)(float)((float)(2147500000.0 * 0.70312) / 180.0);
  dword_60CB3A6C = (int)(float)((float)(2147500000.0 * 1.4062) / 180.0);
  dword_60CB3A70 = (int)(float)((float)(2147500000.0 * 1.4062) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD3E4F;
  Profile__ctor(&stru_60CB3904, Actor_tsurara_big_build, 0x15Eu, &v2, &stru_60B0685C, 2);
  *v0 = &off_60C116B8;
  dword_60CB3920 = CurrentStateID + 1;
  dword_60CB3924 = 632;
  dword_60CB3928 = 1;
  dword_60CB392C = 636;
  dword_60CB3930 = 1;
  dword_60CB3934 = 640;
  dword_60CB3938 = 1;
  dword_60CB391C = (int)&off_60C119A4;
  dword_60CB393C = (int)&dword_60CB3898;
  dword_60CB3944 = CurrentStateID + 2;
  dword_60CB3940 = (int)&off_60C119B8;
  dword_60CB3948 = (int)sub_60621D28;
  dword_60CB394C = 0;
  dword_60CB3950 = (int)sub_60621E10;
  dword_60CB3954 = 0;
  dword_60CB3958 = (int)nullsub_4927;
  dword_60CB395C = 0;
  unk_60CB3960 = &off_60C119B8;
  unk_60CB3964 = CurrentStateID + 3;
  dword_60CB3968 = (int)nullsub_4928;
  dword_60CB396C = 0;
  dword_60CB3970 = (int)nullsub_4929;
  dword_60CB3974 = 0;
  dword_60CB3978 = (int)nullsub_4930;
  dword_60CB397C = 0;
  unk_60CB3984 = CurrentStateID + 4;
  unk_60CB3988 = 644;
  dword_60CB398C = 1;
  dword_60CB3990 = 648;
  dword_60CB3994 = 1;
  dword_60CB3998 = 652;
  dword_60CB399C = 1;
  dword_60CB3980 = (int)&off_60C119A4;
  dword_60CB39A0 = (int)&unk_60CB38BC;
  *(_DWORD *)algn_60CB39A8 = CurrentStateID + 5;
  *(_DWORD *)&algn_60CB39A8[4] = 656;
  dword_60CB39B0 = 1;
  dword_60CB39B4 = 660;
  dword_60CB39B8 = 1;
  dword_60CB39BC = 664;
  dword_60CB39C0 = 1;
  dword_60CB39A4 = (int)&off_60C119A4;
  dword_60CB39C4 = (int)&dword_60CB38E0;
  unk_60CB39C8 = &off_60C119B8;
  unk_60CB39CC = CurrentStateID + 6;
  dword_60CB39D0 = (int)gura_anim_ref;
  dword_60CB39D4 = 0;
  dword_60CB39D8 = (int)SE_OBJ_ICICLE_L_SIGN_ref;
  dword_60CB39DC = 0;
  dword_60CB39E0 = (int)nullsub_4931;
  dword_60CB39E4 = 0;
  unk_60CB39E8 = &off_60C119B8;
  unk_60CB39EC = CurrentStateID + 7;
  dword_60CB39F0 = (int)rakka_anim_ref;
  dword_60CB39F4 = 0;
  dword_60CB39F8 = (int)&loc_60622180;
  dword_60CB39FC = 0;
  dword_60CB3A00 = (int)nullsub_4932;
  dword_60CB3A04 = 0;
  dword_60CB3A08 = (int)&off_60C119B8;
  *(_DWORD *)algn_60CB3A0C = CurrentStateID + 8;
  dword_60CB3A10 = (int)sub_606225C0;
  dword_60CB3A14 = 0;
  dword_60CB3A18 = (int)sub_60622630;
  dword_60CB3A1C = 0;
  dword_60CB3A20 = (int)nullsub_4933;
  dword_60CB3A24 = 0;
  CurrentStateID += 9;
  unk_60CB3A2C = CurrentStateID;
  unk_60CB3A30 = 456;
  dword_60CB3A34 = 1;
  dword_60CB3A38 = 460;
  dword_60CB3A3C = 1;
  dword_60CB3A40 = 464;
  dword_60CB3A44 = 1;
  dword_60CB3A28 = (int)&off_60C119A4;
  dword_60CB3A48 = (int)&stru_60C90710;
  return &stru_60C90710;
}
