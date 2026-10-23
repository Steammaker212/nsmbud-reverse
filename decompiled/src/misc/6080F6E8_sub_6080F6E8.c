/* sub_6080F6E8
 * address: 0x6080F6E8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6080F6E8(int a1)
{
  unsigned int v1; // r1
  _DWORD *result; // r0
  unsigned int v3; // r2

  v1 = FIELD_U32(a1, 120);
  if ( !v1 )
    return 0;
  result = (_DWORD *)(a1 + 172);
  v3 = 0;
  while ( *result )
  {
    ++v3;
    result += 6;
    if ( v3 >= v1 )
      return 0;
  }
  result[1] = 1065353216;
  return result;
}
