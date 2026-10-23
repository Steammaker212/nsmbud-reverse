/* Actor_mid_Goomba_build
 * address: 0x6034EA44   size: 76   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_mid_Goomba_build(ActorBuildInfo *a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1B38u);
  result = (_DWORD *)sub_6033FC60(v2, a1);
  *result = off_60BEE5E0;
  result[1739] = 0;
  result[1740] = 0;
  result[1741] = 0;
  return result;
}
