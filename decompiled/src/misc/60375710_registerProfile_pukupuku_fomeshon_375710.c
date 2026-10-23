/* registerProfile_pukupuku_fomeshon_375710
 * address: 0x60375710   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_pukupuku_fomeshon_375710()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C96304 = 0;
  dword_60C96308 = 0;
  dword_60C9630C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC54DB;
  Profile__ctor(&stru_60C96310, Actor_pukupuku_fomeshon_build, 0x223u, &v1, &stru_60B00518, 2);
  dword_60C9632C = ++CurrentStateID;
  dword_60C96328 = (int)&off_60BF0FD8;
  dword_60C96330 = (int)nullsub_3439;
  dword_60C96334 = 0;
  dword_60C96338 = (int)&loc_60374BAC;
  dword_60C9633C = 0;
  dword_60C96340 = (int)nullsub_3440;
  dword_60C96344 = 0;
  return &dword_60C96328;
}
