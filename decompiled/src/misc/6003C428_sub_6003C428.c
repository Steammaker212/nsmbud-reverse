/* sub_6003C428
 * address: 0x6003C428   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6003C428(int a1)
{
  int v1; // r0
  _DWORD *result; // r0
  int v3; // t1

  v1 = FIELD_U32(a1, 11456);
  FIELD_U8(v1, 7787) = 1;
  v3 = FIELD_U32(v1, 7112);
  result = (_DWORD *)(v1 + 7112);
  *result = v3 + *(_DWORD *)(result[33] + 160);
  return result;
}
