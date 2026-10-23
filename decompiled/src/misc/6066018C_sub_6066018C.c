/* sub_6066018C
 * address: 0x6066018C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6066018C(int a1)
{
  _DWORD *result; // r0
  int v3; // t1

  if ( --FIELD_U8(a1, 7057) == 0 )
    return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB6988);
  v3 = FIELD_U32(a1, 7044);
  result = (_DWORD *)(a1 + 7044);
  *result = v3 + 0x8000000;
  return result;
}
