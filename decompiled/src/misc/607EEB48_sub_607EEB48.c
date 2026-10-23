/* sub_607EEB48
 * address: 0x607EEB48   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607EEB48(_DWORD *a1, void *a2)
{
  _DWORD *result; // r0
  int v4; // r2
  int v5; // r3

  result = (_DWORD *)operator_new_8DE25C(0x10u, a2, 4);
  *result = &off_60C26FAC;
  v4 = a1[2];
  v5 = a1[3];
  result[1] = a1[1];
  result[2] = v4;
  result[3] = v5;
  *result = off_60C26F98;
  return result;
}
