/* sub_60665C48
 * address: 0x60665C48   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60665C48(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB6BD0 & ~(1617321056 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6BD0) )
  {
    dword_60CB6BCC = (int)&off_60C14ED0;
    _cxa_guard_release(&dword_60CB6BD0);
  }
  if ( a2 == &dword_60CB6BCC )
    return 1;
  if ( ((unsigned int)&dword_60CB6B7C & ~(1617321148 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB6B7C) )
    {
      dword_60CB6B78 = (int)&off_60BCFCD8;
      _cxa_guard_release(&dword_60CB6B7C);
    }
  }
  return a2 == &dword_60CB6B78 || sub_60027FB0(a2);
}
