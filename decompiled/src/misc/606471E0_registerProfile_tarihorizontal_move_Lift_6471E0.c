/* registerProfile_tarihorizontal_move_Lift_6471E0
 * address: 0x606471E0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_tarihorizontal_move_Lift_6471E0())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB5E48 = 0;
  dword_60CB5E4C = 0;
  dword_60CB5E50 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD54DE;
  Profile__ctor(&stru_60CB5E54, Actor_tarihorizontal_move_Lift_build, 0xFAu, &v1, &stru_60B07498, 2);
  dword_60CB5E70 = CurrentStateID + 1;
  dword_60CB5E6C = (int)&off_60C13938;
  dword_60CB5E74 = (int)sub_606463EC;
  dword_60CB5E78 = 0;
  dword_60CB5E7C = (int)sub_60646434;
  dword_60CB5E80 = 0;
  dword_60CB5E84 = (int)nullsub_5008;
  dword_60CB5E88 = 0;
  stru_60CB5E8C.vtable = &off_60C13938;
  stru_60CB5E8C.id = CurrentStateID + 2;
  dword_60CB5E94 = (int)sub_60646490;
  dword_60CB5E98 = 0;
  dword_60CB5E9C = (int)sub_606464B8;
  dword_60CB5EA0 = 0;
  dword_60CB5EA4 = (int)nullsub_5009;
  dword_60CB5EA8 = 0;
  stru_60CB5EAC.vtable = &off_60C13938;
  stru_60CB5EAC.id = CurrentStateID + 3;
  dword_60CB5EB4 = (int)sub_60646618;
  dword_60CB5EB8 = 0;
  dword_60CB5EBC = (int)&loc_60646684;
  dword_60CB5EC0 = 0;
  dword_60CB5EC4 = (int)nullsub_5010;
  dword_60CB5EC8 = 0;
  CurrentStateID += 4;
  dword_60CB5ED0 = CurrentStateID;
  dword_60CB5ECC = (int)&off_60C13938;
  dword_60CB5ED4 = (int)sub_606468B0;
  dword_60CB5ED8 = 0;
  dword_60CB5EDC = (int)&loc_606468BC;
  dword_60CB5EE0 = 0;
  dword_60CB5EE4 = (int)nullsub_5011;
  dword_60CB5EE8 = 0;
  return nullsub_5011;
}
