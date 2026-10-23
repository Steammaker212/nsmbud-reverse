/* Actor_rotate_buroku_tree_build
 * address: 0x606CEF04   size: 148   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_rotate_buroku_tree_build(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)operator_new(0x1B38u);
  sub_606CA9C4((int)v2, a1);
  *v2 = &off_60C1D5C4;
  sub_606CFA8C(v2 + 1729);
  v2[1737] = 0;
  v2[1736] = 0;
  v2[1735] = 0;
  v2[1733] = 0;
  v2[1734] = 0;
  v2[1738] = 1162551296;
  v2[1739] = 1107296256;
  v2[1740] = 0;
  return v2;
}
