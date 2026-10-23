/* sub_60190644
 * address: 0x60190644   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60190644(int a1)
{
  int result; // r0
  ActorBuildInfo v3; // [sp+0h] [bp-40h] BYREF

  memset(&v3, 0, sizeof(v3));
  v3.profile = Profile__get(0x38Eu);
  result = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v3, 0) + 2);
  FIELD_U32(a1, 1388) = result;
  return result;
}
