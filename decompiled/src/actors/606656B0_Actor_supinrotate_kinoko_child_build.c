/* Actor_supinrotate_kinoko_child_build
 * address: 0x606656B0   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_supinrotate_kinoko_child_build(ActorBuildInfo *a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1DE8u);
  result = (_DWORD *)Actor_supinrotate_kinoko_child_build_helper(v2, a1);
  *result = off_60C14E00;
  result[1912] = 0;
  result[1913] = 0;
  return result;
}
