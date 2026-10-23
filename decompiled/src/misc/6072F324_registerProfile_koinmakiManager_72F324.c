/* registerProfile_koinmakiManager_72F324
 * address: 0x6072F324   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_koinmakiManager_72F324()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CBDA7C = 0;
  dword_60CBDA80 = 0;
  dword_60CBDA84 = 0;
  dword_60CBDA8C = CurrentStateID + 1;
  dword_60CBDA88 = (int)&off_60C2243C;
  dword_60CBDA90 = (int)nullsub_5372;
  dword_60CBDA94 = 0;
  dword_60CBDA98 = (int)sub_6072E0A4;
  dword_60CBDA9C = 0;
  dword_60CBDAA0 = (int)sub_6072E2AC;
  dword_60CBDAA4 = 0;
  dword_60CBDAAC = CurrentStateID + 2;
  dword_60CBDAA8 = (int)&off_60C2243C;
  dword_60CBDAB0 = (int)nullsub_5373;
  dword_60CBDAB4 = 0;
  dword_60CBDAB8 = (int)nullsub_5374;
  dword_60CBDABC = 0;
  dword_60CBDAC0 = (int)nullsub_5375;
  dword_60CBDAC4 = 0;
  CurrentStateID += 3;
  dword_60CBDACC = CurrentStateID;
  dword_60CBDAC8 = (int)&off_60C2243C;
  dword_60CBDAD0 = (int)sub_6072E2F8;
  dword_60CBDAD4 = 0;
  dword_60CBDAD8 = (int)SE_MG_SH_ITEM_NG_ref;
  dword_60CBDADC = 0;
  dword_60CBDAE0 = (int)nullsub_5376;
  dword_60CBDAE4 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD95FF;
  Profile__ctor(&stru_60CBDAE8, Actor_koinmakiManager_build, 0x1Cu, &v1, &stru_60B0A274, 0);
  *result = &off_60C22368;
  return result;
}
