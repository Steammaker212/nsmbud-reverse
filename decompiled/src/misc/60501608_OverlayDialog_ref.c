/* OverlayDialog_ref
 * address: 0x60501608   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *OverlayDialog_ref()
{
  dword_60CA75D8 = 0;
  dword_60CA75DC = 0;
  dword_60CA75E0 = 0;
  dword_60CA75B0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA75B4 = (int)"OverlayDialog";
  dword_60CA75B8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA75BC = (int)"bflyt";
  dword_60CA75E4[0] = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60CA75E8 = "OverlayDialog_OverlayDialog_01";
  *(_DWORD *)&algn_60CA75E8[4] = &sead__SafeStringBase__vtable;
  dword_60CA75F0 = (int)"OverlayDialog_OverlayDialog_00";
  sub_60000288();
  dword_60CA74B8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA74BC = (int)"In";
  dword_60CA74C0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA74C4 = (int)"Out";
  dword_60CA74CC = CurrentStateID + 1;
  dword_60CA74C8 = (int)&off_60BFF03C;
  dword_60CA74D0 = (int)nullsub_4183;
  dword_60CA74D4 = 0;
  dword_60CA74D8 = (int)sub_605001B0;
  dword_60CA74DC = 0;
  dword_60CA74E0 = (int)sub_605001C4;
  dword_60CA74E4 = 0;
  stru_60CA74E8.vtable = &off_60BFF03C;
  stru_60CA74E8.id = CurrentStateID + 2;
  dword_60CA74F0 = (int)sub_605001F4;
  dword_60CA74F4 = 0;
  dword_60CA74F8 = (int)sub_60500344;
  dword_60CA74FC = 0;
  dword_60CA7500 = (int)nullsub_4184;
  dword_60CA7504 = 0;
  stru_60CA7508.vtable = &off_60BFF03C;
  stru_60CA7508.id = CurrentStateID + 3;
  dword_60CA7510 = (int)sub_60500380;
  dword_60CA7514 = 0;
  dword_60CA7518 = (int)sub_6050039C;
  dword_60CA751C = 0;
  dword_60CA7520 = (int)nullsub_4185;
  dword_60CA7524 = 0;
  stru_60CA7528.vtable = &off_60BFF03C;
  stru_60CA7528.id = CurrentStateID + 4;
  dword_60CA7530 = (int)nullsub_4186;
  dword_60CA7534 = 0;
  dword_60CA7538 = (int)sub_60500550;
  dword_60CA753C = 0;
  dword_60CA7540 = (int)nullsub_4187;
  dword_60CA7544 = 0;
  stru_60CA7548.vtable = &off_60BFF03C;
  stru_60CA7548.id = CurrentStateID + 5;
  CurrentStateID += 6;
  dword_60CA756C = CurrentStateID;
  dword_60CA7550 = (int)sub_605005B4;
  dword_60CA7568 = (int)&off_60BFF03C;
  dword_60CA7554 = 0;
  dword_60CA7570 = (int)sub_60500658;
  dword_60CA7558 = (int)sub_605005E8;
  dword_60CA7574 = 0;
  dword_60CA755C = 0;
  dword_60CA7578 = (int)nullsub_4188;
  dword_60CA7560 = (int)sub_6050060C;
  dword_60CA7564 = 0;
  dword_60CA757C = 0;
  dword_60CA7580 = (int)nullsub_4189;
  dword_60CA7584 = 0;
  return &dword_60CA7568;
}
