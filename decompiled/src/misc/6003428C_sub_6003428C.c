/* sub_6003428C
 * address: 0x6003428C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6003428C(int a1, int a2)
{
  int v2; // r4
  _BYTE *result; // r0
  bool v5; // zf

  result = *(_BYTE **)(a2 + 64);
  v5 = result == 0;
  if ( result )
  {
    v2 = FIELD_U32(a1, 64);
    v5 = v2 == 0;
  }
  if ( !v5 && result[533] == 1 )
  {
    FIELD_U8(a1, 110) |= 2u;
    (*(void (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)result + 1168))(result, v2, 13);
    return (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 224))(v2);
  }
  return result;
}
