/* SolidOnTopColliderWrapper_checkRTTI
 * address: 0x600A463C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SolidOnTopColliderWrapper_checkRTTI(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C82A70 & ~(1611286100 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C82A70) )
  {
    dword_60C82A6C = (int)&off_60BC3210;
    _cxa_guard_release(&dword_60C82A70);
  }
  v4 = 1;
  if ( a2 != &dword_60C82A6C )
  {
    if ( ((unsigned int)&dword_60C803E8 & ~(1611286196 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803E8) )
    {
      dword_60C803E4 = (int)&off_60BC3188;
      _cxa_guard_release(&dword_60C803E8);
    }
    if ( a2 != &dword_60C803E4 )
    {
      if ( ((unsigned int)&dword_60C803D0 & ~(1611286288 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
      {
        dword_60C803CC = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C803D0);
      }
      return a2 == &dword_60C803CC;
    }
  }
  return v4;
}
