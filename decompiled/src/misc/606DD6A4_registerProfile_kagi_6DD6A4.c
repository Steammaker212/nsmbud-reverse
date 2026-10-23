/* registerProfile_kagi_6DD6A4
 * address: 0x606DD6A4   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_kagi_6DD6A4())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CBBAA0 = 0;
  dword_60CBBAA4 = 0;
  dword_60CBBAA8 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD7EF8;
  Profile__ctor(&stru_60CBBAAC, Actor_kagi_build, 0x329u, &v1, &stru_60B09008, 2);
  dword_60CBBAC8 = CurrentStateID + 1;
  dword_60CBBAC4 = (int)&off_60C1EB30;
  dword_60CBBACC = (int)sub_606DD2D0;
  dword_60CBBAD0 = 0;
  dword_60CBBAD4 = (int)nullsub_5270;
  dword_60CBBAD8 = 0;
  dword_60CBBADC = (int)nullsub_5271;
  dword_60CBBAE0 = 0;
  unk_60CBBAE4 = &off_60C1EB30;
  unk_60CBBAE8 = CurrentStateID + 2;
  dword_60CBBAEC = (int)sub_606DD2E4;
  dword_60CBBAF0 = 0;
  dword_60CBBAF4 = (int)sub_606DD374;
  dword_60CBBAF8 = 0;
  dword_60CBBAFC = (int)nullsub_5272;
  dword_60CBBB00 = 0;
  CurrentStateID += 3;
  dword_60CBBB08 = CurrentStateID;
  dword_60CBBB04 = (int)&off_60C1EB30;
  dword_60CBBB0C = (int)sub_606DD390;
  dword_60CBBB10 = 0;
  dword_60CBBB14 = (int)sub_606DD3D8;
  dword_60CBBB18 = 0;
  dword_60CBBB1C = (int)nullsub_5273;
  dword_60CBBB20 = 0;
  return nullsub_5273;
}
