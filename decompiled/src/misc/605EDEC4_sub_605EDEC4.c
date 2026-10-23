/* sub_605EDEC4
 * address: 0x605EDEC4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605EDEC4(int a1)
{
  _DWORD *result; // r0
  float v3; // s0

  sub_605D828C(a1);
  if ( FIELD_U32(a1, 8036) )
  {
    result = (_DWORD *)(a1 + 8060);
    v3 = FIELD_F32(a1, 8060) - FIELD_F32(a1, 8064);
    FIELD_F32(a1, 8060) = v3;
    if ( v3 >= 0.0 )
      return result;
  }
  else
  {
    result = (_DWORD *)(a1 + 8060);
  }
  *result = 0;
  return result;
}
