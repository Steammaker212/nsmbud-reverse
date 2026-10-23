/* registerProfile_bosuBowser_Switch_botan_2_6E04A8
 * address: 0x606E04A8   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_bosuBowser_Switch_botan_2_6E04A8())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CBBCE4 = 0;
  dword_60CBBCE0 = 0;
  dword_60CBBCDC = 0;
  dword_60CBBCD8 = 0;
  dword_60CBBCE8 = -1049624576;
  dword_60CBBCEC = 1107820544;
  dword_60CBBCF0 = 1097859072;
  dword_60CBBCF4 = 0;
  dword_60CBBCF8 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC7789;
  Profile__ctor(&stru_60CBBCFC, Actor_bosuBowser_Switch_botan_2_build, 0x15Du, &v1, &stru_60B09098, 2);
  dword_60CBBD18 = CurrentStateID + 1;
  dword_60CBBD14 = (int)&off_60C1F0F4;
  dword_60CBBD1C = (int)sub_606DF9D4;
  dword_60CBBD20 = 0;
  dword_60CBBD24 = (int)SE_BOSS_KOOPA_AUX_FALL_ref;
  dword_60CBBD28 = 0;
  dword_60CBBD2C = (int)nullsub_5287;
  dword_60CBBD30 = 0;
  CurrentStateID += 2;
  dword_60CBBD38 = CurrentStateID;
  dword_60CBBD34 = (int)&off_60C1F0F4;
  dword_60CBBD3C = (int)nullsub_5288;
  dword_60CBBD40 = 0;
  dword_60CBBD44 = (int)sub_606DFB74;
  dword_60CBBD48 = 0;
  dword_60CBBD4C = (int)nullsub_5289;
  dword_60CBBD50 = 0;
  return nullsub_5289;
}
