/* CourseClear_ref
 * address: 0x604BC840   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *CourseClear_ref()
{
  dword_60CA2730 = CurrentStateID + 1;
  dword_60CA272C = (int)&off_60BFE230;
  dword_60CA2734 = (int)sub_604BBD14;
  dword_60CA2738 = 0;
  dword_60CA273C = (int)nullsub_3940;
  dword_60CA2740 = 0;
  dword_60CA2744 = (int)nullsub_3941;
  dword_60CA2748 = 0;
  CurrentStateID += 2;
  dword_60CA2750 = CurrentStateID;
  dword_60CA274C = (int)&off_60BFE230;
  dword_60CA2754 = (int)sub_604BBD94;
  dword_60CA2758 = 0;
  dword_60CA275C = (int)sub_604BBDE8;
  dword_60CA2760 = 0;
  dword_60CA2764 = (int)nullsub_3942;
  dword_60CA2768 = 0;
  dword_60CA2774 = (int)&sead__SafeStringBase__vtable;
  dword_60CA2778 = (int)"CourseClear";
  dword_60CA277C = (int)&sead__SafeStringBase__vtable;
  dword_60CA2780 = (int)"bflyt";
  return &dword_60CA2774;
}
