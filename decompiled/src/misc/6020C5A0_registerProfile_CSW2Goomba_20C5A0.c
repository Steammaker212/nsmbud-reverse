/* registerProfile_CSW2Goomba_20C5A0
 * address: 0x6020C5A0   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateBase *registerProfile_CSW2Goomba_20C5A0()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C8CC10 = 0;
  dword_60C8CC14 = 0;
  dword_60C8CC18 = 0;
  dword_60C8CC1C = 1103626240;
  dword_60C8CC20 = 0;
  dword_60C8CC24 = 1106247680;
  dword_60C8CC28 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC1ED5;
  Profile__ctor(&stru_60C8CA9C, Actor_CSW2Goomba_build, 0x383u, &v2, 0, 0);
  *v0 = &off_60BD8BC0;
  dword_60C8CAB8 = CurrentStateID + 1;
  dword_60C8CAB4 = (int)&off_60BD8CB4;
  dword_60C8CABC = (int)nullsub_3028;
  dword_60C8CAC0 = 0;
  dword_60C8CAC4 = (int)sub_6020B138;
  dword_60C8CAC8 = 0;
  dword_60C8CACC = (int)nullsub_3029;
  dword_60C8CAD0 = 0;
  stru_60C8CAD4.vtable = &off_60BD8CB4;
  stru_60C8CAD4.id = CurrentStateID + 2;
  dword_60C8CADC = (int)sub_6020B200;
  dword_60C8CAE0 = 0;
  dword_60C8CAE4 = (int)sub_6020B23C;
  dword_60C8CAE8 = 0;
  dword_60C8CAEC = (int)sub_6020B650;
  dword_60C8CAF0 = 0;
  unk_60C8CAF4 = &off_60BD8CB4;
  unk_60C8CAF8 = CurrentStateID + 3;
  dword_60C8CAFC = (int)sub_6020B6CC;
  dword_60C8CB00 = 0;
  dword_60C8CB04 = (int)sub_6020B6D8;
  dword_60C8CB08 = 0;
  dword_60C8CB0C = (int)nullsub_3030;
  dword_60C8CB10 = 0;
  stru_60C8CB14.vtable = &off_60BD8CB4;
  stru_60C8CB14.id = CurrentStateID + 4;
  dword_60C8CB1C = (int)nullsub_3031;
  dword_60C8CB20 = 0;
  dword_60C8CB24 = (int)sub_6020B70C;
  dword_60C8CB28 = 0;
  dword_60C8CB2C = (int)nullsub_3032;
  dword_60C8CB30 = 0;
  unk_60C8CB34 = &off_60BD8CB4;
  unk_60C8CB38 = CurrentStateID + 5;
  dword_60C8CB3C = (int)sub_6020B8CC;
  dword_60C8CB40 = 0;
  dword_60C8CB44 = (int)sub_6020B918;
  dword_60C8CB48 = 0;
  dword_60C8CB4C = (int)nullsub_3033;
  dword_60C8CB50 = 0;
  dword_60C8CB58 = CurrentStateID + 6;
  dword_60C8CB5C = 148;
  dword_60C8CB60 = 1;
  dword_60C8CB64 = 152;
  dword_60C8CB68 = 1;
  dword_60C8CB6C = 156;
  dword_60C8CB70 = 1;
  dword_60C8CB54 = (int)&off_60BD8CC8;
  dword_60C8CB74 = (int)&NullState;
  dword_60C8CB7C = CurrentStateID + 7;
  dword_60C8CB78 = (int)&off_60BD8CB4;
  dword_60C8CB80 = (int)nullsub_3034;
  dword_60C8CB84 = 0;
  dword_60C8CB88 = (int)nullsub_3035;
  dword_60C8CB8C = 0;
  dword_60C8CB90 = (int)nullsub_3036;
  dword_60C8CB94 = 0;
  dword_60C8CB9C = CurrentStateID + 8;
  dword_60C8CB98 = (int)&off_60BD8CB4;
  dword_60C8CBA0 = (int)sub_6020BA44;
  dword_60C8CBA4 = 0;
  dword_60C8CBA8 = (int)sub_6020BA94;
  dword_60C8CBAC = 0;
  dword_60C8CBB0 = (int)nullsub_3037;
  dword_60C8CBB4 = 0;
  dword_60C8CBB8 = (int)&off_60BD8CB4;
  *(_DWORD *)algn_60C8CBBC = CurrentStateID + 9;
  CurrentStateID += 10;
  dword_60C8CBC0 = (int)sub_6020BAA4;
  dword_60C8CBC4 = 0;
  dword_60C8CBC8 = (int)sub_6020BACC;
  dword_60C8CBCC = 0;
  dword_60C8CBD0 = (int)nullsub_3038;
  dword_60C8CBD4 = 0;
  unk_60C8CBDC = CurrentStateID;
  unk_60C8CBE0 = 160;
  dword_60C8CBE4 = 1;
  dword_60C8CBE8 = 164;
  dword_60C8CBEC = 1;
  dword_60C8CBF0 = 168;
  dword_60C8CBF4 = 1;
  dword_60C8CBD8 = (int)&off_60BD8CC8;
  dword_60C8CBF8 = (int)&NullState;
  return &NullState;
}
