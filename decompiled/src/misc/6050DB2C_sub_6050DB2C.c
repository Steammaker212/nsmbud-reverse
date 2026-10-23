/* sub_6050DB2C
 * address: 0x6050DB2C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6050DB2C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CA806C & ~(1615911748 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA806C) )
  {
    dword_60CA8068 = (int)&off_60BFF278;
    _cxa_guard_release(&dword_60CA806C);
  }
  if ( a2 == &dword_60CA8068 )
    return 1;
  if ( ((unsigned int)&dword_60CA7A7C & ~(1615911840 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CA7A7C) )
    {
      dword_60CA7A78 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CA7A7C);
    }
  }
  return a2 == &dword_60CA7A78;
}
