/* registerProfile_level_Piranha_furawa_R33_2FEA14
 * address: 0x602FEA14   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_level_Piranha_furawa_R33_2FEA14())()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C92BC8 = 0;
  dword_60C92BCC = 0;
  dword_60C92BD0 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC42A3;
  Profile__ctor(&stru_60C92BD4, Actor_level_Piranha_furawa_R33_build, 0x1ECu, v1, &stru_60AFEFD8, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC42C2;
  Profile__ctor(&stru_60C92BEC, Actor_level_Piranha_furawa_R33_build, 0x1EDu, v1, &stru_60AFEFD8, 18);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC42E8;
  Profile__ctor(&stru_60C92C04, Actor_level_Piranha_furawa_R33_build, 0x1EEu, v1, &stru_60AFEFD8, 18);
  dword_60C92C20 = CurrentStateID + 1;
  dword_60C92C24 = 676;
  dword_60C92C28 = 1;
  dword_60C92C2C = 680;
  dword_60C92C30 = 1;
  dword_60C92C34 = 684;
  dword_60C92C38 = 1;
  dword_60C92C1C = (int)&off_60BE8B08;
  dword_60C92C3C = (int)&unk_60C92CCC;
  CurrentStateID += 2;
  dword_60C92C44 = CurrentStateID;
  dword_60C92C40 = (int)&off_60BE8B1C;
  dword_60C92C48 = (int)sub_602FE1FC;
  dword_60C92C4C = 0;
  dword_60C92C50 = (int)sub_602FE2EC;
  dword_60C92C54 = 0;
  dword_60C92C58 = (int)nullsub_3315;
  dword_60C92C5C = 0;
  return nullsub_3315;
}
