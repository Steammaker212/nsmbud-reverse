/* registerProfile_tarihorizontal_move_Lift_2_651F34
 * address: 0x60651F34   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_tarihorizontal_move_Lift_2_651F34()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB61B0 = 0;
  dword_60CB61B4 = 0;
  dword_60CB61B8 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD56F2;
  Profile__ctor(&stru_60CB61BC, Actor_tarihorizontal_move_Lift_2_build, 0xD4u, v1, &stru_60B075C8, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD5714;
  Profile__ctor(&stru_60CB61D4, Actor_tarihorizontal_move_Lift_2_build, 0xD5u, v1, &stru_60B075EC, 2);
  dword_60CB61F0 = CurrentStateID + 1;
  dword_60CB61EC = (int)&off_60C1408C;
  dword_60CB61F4 = (int)sub_60650EEC;
  dword_60CB61F8 = 0;
  dword_60CB61FC = (int)sub_60650F20;
  dword_60CB6200 = 0;
  dword_60CB6204 = (int)sub_60650FA8;
  dword_60CB6208 = 0;
  stru_60CB620C.vtable = &off_60C1408C;
  stru_60CB620C.id = CurrentStateID + 2;
  dword_60CB6214 = (int)sub_60650FCC;
  dword_60CB6218 = 0;
  dword_60CB621C = (int)sub_60650FE8;
  dword_60CB6220 = 0;
  dword_60CB6224 = (int)nullsub_5028;
  dword_60CB6228 = 0;
  stru_60CB622C.vtable = &off_60C1408C;
  stru_60CB622C.id = CurrentStateID + 3;
  dword_60CB6234 = (int)sub_60651148;
  dword_60CB6238 = 0;
  dword_60CB623C = (int)&loc_606511B4;
  dword_60CB6240 = 0;
  dword_60CB6244 = (int)nullsub_5029;
  dword_60CB6248 = 0;
  unk_60CB624C = &off_60C1408C;
  unk_60CB6250 = CurrentStateID + 4;
  CurrentStateID += 5;
  dword_60CB6270 = CurrentStateID;
  dword_60CB6254 = (int)sub_606513E0;
  dword_60CB626C = (int)&off_60C1408C;
  dword_60CB6258 = 0;
  dword_60CB6274 = (int)sub_606514D0;
  dword_60CB625C = (int)&loc_606513EC;
  dword_60CB6278 = 0;
  dword_60CB6260 = 0;
  dword_60CB627C = (int)sub_606514F4;
  dword_60CB6264 = (int)nullsub_5030;
  dword_60CB6268 = 0;
  dword_60CB6280 = 0;
  dword_60CB6284 = (int)nullsub_252;
  dword_60CB6288 = 0;
  return &dword_60CB626C;
}
