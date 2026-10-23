/* registerProfile_gabon_ironball_13CA14
 * address: 0x6013CA14   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_gabon_ironball_13CA14())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C87BF4 = 0;
  dword_60C87BF8 = 0;
  dword_60C87BFC = 0;
  unk_60C87BE0 = (int)(float)((float)(2147500000.0 * 2.46) / 180.0);
  unk_60C87BE4 = (int)(float)((float)(2147500000.0 * 4.92) / 180.0);
  unk_60C87BE8 = (int)(float)((float)(2147500000.0 * 1.05) / 180.0);
  unk_60C87BEC = (int)(float)((float)(2147500000.0 * 1.4) / 180.0);
  unk_60C87BF0 = (int)(float)((float)(2147500000.0 * 0.9) / 180.0);
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABEC88;
  Profile__ctor(&stru_60C87B6C, Actor_gabon_ironball_build, 0x281u, &v1, &stru_60AF6824, 160);
  dword_60C87B88 = CurrentStateID + 1;
  dword_60C87B84 = (int)&off_60BD2E60;
  dword_60C87B8C = (int)&loc_6013BAA8;
  dword_60C87B90 = 0;
  dword_60C87B94 = (int)&loc_6013BBBC;
  dword_60C87B98 = 0;
  dword_60C87B9C = (int)nullsub_2863;
  dword_60C87BA0 = 0;
  CurrentStateID += 2;
  dword_60C87BA8 = CurrentStateID;
  dword_60C87BA4 = (int)&off_60BD2E60;
  dword_60C87BAC = (int)SE_OBJ_CMN_SPLASH_ref_13C05C;
  dword_60C87BB0 = 0;
  dword_60C87BB4 = (int)&loc_6013C0DC;
  dword_60C87BB8 = 0;
  dword_60C87BBC = (int)nullsub_2864;
  dword_60C87BC0 = 0;
  return nullsub_2864;
}
