/* Actor_keronpa_fire_RDashfor_build
 * address: 0x60139268   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_keronpa_fire_RDashfor_build(ActorBuildInfo *a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1A08u);
  result = (_DWORD *)Actor_keronpa_fire_RDashfor_build_helper(v2, a1);
  *result = off_60BD2784;
  result[1664] = 0;
  result[1665] = 0;
  return result;
}
