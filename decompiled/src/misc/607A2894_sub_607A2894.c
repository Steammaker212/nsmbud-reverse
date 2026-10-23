/* sub_607A2894
 * address: 0x607A2894   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607A2894(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // r0
  _DWORD *v4; // t1

  v4 = (_DWORD *)a1[2847];
  result = a1 + 2847;
  if ( v4 != a2 )
  {
    *result = a2;
    result = (_DWORD *)a1[330];
    if ( result != a2 )
    {
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 624))(a1, 2);
      sub_60777F54(dword_60CBFA90, (int)a1);
      a1[2393] = 127;
      sub_60409CC8(dword_60C9A1F0);
      JUMPOUT(0x607602AC);
    }
  }
  return result;
}
