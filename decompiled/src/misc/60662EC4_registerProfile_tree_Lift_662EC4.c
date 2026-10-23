/* registerProfile_tree_Lift_662EC4
 * address: 0x60662EC4   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_tree_Lift_662EC4())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB69B0 = 0;
  dword_60CB69B4 = 0;
  dword_60CB69B8 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5ADD;
  Profile__ctor(&stru_60CB69BC, Actor_tree_Lift_build, 0x107u, &v1, &stru_60B078AC, 2);
  dword_60CB69D8 = CurrentStateID + 1;
  dword_60CB69D4 = (int)&off_60C14CD8;
  dword_60CB69DC = (int)sub_60661A14;
  dword_60CB69E0 = 0;
  dword_60CB69E4 = (int)sub_60661A40;
  dword_60CB69E8 = 0;
  dword_60CB69EC = (int)sub_60661B24;
  dword_60CB69F0 = 0;
  unk_60CB69F4 = &off_60C14CD8;
  unk_60CB69F8 = CurrentStateID + 2;
  dword_60CB69FC = (int)nullsub_5067;
  dword_60CB6A00 = 0;
  dword_60CB6A04 = (int)sub_60661B38;
  dword_60CB6A08 = 0;
  dword_60CB6A0C = (int)sub_60661B6C;
  dword_60CB6A10 = 0;
  unk_60CB6A14 = &off_60C14CD8;
  unk_60CB6A18 = CurrentStateID + 3;
  dword_60CB6A1C = (int)nullsub_5068;
  dword_60CB6A20 = 0;
  dword_60CB6A24 = (int)sub_60661B90;
  dword_60CB6A28 = 0;
  dword_60CB6A2C = (int)sub_60661C70;
  dword_60CB6A30 = 0;
  unk_60CB6A34 = &off_60C14CD8;
  unk_60CB6A38 = CurrentStateID + 4;
  dword_60CB6A3C = (int)nullsub_5069;
  dword_60CB6A40 = 0;
  dword_60CB6A44 = (int)sub_60661C84;
  dword_60CB6A48 = 0;
  dword_60CB6A4C = (int)nullsub_5070;
  dword_60CB6A50 = 0;
  unk_60CB6A54 = &off_60C14CD8;
  unk_60CB6A58 = CurrentStateID + 5;
  dword_60CB6A5C = (int)sub_60661CBC;
  dword_60CB6A60 = 0;
  dword_60CB6A64 = (int)sub_60661CEC;
  dword_60CB6A68 = 0;
  dword_60CB6A6C = (int)sub_60661DC4;
  dword_60CB6A70 = 0;
  unk_60CB6A74 = &off_60C14CD8;
  unk_60CB6A78 = CurrentStateID + 6;
  dword_60CB6A7C = (int)nullsub_5071;
  dword_60CB6A80 = 0;
  dword_60CB6A84 = (int)sub_60661DD8;
  dword_60CB6A88 = 0;
  dword_60CB6A8C = (int)sub_60661E0C;
  dword_60CB6A90 = 0;
  unk_60CB6A94 = &off_60C14CD8;
  unk_60CB6A98 = CurrentStateID + 7;
  dword_60CB6A9C = (int)nullsub_5072;
  dword_60CB6AA0 = 0;
  dword_60CB6AA4 = (int)sub_60661E28;
  dword_60CB6AA8 = 0;
  dword_60CB6AAC = (int)sub_60661F0C;
  dword_60CB6AB0 = 0;
  CurrentStateID += 8;
  dword_60CB6AB8 = CurrentStateID;
  dword_60CB6AB4 = (int)&off_60C14CD8;
  dword_60CB6ABC = (int)nullsub_5073;
  dword_60CB6AC0 = 0;
  dword_60CB6AC4 = (int)sub_60661F20;
  dword_60CB6AC8 = 0;
  dword_60CB6ACC = (int)nullsub_5074;
  dword_60CB6AD0 = 0;
  return nullsub_5074;
}
