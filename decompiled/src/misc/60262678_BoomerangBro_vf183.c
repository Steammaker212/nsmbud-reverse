/* BoomerangBro_vf183
 * address: 0x60262678   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall BoomerangBro_vf183(int a1)
{
  int *result; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 12472);
  result = (int *)(a1 + 12472);
  *(result - 1482) = word_60AFD99C[v2];
  *result = v2 ^ 1;
  return result;
}
