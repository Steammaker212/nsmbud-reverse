/* sub_608F4FB4
 * address: 0x608F4FB4   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608F4FB4(int *a1, _BYTE *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CCECE8 & ~(1620004816 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CCECE8) )
  {
    dword_60CCEC58 = -1090519040;
    dword_60CCEC5C = 1056964608;
    dword_60CCEC60 = 0;
    dword_60CCEC64 = 0;
    dword_60CCEC68 = 1065353216;
    dword_60CCEC78 = 0;
    dword_60CCEC74 = 0;
    dword_60CCEC70 = 0;
    dword_60CCEC6C = 0;
    dword_60CCEC7C = 1056964608;
    dword_60CCEC80 = 1056964608;
    dword_60CCEC84 = 0;
    dword_60CCEC88 = 1065353216;
    dword_60CCEC8C = 1065353216;
    dword_60CCEC9C = 0;
    dword_60CCEC98 = 0;
    dword_60CCEC94 = 0;
    dword_60CCEC90 = 0;
    dword_60CCECA0 = -1090519040;
    dword_60CCECA4 = -1090519040;
    dword_60CCECA8 = 0;
    dword_60CCECAC = 0;
    dword_60CCECB0 = 0;
    dword_60CCECB4 = 1065353216;
    dword_60CCECB8 = 0;
    dword_60CCECBC = 0;
    unk_60CCECC0 = 0;
    unk_60CCECC4 = 1056964608;
    unk_60CCECC8 = -1090519040;
    dword_60CCECCC = 0;
    dword_60CCECD0 = 1065353216;
    dword_60CCECD4 = 0;
    dword_60CCECD8 = 1065353216;
    dword_60CCECDC = 0;
    dword_60CCECE0 = 0;
    dword_60CCECE4 = 0;
    _cxa_guard_release(dword_60CCECE8);
  }
  if ( a1 )
    qmemcpy(a1, &dword_60CCEC58, 0x90u);
  if ( a2 )
  {
    *a2 = 0;
    a2[8] = 2;
    a2[11] = 0;
    a2[10] = 3;
    a2[9] = 0;
    a2[4] = 1;
    a2[7] = 0;
    a2[6] = 1;
    a2[5] = 0;
    a2[3] = 0;
    a2[2] = 2;
    a2[1] = 0;
  }
}
