/* registerProfile_basabasa_25107C
 * address: 0x6025107C   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_basabasa_25107C()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C8DD74 = 0;
  dword_60C8DD78 = 0;
  dword_60C8DD7C = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC2736;
  Profile__ctor(&stru_60C8DD80, Actor_basabasa_build, 0x265u, &v2, &stru_60AFD754, 18);
  *v0 = &off_60BDA230;
  dword_60C8DD9C = CurrentStateID + 1;
  dword_60C8DD98 = (int)&off_60BDA514;
  dword_60C8DDA0 = (int)nullsub_3086;
  dword_60C8DDA4 = 0;
  dword_60C8DDA8 = (int)sub_6024D1F0;
  dword_60C8DDAC = 0;
  dword_60C8DDB0 = (int)nullsub_3087;
  dword_60C8DDB4 = 0;
  dword_60C8DDB8 = (int)&off_60BDA514;
  *(_DWORD *)algn_60C8DDBC = CurrentStateID + 2;
  dword_60C8DDC0 = (int)j_eye_wait_ref;
  dword_60C8DDC4 = 0;
  dword_60C8DDC8 = (int)SE_EMY_DOWN_ref_24D3C4;
  dword_60C8DDCC = 0;
  dword_60C8DDD0 = (int)nullsub_3088;
  dword_60C8DDD4 = 0;
  dword_60C8DDD8 = (int)&off_60BDA514;
  *(_DWORD *)algn_60C8DDDC = CurrentStateID + 3;
  dword_60C8DDE0 = (int)eye_wait_ref;
  dword_60C8DDE4 = 0;
  dword_60C8DDE8 = (int)sub_6024D9C8;
  dword_60C8DDEC = 0;
  dword_60C8DDF0 = (int)nullsub_3089;
  dword_60C8DDF4 = 0;
  dword_60C8DDF8 = (int)&off_60BDA514;
  *(_DWORD *)algn_60C8DDFC = CurrentStateID + 4;
  dword_60C8DE00 = (int)sub_6024DBD4;
  dword_60C8DE04 = 0;
  dword_60C8DE08 = (int)&loc_6024DE64;
  dword_60C8DE0C = 0;
  dword_60C8DE10 = (int)nullsub_3090;
  dword_60C8DE14 = 0;
  dword_60C8DE18 = (int)&off_60BDA514;
  *(_DWORD *)algn_60C8DE1C = CurrentStateID + 5;
  dword_60C8DE20 = (int)sub_6024E15C;
  dword_60C8DE24 = 0;
  dword_60C8DE28 = (int)sub_6024E50C;
  dword_60C8DE2C = 0;
  dword_60C8DE30 = (int)nullsub_3091;
  dword_60C8DE34 = 0;
  dword_60C8DE38 = (int)&off_60BDA514;
  *(_DWORD *)algn_60C8DE3C = CurrentStateID + 6;
  dword_60C8DE40 = (int)sub_6024E6BC;
  dword_60C8DE44 = 0;
  dword_60C8DE48 = (int)sub_6024E6D0;
  dword_60C8DE4C = 0;
  dword_60C8DE50 = (int)nullsub_3092;
  dword_60C8DE54 = 0;
  dword_60C8DE58 = (int)&off_60BDA514;
  *(_DWORD *)algn_60C8DE5C = CurrentStateID + 7;
  dword_60C8DE60 = (int)eye_wait_ref_2;
  dword_60C8DE64 = 0;
  dword_60C8DE68 = (int)sub_6024E908;
  dword_60C8DE6C = 0;
  dword_60C8DE70 = (int)nullsub_3093;
  dword_60C8DE74 = 0;
  dword_60C8DE7C = CurrentStateID + 8;
  dword_60C8DE80 = 444;
  dword_60C8DE84 = 1;
  dword_60C8DE88 = 448;
  dword_60C8DE8C = 1;
  dword_60C8DE90 = 452;
  dword_60C8DE94 = 1;
  dword_60C8DE78 = (int)&off_60BDA528;
  dword_60C8DE98 = (int)&stru_60C906EC;
  CurrentStateID += 9;
  unk_60C8DEA0 = CurrentStateID;
  unk_60C8DEA4 = 456;
  dword_60C8DEA8 = 1;
  dword_60C8DEAC = 460;
  dword_60C8DEB0 = 1;
  dword_60C8DEB4 = 464;
  dword_60C8DEB8 = 1;
  dword_60C8DE9C = (int)&off_60BDA528;
  dword_60C8DEBC = (int)&stru_60C90710;
  return &stru_60C90710;
}
