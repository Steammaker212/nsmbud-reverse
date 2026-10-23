/* registerProfile_final_bomu_064598
 * address: 0x60064598   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_final_bomu_064598())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C81094 = 0;
  dword_60C81098 = 0;
  dword_60C8109C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABB977;
  Profile__ctor(&stru_60C810A0, Actor_final_bomu_build, 0x2D8u, &v1, 0, 0);
  dword_60C810BC = CurrentStateID + 1;
  dword_60C810B8 = (int)&off_60BC66D4;
  dword_60C810C0 = (int)sub_60063740;
  dword_60C810C4 = 0;
  dword_60C810C8 = (int)nullsub_2565;
  dword_60C810CC = 0;
  dword_60C810D0 = (int)nullsub_2566;
  dword_60C810D4 = 0;
  CurrentStateID += 2;
  dword_60C810DC = CurrentStateID;
  dword_60C810D8 = (int)&off_60BC66D4;
  dword_60C810E0 = (int)sub_6006375C;
  dword_60C810E4 = 0;
  dword_60C810E8 = (int)sub_60063774;
  dword_60C810EC = 0;
  dword_60C810F0 = (int)nullsub_2567;
  dword_60C810F4 = 0;
  return nullsub_2567;
}
