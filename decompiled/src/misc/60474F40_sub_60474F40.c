/* sub_60474F40
 * address: 0x60474F40   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_60474F40(int a1, _DWORD *a2))(_DWORD)
{
  int (__fastcall ***v2)(_DWORD); // r4
  char v3; // r12
  char v4; // r12
  int *v5; // r0

  v2 = sub_60474D94(a1, a2);
  if ( ((unsigned int)&dword_60C9D9FC & ~(1615286108 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9FC) )
  {
    if ( ((unsigned int)&dword_60C9DA04 & ~(1615286148 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA04) )
    {
      dword_60C9DA00 = 0;
      _cxa_guard_release(&dword_60C9DA04);
    }
    dword_60C9D9F8 = (int)&dword_60C9DA00;
    _cxa_guard_release(&dword_60C9D9FC);
  }
  if ( !v2 )
    return 0;
  v5 = (int *)(**v2)(v2);
  if ( !v5 )
    return 0;
  while ( v5 != &dword_60C9D9F8 )
  {
    v5 = (int *)*v5;
    if ( !v5 )
      return 0;
  }
  return v2;
}
