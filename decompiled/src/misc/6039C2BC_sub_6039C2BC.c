/* sub_6039C2BC
 * address: 0x6039C2BC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039C2BC(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v2; // r12
  int v5; // r1
  unsigned int v6; // r2
  int result; // r0

  if ( ((unsigned int)dword_60C97684 & ~(1614398168 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C97684) )
  {
    dword_60C97680 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C97684);
  }
  v5 = (**a2)(a2, &dword_60C97680);
  if ( v5 )
    v5 = (int)a2;
  v6 = FIELD_U32(v5, 20);
  result = v6 >> 28;
  if ( v6 >> 28 != 2 )
    result = 0;
  if ( v6 >> 28 == 1 )
    result = v6 >> 28;
  switch ( result )
  {
    case 2:
      return sub_6039D99C(a1);
    case 1:
      return sub_6039D868(a1);
    case 0:
      return sub_6039D720(a1);
  }
  return result;
}
