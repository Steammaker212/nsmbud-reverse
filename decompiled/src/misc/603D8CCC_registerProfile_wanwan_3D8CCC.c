/* registerProfile_wanwan_3D8CCC
 * address: 0x603D8CCC   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_wanwan_3D8CCC()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C98FD0 = 0;
  dword_60C98FD4 = 0;
  dword_60C98FD8 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC60F6;
  Profile__ctor(&stru_60C98FDC, Actor_wanwan_build, 0x29Eu, &v1, &stru_60B012A0, 530);
  dword_60C98FF8 = CurrentStateID + 1;
  dword_60C98FF4 = (int)&off_60BF8438;
  dword_60C98FFC = (int)sub_603D636C;
  dword_60C99000 = 0;
  dword_60C99004 = (int)&loc_603D6464;
  dword_60C99008 = 0;
  dword_60C9900C = (int)nullsub_3592;
  dword_60C99010 = 0;
  dword_60C99014 = (int)&off_60BF8438;
  unk_60C99018 = CurrentStateID + 2;
  dword_60C9901C = (int)sub_603D6980;
  dword_60C99020 = 0;
  dword_60C99024 = (int)SE_EMY_WANWAN_KUSARI_ref;
  dword_60C99028 = 0;
  dword_60C9902C = (int)nullsub_3593;
  dword_60C99030 = 0;
  dword_60C99034 = (int)&off_60BF8438;
  unk_60C99038 = CurrentStateID + 3;
  dword_60C9903C = (int)SE_EMY_WANWAN_BARK_ref;
  dword_60C99040 = 0;
  dword_60C99044 = (int)sub_603D6E74;
  dword_60C99048 = 0;
  dword_60C9904C = (int)sub_603D7228;
  dword_60C99050 = 0;
  dword_60C99054 = (int)&off_60BF8438;
  unk_60C99058 = CurrentStateID + 4;
  dword_60C9905C = (int)sub_603D7238;
  dword_60C99060 = 0;
  dword_60C99064 = (int)SE_EMY_WANWAN_KUSARI_ref_3D72B0;
  dword_60C99068 = 0;
  dword_60C9906C = (int)sub_603D74DC;
  dword_60C99070 = 0;
  dword_60C99074 = (int)&off_60BF8438;
  unk_60C99078 = CurrentStateID + 5;
  dword_60C9907C = (int)sub_603D74F8;
  dword_60C99080 = 0;
  dword_60C99084 = (int)SE_EMY_WANWAN_ESCAPE_ref;
  dword_60C99088 = 0;
  dword_60C9908C = (int)nullsub_3594;
  dword_60C99090 = 0;
  unk_60C99094 = &off_60BF8438;
  unk_60C99098 = CurrentStateID + 6;
  dword_60C9909C = (int)sub_603D7868;
  dword_60C990A0 = 0;
  dword_60C990A4 = (int)&loc_603D7878;
  dword_60C990A8 = 0;
  dword_60C990AC = (int)nullsub_3595;
  dword_60C990B0 = 0;
  unk_60C990B4 = &off_60BF8438;
  unk_60C990B8 = CurrentStateID + 7;
  dword_60C990BC = (int)nullsub_3596;
  dword_60C990C0 = 0;
  dword_60C990C4 = (int)SE_EMY_WANWAN_KUSARI_ref_3D7B64;
  dword_60C990C8 = 0;
  dword_60C990CC = (int)nullsub_3597;
  dword_60C990D0 = 0;
  dword_60C990D4 = (int)&off_60BF8438;
  unk_60C990D8 = CurrentStateID + 8;
  dword_60C990DC = (int)SE_EMY_WANWAN_ESCAPE_ref_2;
  dword_60C990E0 = 0;
  dword_60C990E4 = (int)sub_603D7E60;
  dword_60C990E8 = 0;
  dword_60C990EC = (int)nullsub_197;
  dword_60C990F0 = 0;
  CurrentStateID += 9;
  dword_60C990F8 = CurrentStateID;
  dword_60C990FC = 456;
  dword_60C99100 = 1;
  dword_60C99104 = 460;
  dword_60C99108 = 1;
  dword_60C9910C = 464;
  dword_60C99110 = 1;
  dword_60C990F4 = (int)&off_60BF844C;
  dword_60C99114 = (int)&stru_60C90710;
  return &stru_60C90710;
}
