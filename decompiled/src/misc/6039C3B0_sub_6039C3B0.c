/* sub_6039C3B0
 * address: 0x6039C3B0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039C3B0(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int result; // r0
  unsigned int v6; // r2

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C965B4 & ~(1614398412 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
  {
    dword_60C965B0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C965B4);
  }
  if ( v3 )
  {
    result = (**v3)(v3, &dword_60C965B0);
    if ( result )
      result = (int)v3;
  }
  else
  {
    result = 0;
  }
  v6 = FIELD_U32(a2, 140);
  if ( v6 <= 0x15 && ((1 << v6) & 0x380602) != 0 )
    FIELD_U8(result, 6524) = 1;
  return result;
}
