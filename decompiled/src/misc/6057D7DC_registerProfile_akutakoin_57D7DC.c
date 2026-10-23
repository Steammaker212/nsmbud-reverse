/* registerProfile_akutakoin_57D7DC
 * address: 0x6057D7DC   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_akutakoin_57D7DC())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "アクター泡コイン";
  Profile__ctor(&stru_60CAEE24, Actor_akutakoin_build, 0x199u, &v1, &stru_60B04808, 8194);
  dword_60CAEE40 = CurrentStateID + 1;
  dword_60CAEE3C = (int)&off_60C04E10;
  dword_60CAEE44 = (int)sub_6057BE48;
  dword_60CAEE48 = 0;
  dword_60CAEE4C = (int)balloon_coin_model_ref;
  dword_60CAEE50 = 0;
  dword_60CAEE54 = (int)nullsub_4646;
  dword_60CAEE58 = 0;
  CurrentStateID += 2;
  dword_60CAEE60 = CurrentStateID;
  dword_60CAEE5C = (int)&off_60C04E10;
  dword_60CAEE64 = (int)sub_6057C318;
  dword_60CAEE68 = 0;
  dword_60CAEE6C = (int)balloon_coin_model_ref_2;
  dword_60CAEE70 = 0;
  dword_60CAEE74 = (int)nullsub_4647;
  dword_60CAEE78 = 0;
  return nullsub_4647;
}
