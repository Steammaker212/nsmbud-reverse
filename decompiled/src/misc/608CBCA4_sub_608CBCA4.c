/* sub_608CBCA4
 * address: 0x608CBCA4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608CBCA4(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0

  *a1 = 0;
  a1[1] = 0;
  if ( *(_DWORD *)a2 == 1146312518
    && FIELD_U16(a2, 4) == 65279
    && (unsigned int)(FIELD_U32(a2, 8) - 0x10000) <= 0x100 )
  {
    *a1 = a2;
    v3 = (_DWORD *)sub_608D9718(a2);
    if ( v3 )
    {
      if ( *v3 == 1330007625 )
        a1[1] = v3 + 2;
    }
  }
  return a1;
}
