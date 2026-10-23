/* registerProfile_mid_Goomba_350178
 * address: 0x60350178   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_mid_Goomba_350178()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C94E0C = 0;
  dword_60C94E10 = 0;
  dword_60C94E14 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC4EEB;
  Profile__ctor(&stru_60C94E18, Actor_mid_Goomba_build, 0x1D8u, &v1, &stru_60AFFDA0, 18);
  dword_60C94E34 = CurrentStateID + 1;
  dword_60C94E30 = (int)&off_60BEE908;
  dword_60C94E38 = (int)sub_6034EA94;
  dword_60C94E3C = 0;
  dword_60C94E40 = (int)sub_6034ECFC;
  dword_60C94E44 = 0;
  dword_60C94E48 = (int)nullsub_3392;
  dword_60C94E4C = 0;
  dword_60C94E54 = CurrentStateID + 2;
  dword_60C94E58 = 732;
  dword_60C94E5C = 1;
  dword_60C94E60 = 736;
  dword_60C94E64 = 1;
  dword_60C94E68 = 740;
  dword_60C94E6C = 1;
  dword_60C94E50 = (int)&off_60BEE91C;
  dword_60C94E70 = (int)&dword_60C945FC;
  dword_60C94E80 = 1;
  dword_60C94E84 = 760;
  dword_60C94E88 = 1;
  dword_60C94E8C = 764;
  dword_60C94E90 = 1;
  unk_60C94E74 = &off_60BEE91C;
  unk_60C94E78 = CurrentStateID + 3;
  unk_60C94E7C = 756;
  dword_60C94E94 = (int)&dword_60C94644;
  dword_60C94EA0 = 768;
  dword_60C94EA4 = 1;
  dword_60C94EA8 = 772;
  dword_60C94EAC = 1;
  dword_60C94EB0 = 776;
  dword_60C94EB4 = 1;
  unk_60C94E98 = &off_60BEE91C;
  unk_60C94E9C = CurrentStateID + 4;
  dword_60C94EB8 = (int)&dword_60C94668;
  CurrentStateID += 5;
  unk_60C94EC0 = CurrentStateID;
  unk_60C94EC4 = 456;
  dword_60C94EC8 = 1;
  dword_60C94ECC = 460;
  dword_60C94ED0 = 1;
  dword_60C94ED4 = 464;
  dword_60C94ED8 = 1;
  dword_60C94EBC = (int)&off_60BEE91C;
  dword_60C94EDC = (int)&dword_60C946B0;
  return &dword_60C946B0;
}
