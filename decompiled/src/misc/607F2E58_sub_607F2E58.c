/* sub_607F2E58
 * address: 0x607F2E58   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607F2E58(int a1)
{
  int *result; // r0
  int v2; // t1
  int v3; // r0

  FIELD_U8(a1, 44) = 0;
  FIELD_U32(a1, 48) = 1;
  v3 = FIELD_U32(dword_60C99DD4, 196);
  v2 = FIELD_U32(v3, 4556);
  result = (int *)(v3 + 4556);
  *result = v2 | 1;
  return result;
}
