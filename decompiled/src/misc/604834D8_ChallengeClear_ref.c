/* ChallengeClear_ref
 * address: 0x604834D8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *ChallengeClear_ref()
{
  dword_60C9EFA0 = CurrentStateID + 1;
  dword_60C9EF9C = (int)&off_60BFD558;
  dword_60C9EFA4 = (int)sub_60482754;
  dword_60C9EFA8 = 0;
  dword_60C9EFAC = (int)nullsub_3760;
  dword_60C9EFB0 = 0;
  dword_60C9EFB4 = (int)nullsub_3761;
  dword_60C9EFB8 = 0;
  CurrentStateID += 2;
  dword_60C9EFC0 = CurrentStateID;
  dword_60C9EFBC = (int)&off_60BFD558;
  dword_60C9EFC4 = (int)sub_604827D4;
  dword_60C9EFC8 = 0;
  dword_60C9EFCC = (int)sub_604827E4;
  dword_60C9EFD0 = 0;
  dword_60C9EFD4 = (int)nullsub_3762;
  dword_60C9EFD8 = 0;
  dword_60C9EFEC = (int)&sead__SafeStringBase__vtable;
  dword_60C9EFF0 = (int)"ChallengeClear";
  dword_60C9EFF4 = (int)&sead__SafeStringBase__vtable;
  dword_60C9EFF8 = (int)"bflyt";
  return &dword_60C9EFEC;
}
