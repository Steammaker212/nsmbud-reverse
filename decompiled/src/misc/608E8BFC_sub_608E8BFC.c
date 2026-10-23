/* sub_608E8BFC
 * address: 0x608E8BFC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608E8BFC(_DWORD *a1)
{
  int v2; // r0

  *a1 = off_60C5C248;
  v2 = a1[20];
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    a1[20] = 0;
  }
  return sub_608E60A4(a1);
}
