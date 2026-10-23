/* registerProfile_tarivertical_move_Lift_2_658214
 * address: 0x60658214   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_tarivertical_move_Lift_2_658214()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB64C4 = 0;
  dword_60CB64C8 = 0;
  dword_60CB64CC = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD5885;
  Profile__ctor(&stru_60CB64D0, Actor_tarivertical_move_Lift_2_build, 0xD3u, v1, &stru_60B07738, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD58A7;
  Profile__ctor(&stru_60CB64E8, Actor_tarivertical_move_Lift_2_build, 0xD6u, v1, &stru_60B0775C, 2);
  dword_60CB6504 = CurrentStateID + 1;
  dword_60CB6500 = (int)&off_60C14634;
  dword_60CB6508 = (int)sub_6065729C;
  dword_60CB650C = 0;
  dword_60CB6510 = (int)sub_606572D0;
  dword_60CB6514 = 0;
  dword_60CB6518 = (int)sub_606572E8;
  dword_60CB651C = 0;
  stru_60CB6520.vtable = &off_60C14634;
  stru_60CB6520.id = CurrentStateID + 2;
  dword_60CB6528 = (int)sub_60657328;
  dword_60CB652C = 0;
  dword_60CB6530 = (int)sub_60657360;
  dword_60CB6534 = 0;
  dword_60CB6538 = (int)nullsub_5042;
  dword_60CB653C = 0;
  dword_60CB6540 = (int)&off_60C14634;
  *(_DWORD *)algn_60CB6544 = CurrentStateID + 3;
  dword_60CB6548 = (int)sub_606574CC;
  dword_60CB654C = 0;
  dword_60CB6550 = (int)&loc_60657538;
  dword_60CB6554 = 0;
  dword_60CB6558 = (int)nullsub_5043;
  dword_60CB655C = 0;
  unk_60CB6560 = &off_60C14634;
  unk_60CB6564 = CurrentStateID + 4;
  CurrentStateID += 5;
  dword_60CB6584 = CurrentStateID;
  dword_60CB6568 = (int)sub_606577B8;
  dword_60CB6580 = (int)&off_60C14634;
  dword_60CB656C = 0;
  dword_60CB6588 = (int)sub_606578CC;
  dword_60CB6570 = (int)&loc_606577C4;
  dword_60CB658C = 0;
  dword_60CB6574 = 0;
  dword_60CB6590 = (int)sub_606578F0;
  dword_60CB6578 = (int)nullsub_5044;
  dword_60CB657C = 0;
  dword_60CB6594 = 0;
  dword_60CB6598 = (int)nullsub_254;
  dword_60CB659C = 0;
  return &dword_60CB6580;
}
