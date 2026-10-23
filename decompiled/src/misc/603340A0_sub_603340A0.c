/* sub_603340A0
 * address: 0x603340A0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603340A0(int a1, int a2)
{
  _BYTE *result; // r0

  result = *(_BYTE **)(a1 + 64);
  if ( result )
  {
    if ( result[6136]
      || FIELD_U32(a2, 64)
      && FIELD_U32(a2, 140) == 9
      && (result = (_BYTE *)(*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)result + 312))(result, a1),
          result == (_BYTE *)1) )
    {
      result = (_BYTE *)(FIELD_U8(a1, 110) | 2);
      FIELD_U8(a1, 110) = (_BYTE)result;
    }
  }
  return result;
}
