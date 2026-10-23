/* registerProfile_kinokoLift_parent_6335EC
 * address: 0x606335EC   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_kinokoLift_parent_6335EC())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD4246;
  Profile__ctor(&stru_60CB4334, Actor_kinokoLift_parent_build, 0x31u, &v1, &stru_60B071D8, 0);
  dword_60CB4350 = CurrentStateID + 1;
  dword_60CB434C = (int)&off_60C1298C;
  dword_60CB4354 = (int)nullsub_4967;
  dword_60CB4358 = 0;
  dword_60CB435C = (int)sub_60633180;
  dword_60CB4360 = 0;
  dword_60CB4364 = (int)nullsub_4968;
  dword_60CB4368 = 0;
  unk_60CB436C = &off_60C1298C;
  unk_60CB4370 = CurrentStateID + 2;
  dword_60CB4374 = (int)nullsub_4969;
  dword_60CB4378 = 0;
  dword_60CB437C = (int)sub_606331A0;
  dword_60CB4380 = 0;
  dword_60CB4384 = (int)nullsub_4970;
  dword_60CB4388 = 0;
  CurrentStateID += 3;
  dword_60CB4390 = CurrentStateID;
  dword_60CB438C = (int)&off_60C1298C;
  dword_60CB4394 = (int)nullsub_4971;
  dword_60CB4398 = 0;
  dword_60CB439C = (int)nullsub_4972;
  dword_60CB43A0 = 0;
  dword_60CB43A4 = (int)nullsub_4973;
  dword_60CB43A8 = 0;
  return nullsub_4973;
}
