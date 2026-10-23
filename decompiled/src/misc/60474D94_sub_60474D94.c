/* sub_60474D94
 * address: 0x60474D94   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***__fastcall sub_60474D94(int a1, _DWORD *a2))(_DWORD)
{
  int v3; // r5
  int (__fastcall ***v4)(_DWORD); // r4
  char v5; // r12
  char v6; // r12
  int *v7; // r0

  v3 = FIELD_U32(a1, 16);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v4 = *(int (__fastcall ****)(_DWORD))(sub_6085768C(v3, a2[1]) + 180);
  if ( ((unsigned int)&dword_60C9D9FC & ~(1615285712 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9FC) )
  {
    if ( ((unsigned int)&dword_60C9DA04 & ~(1615285752 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA04) )
    {
      dword_60C9DA00 = 0;
      _cxa_guard_release(&dword_60C9DA04);
    }
    dword_60C9D9F8 = (int)&dword_60C9DA00;
    _cxa_guard_release(&dword_60C9D9FC);
  }
  if ( !v4 )
    return 0;
  v7 = (int *)(**v4)(v4);
  if ( !v7 )
    return 0;
  while ( v7 != &dword_60C9D9F8 )
  {
    v7 = (int *)*v7;
    if ( !v7 )
      return 0;
  }
  return v4;
}
