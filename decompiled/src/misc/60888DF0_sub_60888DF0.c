/* sub_60888DF0
 * address: 0x60888DF0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60888DF0(_DWORD *a1)
{
  _DWORD *result; // r0
  int v2; // r1
  int v3; // r2

  result = (_DWORD *)*a1;
  if ( !*(_BYTE *)(result[34] + 1874) )
  {
    v2 = result[29];
    result = (_DWORD *)result[183];
    v3 = 2;
    if ( *(_BYTE *)(FIELD_U32(v2, 24) + 30) )
      v3 = 3;
    result[12] = (result[12] + 1) % v3;
  }
  return result;
}
