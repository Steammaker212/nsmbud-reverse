/* sub_608D6D7C
 * address: 0x608D6D7C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608D6D7C(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = 0;
  a2[94] = 0;
  if ( a2 )
  {
    (*(void (__fastcall **)(_DWORD *))*a2)(a2);
    return sub_608C66F8((_DWORD *)(a1 + 8), a2);
  }
  return result;
}
