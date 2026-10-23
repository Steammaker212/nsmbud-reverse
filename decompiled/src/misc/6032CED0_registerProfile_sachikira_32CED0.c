/* registerProfile_sachikira_32CED0
 * address: 0x6032CED0   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_sachikira_32CED0())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C93CAC = 0;
  dword_60C93CB0 = 0;
  dword_60C93CB4 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC4A38;
  Profile__ctor(&stru_60C93CB8, Actor_sachikira_build, 0x277u, &v1, &stru_60AFF840, 18);
  dword_60C93CD4 = CurrentStateID + 1;
  dword_60C93CD0 = (int)&off_60BEBFD0;
  dword_60C93CD8 = (int)sub_6032B144;
  dword_60C93CDC = 0;
  dword_60C93CE0 = (int)SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref;
  dword_60C93CE4 = 0;
  dword_60C93CE8 = (int)nullsub_3351;
  dword_60C93CEC = 0;
  unk_60C93CF0 = &off_60BEBFD0;
  unk_60C93CF4 = CurrentStateID + 2;
  dword_60C93CF8 = (int)sub_6032B68C;
  dword_60C93CFC = 0;
  dword_60C93D00 = (int)SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref_2;
  dword_60C93D04 = 0;
  dword_60C93D08 = (int)nullsub_3352;
  dword_60C93D0C = 0;
  CurrentStateID += 3;
  dword_60C93D14 = CurrentStateID;
  dword_60C93D10 = (int)&off_60BEBFD0;
  dword_60C93D18 = (int)sub_6032B998;
  dword_60C93D1C = 0;
  dword_60C93D20 = (int)sub_6032B9E8;
  dword_60C93D24 = 0;
  dword_60C93D28 = (int)nullsub_179;
  dword_60C93D2C = 0;
  return nullsub_179;
}
