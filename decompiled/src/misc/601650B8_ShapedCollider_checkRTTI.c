/* ShapedCollider_checkRTTI
 * address: 0x601650B8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall ShapedCollider_checkRTTI(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C803C8 & ~(1612075216 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803C8) )
  {
    dword_60C803C4 = (int)&off_60BC3188;
    _cxa_guard_release(&dword_60C803C8);
  }
  if ( a2 == &dword_60C803C4 )
    return 1;
  if ( ((unsigned int)&dword_60C803D0 & ~(1612075308 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C803D0) )
    {
      dword_60C803CC = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C803D0);
    }
  }
  return a2 == &dword_60C803CC;
}
