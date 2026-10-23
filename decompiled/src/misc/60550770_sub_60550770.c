/* sub_60550770
 * address: 0x60550770   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60550770()
{
  dword_60CACFAC = 0;
  dword_60CACFB0 = 0;
  dword_60CACFB4 = 0;
  dword_60CACFBC = ++CurrentStateID;
  dword_60CACFB8 = (int)&off_60C00B70;
  dword_60CACFC0 = (int)nullsub_4542;
  dword_60CACFC4 = 0;
  dword_60CACFC8 = (int)nullsub_4543;
  dword_60CACFCC = 0;
  dword_60CACFD0 = (int)nullsub_4544;
  dword_60CACFD4 = 0;
  return &dword_60CACFB8;
}
