/* sub_608CB5C8
 * address: 0x608CB5C8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608CB5C8(int a1, int a2)
{
  _DWORD *result; // r0

  FIELD_U32(a1, 4) = a2;
  result = *(_DWORD **)(a1 + 196);
  if ( result )
  {
    if ( a2 == 1 )
    {
      sub_608C84C8(result);
    }
    else if ( !a2 )
    {
      result[42] = FIELD_U32(a1, 132);
      *(_DWORD *)(FIELD_U32(a1, 196) + 172) = FIELD_U32(a1, 128);
      qmemcpy(*(void **)(a1 + 196), (const void *)(a1 + 136), 0x20u);
      *(_DWORD *)(FIELD_U32(a1, 196) + 180) = FIELD_U32(a1, 168);
    }
    return (_DWORD *)sub_608C8884(FIELD_U32(a1, 196), a2);
  }
  return result;
}
