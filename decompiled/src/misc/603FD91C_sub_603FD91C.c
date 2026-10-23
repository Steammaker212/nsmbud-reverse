/* sub_603FD91C
 * address: 0x603FD91C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603FD91C(_DWORD *a1, unsigned int a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r2
  _DWORD *v4; // t1

  v4 = (_DWORD *)*a1;
  v2 = &a1[24 * a2];
  v3 = v4;
  if ( v4 )
    v3 = v2 + 5;
  if ( a2 > 0x42 )
    return 0;
  return v3;
}
