/* sub_606E80A8
 * address: 0x606E80A8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606E80A8()
{
  dword_60CBBFAC = 0;
  dword_60CBBFB0 = 0;
  dword_60CBBFB4 = 0;
  dword_60CBBFBC = ++CurrentStateID;
  dword_60CBBFC0 = 624;
  dword_60CBBFC4 = 1;
  dword_60CBBFC8 = 628;
  dword_60CBBFCC = 1;
  dword_60CBBFD0 = 632;
  dword_60CBBFD4 = 1;
  dword_60CBBFB8 = (int)&off_60C1FB54;
  dword_60CBBFD8 = (int)&NullState;
  return &dword_60CBBFB8;
}
