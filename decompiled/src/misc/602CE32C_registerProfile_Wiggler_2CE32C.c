/* registerProfile_Wiggler_2CE32C
 * address: 0x602CE32C   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_Wiggler_2CE32C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C91974 = 0;
  dword_60C91978 = 0;
  dword_60C9197C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC3BA0;
  Profile__ctor(&stru_60C91980, Actor_Wiggler_build, 0x1FCu, &v1, &stru_60AFEA50, 18);
  dword_60C9199C = CurrentStateID + 1;
  dword_60C91998 = (int)&off_60BE638C;
  dword_60C919A0 = (int)sub_602CD22C;
  dword_60C919A4 = 0;
  dword_60C919A8 = (int)&loc_602CD244;
  dword_60C919AC = 0;
  dword_60C919B0 = (int)nullsub_3269;
  dword_60C919B4 = 0;
  unk_60C919B8 = &off_60BE638C;
  unk_60C919BC = CurrentStateID + 2;
  dword_60C919C0 = (int)flower_2_ref;
  dword_60C919C4 = 0;
  dword_60C919C8 = (int)sub_602CD640;
  dword_60C919CC = 0;
  dword_60C919D0 = (int)nullsub_3270;
  dword_60C919D4 = 0;
  unk_60C919D8 = &off_60BE638C;
  unk_60C919DC = CurrentStateID + 3;
  dword_60C919E0 = (int)sub_602CD78C;
  dword_60C919E4 = 0;
  dword_60C919E8 = (int)sub_602CD79C;
  dword_60C919EC = 0;
  dword_60C919F0 = (int)nullsub_3271;
  dword_60C919F4 = 0;
  dword_60C919F8 = (int)&off_60BE638C;
  *(_DWORD *)algn_60C919FC = CurrentStateID + 4;
  dword_60C91A00 = (int)sub_602CD884;
  dword_60C91A04 = 0;
  dword_60C91A08 = (int)&loc_602CD89C;
  dword_60C91A0C = 0;
  dword_60C91A10 = (int)nullsub_3272;
  dword_60C91A14 = 0;
  dword_60C91A18 = (int)&off_60BE638C;
  *(_DWORD *)algn_60C91A1C = CurrentStateID + 5;
  dword_60C91A20 = (int)sub_602CDBF8;
  dword_60C91A24 = 0;
  dword_60C91A28 = (int)&loc_602CDC34;
  dword_60C91A2C = 0;
  dword_60C91A30 = (int)nullsub_3273;
  dword_60C91A34 = 0;
  CurrentStateID += 6;
  dword_60C91A3C = CurrentStateID;
  dword_60C91A40 = 456;
  dword_60C91A44 = 1;
  dword_60C91A48 = 460;
  dword_60C91A4C = 1;
  dword_60C91A50 = 464;
  dword_60C91A54 = 1;
  dword_60C91A38 = (int)&off_60BE63A0;
  dword_60C91A58 = (int)&stru_60C90710;
  return &stru_60C90710;
}
