/* registerProfile_Lift_RDash_642774
 * address: 0x60642774   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Lift_RDash_642774()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD50F2;
  Profile__ctor(&stru_60CB5968, Actor_Lift_RDash_build, 0xD9u, v1, &stru_60B0738C, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD50FF;
  Profile__ctor(&stru_60CB5980, Actor_Lift_RDash_build, 0xDAu, v1, &stru_60B073B0, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD5112;
  Profile__ctor(&stru_60CB5998, Actor_Lift_RDash_build, 0xDBu, v1, &stru_60B073D4, 2);
  dword_60CB59B4 = CurrentStateID + 1;
  dword_60CB59B0 = (int)&off_60C132B4;
  dword_60CB59B8 = (int)sub_606412EC;
  dword_60CB59BC = 0;
  dword_60CB59C0 = (int)sub_60641320;
  dword_60CB59C4 = 0;
  dword_60CB59C8 = (int)sub_60641398;
  dword_60CB59CC = 0;
  dword_60CB59D0 = (int)&off_60C132B4;
  *(_DWORD *)algn_60CB59D4 = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60CB59F4 = CurrentStateID;
  dword_60CB59D8 = (int)nullsub_4995;
  dword_60CB59F0 = (int)&off_60C132B4;
  dword_60CB59DC = 0;
  dword_60CB59F8 = (int)sub_606414C8;
  dword_60CB59E0 = (int)sub_606413F4;
  dword_60CB59FC = 0;
  dword_60CB59E4 = 0;
  dword_60CB5A00 = (int)sub_606415A0;
  dword_60CB59E8 = (int)nullsub_4996;
  dword_60CB59EC = 0;
  dword_60CB5A04 = 0;
  dword_60CB5A08 = (int)nullsub_4997;
  dword_60CB5A0C = 0;
  return &dword_60CB59F0;
}
