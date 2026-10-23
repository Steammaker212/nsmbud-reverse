/* registerProfile_ice_Lift_kishi_ku_61D110
 * address: 0x6061D110   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_ice_Lift_kishi_ku_61D110())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3D8C;
  Profile__ctor(&stru_60CB3544, Actor_ice_Lift_kishi_ku_build, 0x164u, &v1, &stru_60B0675C, 2);
  dword_60CB3560 = CurrentStateID + 1;
  dword_60CB355C = (int)&off_60C10E94;
  dword_60CB3564 = (int)sub_6061C93C;
  dword_60CB3568 = 0;
  dword_60CB356C = (int)sub_6061C94C;
  dword_60CB3570 = 0;
  dword_60CB3574 = (int)sub_6061CA08;
  dword_60CB3578 = 0;
  stru_60CB357C.vtable = &off_60C10E94;
  stru_60CB357C.id = CurrentStateID + 2;
  dword_60CB3584 = (int)nullsub_4908;
  dword_60CB3588 = 0;
  dword_60CB358C = (int)sub_6061CA1C;
  dword_60CB3590 = 0;
  dword_60CB3594 = (int)nullsub_4909;
  dword_60CB3598 = 0;
  stru_60CB359C.vtable = &off_60C10E94;
  stru_60CB359C.id = CurrentStateID + 3;
  dword_60CB35A4 = (int)nullsub_4910;
  dword_60CB35A8 = 0;
  dword_60CB35AC = (int)sub_6061CB4C;
  dword_60CB35B0 = 0;
  dword_60CB35B4 = (int)nullsub_4911;
  dword_60CB35B8 = 0;
  stru_60CB35BC.vtable = &off_60C10E94;
  stru_60CB35BC.id = CurrentStateID + 4;
  dword_60CB35C4 = (int)sub_6061CC78;
  dword_60CB35C8 = 0;
  dword_60CB35CC = (int)sub_6061CC88;
  dword_60CB35D0 = 0;
  dword_60CB35D4 = (int)nullsub_4912;
  dword_60CB35D8 = 0;
  CurrentStateID += 5;
  dword_60CB35E0 = CurrentStateID;
  dword_60CB35DC = (int)&off_60C10E94;
  dword_60CB35E4 = (int)nullsub_4913;
  dword_60CB35E8 = 0;
  dword_60CB35EC = (int)sub_6061CD78;
  dword_60CB35F0 = 0;
  dword_60CB35F4 = (int)nullsub_4914;
  dword_60CB35F8 = 0;
  return nullsub_4914;
}
