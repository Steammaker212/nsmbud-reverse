/* sub_605424F8
 * address: 0x605424F8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605424F8()
{
  dword_60CABDEC = ++CurrentStateID;
  dword_60CABDE8 = (int)&off_60C0059C;
  dword_60CABDF0 = (int)nullsub_4447;
  dword_60CABDF4 = 0;
  dword_60CABDF8 = (int)nullsub_4448;
  dword_60CABDFC = 0;
  dword_60CABE00 = (int)nullsub_4449;
  dword_60CABE04 = 0;
  dword_60CABE08 = (int)&sead__SafeStringBase__vtable;
  dword_60CABE0C = (int)"In";
  dword_60CABE10 = (int)&sead__SafeStringBase__vtable;
  dword_60CABE14 = (int)"Out";
  return &dword_60CABE10;
}
