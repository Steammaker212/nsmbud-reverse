/* registerProfile_Bowser_Tag_2A0C48
 * address: 0x602A0C48   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Bowser_Tag_2A0C48())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC34BE;
  Profile__ctor(&stru_60C90280, Actor_Bowser_Tag_build, 0x13u, &v1, &stru_60AFE384, 2);
  dword_60C9029C = CurrentStateID + 1;
  dword_60C90298 = (int)&off_60BE24E0;
  dword_60C902A0 = (int)sub_602A0700;
  dword_60C902A4 = 0;
  dword_60C902A8 = (int)sub_602A0744;
  dword_60C902AC = 0;
  dword_60C902B0 = (int)nullsub_3188;
  dword_60C902B4 = 0;
  unk_60C902B8 = &off_60BE24E0;
  unk_60C902BC = CurrentStateID + 2;
  dword_60C902C0 = (int)nullsub_3189;
  dword_60C902C4 = 0;
  dword_60C902C8 = (int)sub_602A0830;
  dword_60C902CC = 0;
  dword_60C902D0 = (int)nullsub_3190;
  dword_60C902D4 = 0;
  CurrentStateID += 3;
  dword_60C902DC = CurrentStateID;
  dword_60C902D8 = (int)&off_60BE24E0;
  dword_60C902E0 = (int)sub_602A091C;
  dword_60C902E4 = 0;
  dword_60C902E8 = (int)sub_602A0930;
  dword_60C902EC = 0;
  dword_60C902F0 = (int)nullsub_3191;
  dword_60C902F4 = 0;
  return nullsub_3191;
}
