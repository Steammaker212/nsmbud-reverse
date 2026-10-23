/* sub_608EDB14
 * address: 0x608EDB14   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608EDB14(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0

  *a1 = off_60C5C5E0;
  v2 = a1[17];
  if ( v2 )
  {
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v2 + 36))(v2, 0);
    v3 = a1[17];
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  return sub_608ED48C(a1);
}
