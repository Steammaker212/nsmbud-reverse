/* registerProfile_Thwomp_ctor_29E63C
 * address: 0x6029E63C   size: 916   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Thwomp_ctor_29E63C()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  int v2; // r7
  sead__SafeString v4[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C901D0 = 0;
  dword_60C901D4 = 0;
  dword_60C901D8 = 0;
  dword_60C901C0[0] = (int)(float)((float)(2147500000.0 * 0.70312) / 180.0);
  dword_60C901C4 = (int)(float)((float)(2147500000.0 * 0.70312) / 180.0);
  v4[0].vtable = &sead__SafeStringBase__vtable;
  v4[0].cstr = (char *)&unk_60AC33DA;
  Profile__ctor(&stru_60C90058, Thwomp_ctor, 0x27Cu, v4, &stru_60AFE23C, 278);
  v4[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BE1DE0;
  v4[0].cstr = (char *)&unk_60AC33ED;
  Profile__ctor(&stru_60C90070, Thwomp_ctor, 0x27Du, v4, &stru_60AFE260, 278);
  *v1 = &off_60BE1DEC;
  stru_60C90088._.id = CurrentStateID + 1;
  stru_60C90088._.vtable = &off_60BE20F8;
  LODWORD(stru_60C90088.beginFunc) = sub_6029D204;
  HIDWORD(stru_60C90088.beginFunc) = 0;
  LODWORD(stru_60C90088.executeFunc) = sub_6029D244;
  HIDWORD(stru_60C90088.executeFunc) = 0;
  LODWORD(stru_60C90088.endFunc) = nullsub_3176;
  HIDWORD(stru_60C90088.endFunc) = 0;
  stru_60C900A8._.vtable = &off_60BE20F8;
  stru_60C900A8._.id = CurrentStateID + 2;
  LODWORD(stru_60C900A8.beginFunc) = sub_6029D328;
  HIDWORD(stru_60C900A8.beginFunc) = 0;
  LODWORD(stru_60C900A8.executeFunc) = sub_6029D354;
  HIDWORD(stru_60C900A8.executeFunc) = 0;
  LODWORD(stru_60C900A8.endFunc) = nullsub_3177;
  HIDWORD(stru_60C900A8.endFunc) = 0;
  stru_60C900C8._.vtable = &off_60BE20F8;
  stru_60C900C8._.id = CurrentStateID + 3;
  LODWORD(stru_60C900C8.beginFunc) = sub_6029D3A4;
  HIDWORD(stru_60C900C8.beginFunc) = 0;
  LODWORD(stru_60C900C8.executeFunc) = &loc_6029D3C0;
  HIDWORD(stru_60C900C8.executeFunc) = 0;
  LODWORD(stru_60C900C8.endFunc) = nullsub_3178;
  HIDWORD(stru_60C900C8.endFunc) = 0;
  unk_60C900E8 = &off_60BE20F8;
  unk_60C900EC = CurrentStateID + 4;
  dword_60C900F0 = (int)sub_6029D43C;
  dword_60C900F4 = 0;
  dword_60C900F8 = (int)sub_6029D468;
  dword_60C900FC = 0;
  dword_60C90100 = (int)nullsub_3179;
  dword_60C90104 = 0;
  dword_60C90108 = (int)&off_60BE20F8;
  *(_DWORD *)algn_60C9010C = CurrentStateID + 5;
  dword_60C90110 = (int)sub_6029D4B8;
  dword_60C90114 = 0;
  dword_60C90118 = (int)SE_EMY_ref;
  dword_60C9011C = 0;
  dword_60C90120 = (int)nullsub_3180;
  dword_60C90124 = 0;
  unk_60C90128 = &off_60BE20F8;
  unk_60C9012C = CurrentStateID + 6;
  dword_60C90130 = (int)nullsub_3181;
  dword_60C90134 = 0;
  dword_60C90138 = (int)sub_6029D804;
  dword_60C9013C = 0;
  dword_60C90140 = (int)nullsub_3182;
  dword_60C90144 = 0;
  unk_60C90148 = &off_60BE20F8;
  unk_60C9014C = CurrentStateID + 7;
  dword_60C90150 = (int)sub_6029D894;
  dword_60C90154 = 0;
  dword_60C90158 = (int)sub_6029D8C8;
  dword_60C9015C = 0;
  dword_60C90160 = (int)nullsub_3183;
  v2 = CurrentStateID + 8;
  dword_60C90164 = 0;
  CurrentStateID += 9;
  dword_60C9016C = v2;
  dword_60C90190 = CurrentStateID;
  dword_60C90170 = 456;
  dword_60C9018C = (int)&off_60BE20F8;
  dword_60C90174 = 1;
  dword_60C90178 = 460;
  dword_60C9017C = 1;
  dword_60C90180 = 464;
  dword_60C90184 = 1;
  dword_60C90194 = (int)sub_6029D94C;
  dword_60C90198 = 0;
  dword_60C90168 = (int)&off_60BE210C;
  dword_60C9019C = (int)sub_6029D9A4;
  dword_60C901A0 = 0;
  dword_60C90188 = (int)&stru_60C90710;
  dword_60C901A4 = (int)sub_6029DA20;
  dword_60C901A8 = 0;
  return &dword_60C9018C;
}
