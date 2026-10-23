/* sub_609554E4
 * address: 0x609554E4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_609554E4(int a1)
{
  int v1; // r1
  bool v2; // zf
  int *result; // r0

  v1 = FIELD_U8(a1, 84);
  v2 = (v1 & 2) == 0;
  if ( (v1 & 2) != 0 )
  {
    v1 = FIELD_U32(a1, 412);
    v2 = v1 == 0;
  }
  if ( !v2 )
    return *(int **)(v1 + 236);
  result = *(int **)(a1 + 76);
  if ( !result )
    return &dword_60CD0A90;
  return result;
}
