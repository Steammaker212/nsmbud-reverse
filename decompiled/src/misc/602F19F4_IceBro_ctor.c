/* IceBro_ctor
 * address: 0x602F19F4   size: 60   group: misc
 * sym: # IceBro_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall IceBro_ctor(ActorBuildInfo *a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x30B8u);
  result = (_DWORD *)BrosBase_ctor(v2, a1);
  *result = IceBro_vtable;
  result[3117] = 3;
  return result;
}
