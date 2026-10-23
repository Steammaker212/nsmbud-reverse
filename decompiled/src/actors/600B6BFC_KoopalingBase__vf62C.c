/* KoopalingBase__vf62C
 * address: 0x600B6BFC   size: 20   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x600A0010 : Iggy
int *__fastcall KoopalingBase__vf62C(int a1)
{
  int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 6148);
  result = (int *)(a1 + 6148);
  *result = v2 | 0x200;
  return result;
}
