/* DV_TOTTEN_01_ref
 * address: 0x6074E3BC   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *DV_TOTTEN_01_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD9D32;
  Profile__ctor(&stru_60CBE994, Actor_toten_StaffRoll_build, 0x350u, &v1, 0, 0);
  dword_60CBE9B0 = CurrentStateID + 1;
  dword_60CBE9AC = (int)&off_60C23B40;
  dword_60CBE9B4 = (int)sub_6074D610;
  dword_60CBE9B8 = 0;
  dword_60CBE9BC = (int)sub_6074D664;
  dword_60CBE9C0 = 0;
  dword_60CBE9C4 = (int)sub_6074D76C;
  dword_60CBE9C8 = 0;
  stru_60CBE9CC.vtable = &off_60C23B40;
  stru_60CBE9CC.id = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60CBE9F0 = CurrentStateID;
  dword_60CBE9EC = (int)&off_60C23B40;
  dword_60CBE9D4 = (int)sub_6074D778;
  dword_60CBE9D8 = 0;
  dword_60CBE9F4 = (int)sub_6074D8A0;
  dword_60CBE9F8 = 0;
  dword_60CBE9DC = (int)sub_6074D820;
  dword_60CBE9E0 = 0;
  dword_60CBE9FC = (int)&loc_6074D8B8;
  dword_60CBEA00 = 0;
  dword_60CBE9E4 = (int)nullsub_5449;
  dword_60CBE9E8 = 0;
  dword_60CBEA04 = (int)nullsub_5450;
  dword_60CBEA08 = 0;
  dword_60CBEA28 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEA2C = (int)"shadowkun";
  dword_60CBEA30 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEA34 = (int)"shadowkun";
  dword_60CBEA38 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEA3C = (int)"DV_TOTTEN_01";
  return &dword_60CBEA20;
}
