/* Actor_rotate_buroku_tree_RDash_build
 * address: 0x606D0028   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_rotate_buroku_tree_RDash_build(int a1)
{
  _DWORD *v2; // r0
  _DWORD *result; // r0

  v2 = (_DWORD *)operator_new(0x1B38u);
  result = Actor_rotate_buroku_tree_RDash_build_helper(v2, a1);
  *result = &off_60C1D6D4;
  return result;
}
