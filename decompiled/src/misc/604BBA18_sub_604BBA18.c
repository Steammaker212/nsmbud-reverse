/* sub_604BBA18
 * address: 0x604BBA18   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604BBA18()
{
  dword_60CA2664 = 0;
  dword_60CA2668 = 0;
  dword_60CA266C = 0;
  dword_60CA267C = CurrentStateID + 1;
  dword_60CA2678 = (int)&off_60BFE1A0;
  dword_60CA2680 = (int)nullsub_3936;
  dword_60CA2684 = 0;
  dword_60CA2688 = (int)nullsub_3937;
  dword_60CA268C = 0;
  dword_60CA2690 = (int)nullsub_3938;
  dword_60CA2694 = 0;
  CurrentStateID += 2;
  dword_60CA269C = CurrentStateID;
  dword_60CA2698 = (int)&off_60BFE1A0;
  dword_60CA26A0 = (int)sub_604BB2D0;
  dword_60CA26A4 = 0;
  dword_60CA26A8 = (int)sub_604BB484;
  dword_60CA26AC = 0;
  dword_60CA26B0 = (int)nullsub_3939;
  dword_60CA26B4 = 0;
  dword_60CA26B8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA26BC = (int)"Count";
  dword_60CA26C0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA26C4 = (int)"Start";
  return &dword_60CA26C0;
}
