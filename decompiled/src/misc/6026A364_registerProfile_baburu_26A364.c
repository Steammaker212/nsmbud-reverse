/* registerProfile_baburu_26A364
 * address: 0x6026A364   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_baburu_26A364()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C8E718 = 0;
  dword_60C8E71C = 0;
  dword_60C8E720 = 0;
  dword_60C8E6F0 = 0;
  unk_60C8E6F4 = 1101004800;
  unk_60C8E6F8 = 0;
  dword_60C8E6FC = 1092616192;
  dword_60C8E700 = 0;
  dword_60C8E704 = -1063256064;
  dword_60C8E708 = 1092616192;
  dword_60C8E70C = 0;
  dword_60C8E710 = -1054867456;
  dword_60C8E714 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC2A7F;
  Profile__ctor(&stru_60C8E64C, Actor_baburu_build, 0x28Fu, v1, &stru_60AFD9FC, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC2A89;
  Profile__ctor(&stru_60C8E664, Actor_baburu_build, 0x290u, v1, &stru_60AFDA20, 18);
  dword_60C8E680 = CurrentStateID + 1;
  dword_60C8E67C = (int)&off_60BDBF88;
  dword_60C8E684 = (int)nullsub_3111;
  dword_60C8E688 = 0;
  dword_60C8E68C = (int)sub_60267A60;
  dword_60C8E690 = 0;
  dword_60C8E694 = (int)nullsub_3112;
  dword_60C8E698 = 0;
  unk_60C8E69C = &off_60BDBF88;
  unk_60C8E6A0 = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60C8E6A4 = (int)sub_60267A98;
  dword_60C8E6A8 = 0;
  dword_60C8E6C0 = CurrentStateID;
  dword_60C8E6C4 = 456;
  dword_60C8E6C8 = 1;
  dword_60C8E6AC = (int)&loc_60267AE0;
  dword_60C8E6B0 = 0;
  dword_60C8E6B4 = (int)nullsub_3113;
  dword_60C8E6B8 = 0;
  dword_60C8E6CC = 460;
  dword_60C8E6D0 = 1;
  dword_60C8E6D4 = 464;
  dword_60C8E6D8 = 1;
  dword_60C8E6BC = (int)&off_60BDBF9C;
  dword_60C8E6DC = (int)&stru_60C90710;
  return &dword_60C8E6BC;
}
