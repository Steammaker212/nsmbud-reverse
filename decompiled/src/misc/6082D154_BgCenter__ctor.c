/* BgCenter__ctor
 * address: 0x6082D154   size: 60   group: misc
 * sym: BgCenter::BgCenter(ActorBuildInfo const*) as C1
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall BgCenter__ctor(_DWORD *a1)
{
  Actor *v2; // r0
  _DWORD *result; // r0
  int v4; // r2
  int v5; // r3

  v2 = (Actor *)operator_new(0x5Cu);
  result = Actor__ctor(v2, (ActorBuildInfo *)a1);
  *result =&BgCenter__vtable;
  v4 = a1[5];
  v5 = a1[6];
  result[20] = a1[4];
  result[21] = v4;
  result[22] = v5;
  return result;
}
