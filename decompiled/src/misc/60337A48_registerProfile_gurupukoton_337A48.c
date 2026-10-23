/* registerProfile_gurupukoton_337A48
 * address: 0x60337A48   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_gurupukoton_337A48()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  sead__SafeString v3[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C94160 = 0;
  dword_60C94164 = 0;
  dword_60C94168 = 0;
  v3[0].vtable = &sead__SafeStringBase__vtable;
  v3[0].cstr = (char *)&unk_60AC4C07;
  Profile__ctor(&stru_60C9416C, Actor_gurupukoton_build, 0x304u, v3, &stru_60AFFA28, 258);
  v3[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BECA54;
  v3[0].cstr = (char *)&unk_60AC4C11;
  Profile__ctor(&stru_60C94184, Actor_gurupukoton_build, 0x305u, v3, &stru_60AFFA4C, 258);
  *v1 = &off_60BECA60;
  dword_60C941A0 = CurrentStateID + 1;
  dword_60C9419C = (int)&off_60BECD4C;
  dword_60C941A4 = (int)sub_60335E10;
  dword_60C941A8 = 0;
  dword_60C941AC = (int)sub_60335E28;
  dword_60C941B0 = 0;
  dword_60C941B4 = (int)nullsub_3369;
  dword_60C941B8 = 0;
  dword_60C941BC = (int)&off_60BECD4C;
  unk_60C941C0 = CurrentStateID + 2;
  dword_60C941C4 = (int)&loc_60335F04;
  dword_60C941C8 = 0;
  dword_60C941CC = (int)&loc_60335FC8;
  dword_60C941D0 = 0;
  dword_60C941D4 = (int)sub_60336578;
  dword_60C941D8 = 0;
  unk_60C941DC = &off_60BECD4C;
  unk_60C941E0 = CurrentStateID + 3;
  dword_60C941E4 = (int)sub_603365D0;
  dword_60C941E8 = 0;
  dword_60C941EC = (int)SE_EMY_KOTON_LAND_ref;
  dword_60C941F0 = 0;
  dword_60C941F4 = (int)sub_60336850;
  dword_60C941F8 = 0;
  stru_60C941FC.vtable = &off_60BECD4C;
  stru_60C941FC.id = CurrentStateID + 4;
  CurrentStateID += 5;
  dword_60C94204 = (int)sub_6033685C;
  dword_60C94208 = 0;
  dword_60C94220 = CurrentStateID;
  dword_60C94224 = 456;
  dword_60C94228 = 1;
  dword_60C9420C = (int)sub_6033686C;
  dword_60C94210 = 0;
  dword_60C94214 = (int)nullsub_183;
  dword_60C94218 = 0;
  dword_60C9422C = 460;
  dword_60C94230 = 1;
  dword_60C94234 = 464;
  dword_60C94238 = 1;
  dword_60C9421C = (int)&off_60BECD60;
  dword_60C9423C = (int)&stru_60C90710;
  return &dword_60C9421C;
}
