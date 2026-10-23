/* sub_601C6F34
 * address: 0x601C6F34   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601C6F34(_DWORD *a1)
{
  _DWORD *v1; // r1
  int v2; // r2
  bool v3; // zf

  v1 = a1 + 289;
  v2 = a1[289];
  v3 = v2 == -1;
  if ( v2 != -1 )
    v3 = a1[290] == -1;
  if ( v3 )
    return a1 + 258;
  if ( a1[291] == -1 )
    return a1 + 258;
  return v1;
}
