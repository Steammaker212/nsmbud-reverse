/* registerProfile_Hammer_14083C
 * address: 0x6014083C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Hammer_14083C()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C87D30 = 0;
  dword_60C87D34 = 0;
  dword_60C87D38 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABECE7;
  Profile__ctor(&stru_60C87CAC, Actor_Hammer_build, 0x2F7u, &v1, &stru_60AF68AC, 18);
  dword_60C87D3C = 0;
  dword_60C87D40 = 1084227584;
  dword_60C87D44 = 0;
  dword_60C87CC8 = CurrentStateID + 1;
  dword_60C87CC4 = (int)&off_60BD3420;
  dword_60C87CCC = (int)sub_6013F204;
  dword_60C87CD0 = 0;
  dword_60C87CD4 = (int)sub_6013F218;
  dword_60C87CD8 = 0;
  dword_60C87CDC = (int)nullsub_2868;
  dword_60C87CE0 = 0;
  stru_60C87CE4.vtable = &off_60BD3420;
  stru_60C87CE4.id = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60C87D08 = CurrentStateID;
  dword_60C87CEC = (int)sub_6013F3D8;
  dword_60C87D04 = (int)&off_60BD3420;
  dword_60C87CF0 = 0;
  dword_60C87D0C = (int)sub_6013F96C;
  dword_60C87CF4 = (int)&loc_6013F558;
  dword_60C87D10 = 0;
  dword_60C87CF8 = 0;
  dword_60C87D14 = (int)sub_6013F9F4;
  dword_60C87CFC = (int)nullsub_2869;
  dword_60C87D00 = 0;
  dword_60C87D18 = 0;
  dword_60C87D1C = (int)nullsub_151;
  dword_60C87D20 = 0;
  return &dword_60C87D04;
}
