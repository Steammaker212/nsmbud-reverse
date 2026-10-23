/* sub_606212C0
 * address: 0x606212C0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_606212C0(int a1, int a2)
{
  _BYTE *result; // r0
  ActorBuildInfo v5; // [sp+4h] [bp-3Ch] BYREF

  memset(&v5.settings2, 0, 40);
  v5.settings1 = FIELD_U32(a1, 20) | (a2 << 24) | 0x10000000;
  v5.position = *(Vec3 *)(a1 + 108);
  v5.field_20 = FIELD_U8(a1, 86);
  v5.profile = *(Profile **)(a1 + 12);
  result = ActorMgr__create((void *)ActorMgr__instance, &v5, 0);
  if ( result )
  {
    result = *((_BYTE **)result + 2);
    FIELD_U32(a1, 6320) = result;
  }
  return result;
}
