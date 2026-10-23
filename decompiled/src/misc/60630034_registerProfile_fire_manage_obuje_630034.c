/* registerProfile_fire_manage_obuje_630034
 * address: 0x60630034   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_fire_manage_obuje_630034())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD410C;
  Profile__ctor(&stru_60CB4070, Actor_fire_manage_obuje_build, 0x23Cu, &v1, &stru_60B06AD8, 0);
  dword_60CB408C = CurrentStateID + 1;
  dword_60CB4088 = (int)&off_60C12614;
  dword_60CB4090 = (int)nullsub_4952;
  dword_60CB4094 = 0;
  dword_60CB4098 = (int)sub_6062F50C;
  dword_60CB409C = 0;
  dword_60CB40A0 = (int)nullsub_4953;
  dword_60CB40A4 = 0;
  stru_60CB40A8.vtable = &off_60C12614;
  stru_60CB40A8.id = CurrentStateID + 2;
  dword_60CB40B0 = (int)sub_6062F540;
  dword_60CB40B4 = 0;
  dword_60CB40B8 = (int)sub_6062F550;
  dword_60CB40BC = 0;
  dword_60CB40C0 = (int)nullsub_4954;
  dword_60CB40C4 = 0;
  stru_60CB40C8.vtable = &off_60C12614;
  stru_60CB40C8.id = CurrentStateID + 3;
  dword_60CB40D0 = (int)nullsub_4955;
  dword_60CB40D4 = 0;
  dword_60CB40D8 = (int)sub_6062F5C4;
  dword_60CB40DC = 0;
  dword_60CB40E0 = (int)nullsub_4956;
  dword_60CB40E4 = 0;
  stru_60CB40E8.vtable = &off_60C12614;
  stru_60CB40E8.id = CurrentStateID + 4;
  dword_60CB40F0 = (int)sub_6062F5E0;
  dword_60CB40F4 = 0;
  dword_60CB40F8 = (int)sub_6062F600;
  dword_60CB40FC = 0;
  dword_60CB4100 = (int)nullsub_4957;
  dword_60CB4104 = 0;
  stru_60CB4108.vtable = &off_60C12614;
  stru_60CB4108.id = CurrentStateID + 5;
  dword_60CB4110 = (int)sub_6062F63C;
  dword_60CB4114 = 0;
  dword_60CB4118 = (int)sub_6062F6B4;
  dword_60CB411C = 0;
  dword_60CB4120 = (int)nullsub_4958;
  dword_60CB4124 = 0;
  stru_60CB4128.vtable = &off_60C12614;
  stru_60CB4128.id = CurrentStateID + 6;
  dword_60CB4130 = (int)sub_6062F7A4;
  dword_60CB4134 = 0;
  dword_60CB4138 = (int)sub_6062F7B4;
  dword_60CB413C = 0;
  dword_60CB4140 = (int)nullsub_4959;
  dword_60CB4144 = 0;
  CurrentStateID += 7;
  dword_60CB414C = CurrentStateID;
  dword_60CB4148 = (int)&off_60C12614;
  dword_60CB4150 = (int)sub_6062F804;
  dword_60CB4154 = 0;
  dword_60CB4158 = (int)sub_6062F864;
  dword_60CB415C = 0;
  dword_60CB4160 = (int)nullsub_4960;
  dword_60CB4164 = 0;
  return nullsub_4960;
}
