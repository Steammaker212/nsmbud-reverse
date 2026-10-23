/* sub_60335578
 * address: 0x60335578   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60335578(int a1, int a2)
{
  int v2; // r5
  _BYTE *result; // r0
  bool v5; // zf

  result = *(_BYTE **)(a2 + 64);
  v5 = result == 0;
  if ( result )
  {
    v2 = FIELD_U32(a1, 64);
    v5 = v2 == 0;
  }
  if ( !v5 )
  {
    if ( result[533] == 1 )
    {
      FIELD_U8(a1, 110) |= 2u;
      (*(void (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)result + 1168))(result, v2, 13);
      return (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 224))(v2);
    }
    else
    {
      result = (_BYTE *)(*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 196))(v2, a1);
      if ( result == (_BYTE *)1 )
      {
        result = (_BYTE *)(FIELD_U8(a1, 110) | 2);
        FIELD_U8(a1, 110) = (_BYTE)result;
      }
    }
  }
  return result;
}
