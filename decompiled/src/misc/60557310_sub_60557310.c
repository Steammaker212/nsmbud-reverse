/* sub_60557310
 * address: 0x60557310   size: 1032   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60557310()
{
  dword_60CAD448 = (int)&sead__SafeStringBase__vtable;
  dword_60CAD44C = (int)"In";
  dword_60CAD450 = (int)&sead__SafeStringBase__vtable;
  dword_60CAD454 = (int)"InBtn";
  dword_60CAD458 = (int)&sead__SafeStringBase__vtable;
  dword_60CAD45C = (int)"OutBtn";
  dword_60CAD460 = (int)&sead__SafeStringBase__vtable;
  dword_60CAD464 = (int)"InOutReturn";
  dword_60CAD46C = CurrentStateID + 1;
  dword_60CAD468 = (int)&off_60C00C70;
  dword_60CAD470 = (int)nullsub_4556;
  dword_60CAD474 = 0;
  dword_60CAD478 = (int)sub_60555684;
  dword_60CAD47C = 0;
  dword_60CAD480 = (int)sub_60555698;
  dword_60CAD484 = 0;
  dword_60CAD48C = CurrentStateID + 2;
  dword_60CAD488 = (int)&off_60C00C70;
  dword_60CAD490 = (int)sub_605556BC;
  dword_60CAD494 = 0;
  dword_60CAD498 = (int)sub_60555718;
  dword_60CAD49C = 0;
  dword_60CAD4A0 = (int)sub_60555748;
  dword_60CAD4A4 = 0;
  dword_60CAD4AC = CurrentStateID + 3;
  dword_60CAD4A8 = (int)&off_60C00C70;
  dword_60CAD4B0 = (int)sub_6055576C;
  dword_60CAD4B4 = 0;
  dword_60CAD4B8 = (int)sub_60555A90;
  dword_60CAD4BC = 0;
  dword_60CAD4C0 = (int)nullsub_4557;
  dword_60CAD4C4 = 0;
  dword_60CAD4CC = CurrentStateID + 4;
  dword_60CAD4C8 = (int)&off_60C00C70;
  dword_60CAD4D0 = (int)sub_60555D90;
  dword_60CAD4D4 = 0;
  dword_60CAD4D8 = (int)sub_60555D9C;
  dword_60CAD4DC = 0;
  dword_60CAD4E0 = (int)nullsub_4558;
  dword_60CAD4E4 = 0;
  dword_60CAD4EC = CurrentStateID + 5;
  dword_60CAD4E8 = (int)&off_60C00C70;
  dword_60CAD4F0 = (int)nullsub_4559;
  dword_60CAD4F4 = 0;
  dword_60CAD4F8 = (int)sub_60555DB8;
  dword_60CAD4FC = 0;
  dword_60CAD500 = (int)nullsub_4560;
  dword_60CAD504 = 0;
  dword_60CAD50C = CurrentStateID + 6;
  dword_60CAD508 = (int)&off_60C00C70;
  dword_60CAD510 = (int)sub_60555DD8;
  dword_60CAD514 = 0;
  dword_60CAD518 = (int)sub_60555E90;
  dword_60CAD51C = 0;
  dword_60CAD520 = (int)nullsub_4561;
  dword_60CAD524 = 0;
  dword_60CAD52C = CurrentStateID + 7;
  dword_60CAD528 = (int)&off_60C00C70;
  dword_60CAD530 = (int)sub_6055601C;
  dword_60CAD534 = 0;
  dword_60CAD538 = (int)sub_60556084;
  dword_60CAD53C = 0;
  dword_60CAD540 = (int)sub_605560C0;
  dword_60CAD544 = 0;
  dword_60CAD54C = CurrentStateID + 8;
  dword_60CAD548 = (int)&off_60C00C70;
  dword_60CAD550 = (int)sub_605560F4;
  dword_60CAD554 = 0;
  dword_60CAD558 = (int)sub_60556288;
  dword_60CAD55C = 0;
  dword_60CAD560 = (int)nullsub_4562;
  dword_60CAD564 = 0;
  dword_60CAD56C = CurrentStateID + 9;
  dword_60CAD568 = (int)&off_60C00C70;
  dword_60CAD570 = (int)sub_605562C8;
  dword_60CAD574 = 0;
  dword_60CAD578 = (int)SE_SYS_BACK_ref_55631C;
  dword_60CAD57C = 0;
  dword_60CAD580 = (int)nullsub_4563;
  dword_60CAD584 = 0;
  dword_60CAD58C = CurrentStateID + 10;
  dword_60CAD588 = (int)&off_60C00C70;
  dword_60CAD590 = (int)sub_60556458;
  dword_60CAD594 = 0;
  dword_60CAD598 = (int)sub_605564B8;
  dword_60CAD59C = 0;
  dword_60CAD5A0 = (int)sub_60556504;
  dword_60CAD5A4 = 0;
  dword_60CAD5AC = CurrentStateID + 11;
  dword_60CAD5A8 = (int)&off_60C00C70;
  dword_60CAD5B0 = (int)nullsub_4564;
  dword_60CAD5B4 = 0;
  dword_60CAD5B8 = (int)sub_6055665C;
  dword_60CAD5BC = 0;
  dword_60CAD5C0 = (int)nullsub_4565;
  dword_60CAD5C4 = 0;
  dword_60CAD5CC = CurrentStateID + 12;
  dword_60CAD5C8 = (int)&off_60C00C70;
  dword_60CAD5D0 = (int)sub_605566A4;
  dword_60CAD5D4 = 0;
  dword_60CAD5D8 = (int)sub_605567A0;
  dword_60CAD5DC = 0;
  dword_60CAD5E0 = (int)nullsub_4566;
  dword_60CAD5E4 = 0;
  CurrentStateID += 13;
  dword_60CAD5EC = CurrentStateID;
  dword_60CAD5E8 = (int)&off_60C00C70;
  dword_60CAD5F0 = (int)sub_605568B8;
  dword_60CAD5F4 = 0;
  dword_60CAD5F8 = (int)nullsub_4567;
  dword_60CAD5FC = 0;
  dword_60CAD600 = (int)nullsub_4568;
  dword_60CAD604 = 0;
  return 0;
}
