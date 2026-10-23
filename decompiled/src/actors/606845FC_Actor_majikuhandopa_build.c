/* Actor_majikuhandopa_build
 * address: 0x606845FC   size: 104   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_majikuhandopa_build(ActorBuildInfo *a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)operator_new(0x2200u);
  sub_60680830((int)v2, a1);
  *v2 = off_60C16E24;
  sub_60682CCC((int)(v2 + 1900));
  v2[2175] = 0;
  v2[2174] = 0;
  v2[2172] = 0;
  v2[2173] = 0;
  return v2;
}
