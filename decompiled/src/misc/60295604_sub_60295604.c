/* sub_60295604
 * address: 0x60295604   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60295604(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8FBB4 & ~(1613321756 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FBB4) )
  {
    dword_60C8FBB0 = (int)&off_60BE031C;
    _cxa_guard_release(&dword_60C8FBB4);
  }
  if ( a2 != &dword_60C8FBB0 )
    JUMPOUT(0x60294710);
  return 1;
}
