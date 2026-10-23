/* sub_608FACF0
 * address: 0x608FACF0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608FACF0()
{
  unk_60CCEE84 = off_60C5CA70;
  unk_60CCEE88 = 0;
  dword_60CCEE8C = 0;
  sub_609122D0(&unk_60CCEE98);
  sub_60000288();
  dword_60CCEEA4 = 0;
  dword_60CCEEA8 = 0;
  dword_60CCEEAC = 0;
  sub_608DEB0C(&dword_60CCEEA4, 4, (int)algn_60CCEEB0);
  dword_60CCEEC0 = 0;
  dword_60CCEEC4 = 0;
  dword_60CCEEC8 = 0;
  sub_608DEB0C(&dword_60CCEEC0, 4, (int)&unk_60CCEECC);
  sead__CriticalSection__ctor((sead_IDisposer *)&unk_60CCEEDC);
  sub_60000288();
  dword_60CCEF00 = 0;
  dword_60CCEF08 = 0;
  dword_60CCEF0C = 0;
  return &dword_60CCEF08;
}
