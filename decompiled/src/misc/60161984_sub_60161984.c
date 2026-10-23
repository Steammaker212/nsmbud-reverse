/* sub_60161984
 * address: 0x60161984   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60161984(_DWORD *result, int a2, int a3)
{
  int v3; // r2

  if ( !a3 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 12))(result);
  if ( a2 )
  {
    FIELD_U32(a2, 4) = FIELD_U32(a3, 4);
    FIELD_U32(a2, 8) = a3;
    FIELD_U32(a3, 4) = a2;
    v3 = FIELD_U32(a2, 4);
    if ( v3 )
      FIELD_U32(v3, 8) = a2;
    else
      result[2] = a2;
  }
  return result;
}
