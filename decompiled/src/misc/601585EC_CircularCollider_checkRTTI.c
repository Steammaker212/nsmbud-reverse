/* CircularCollider_checkRTTI
 * address: 0x601585EC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall CircularCollider_checkRTTI(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8822C & ~(1612023300 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8822C) )
  {
    dword_60C88228 = (int)&off_60BC3188;
    _cxa_guard_release(&dword_60C8822C);
  }
  if ( a2 == &dword_60C88228 )
    return 1;
  if ( ((unsigned int)&dword_60C803D0 & ~(1612023392 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C803D0) )
    {
      dword_60C803CC = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C803D0);
    }
  }
  return a2 == &dword_60C803CC;
}
