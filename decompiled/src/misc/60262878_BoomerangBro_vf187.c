/* BoomerangBro_vf187
 * address: 0x60262878   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall BoomerangBro_vf187(int a1)
{
  _DWORD *result; // r0
  int v3; // t1

  result = (_DWORD *)sub_602628B4();
  if ( result )
  {
    FIELD_U32(a1, 6608) = result[2];
    v3 = result[1645];
    result += 1645;
    if ( !v3 )
      *result = FIELD_U32(a1, 8);
  }
  return result;
}
