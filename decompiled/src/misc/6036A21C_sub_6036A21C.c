/* sub_6036A21C
 * address: 0x6036A21C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6036A21C(int a1)
{
  ActorBuildInfo v3; // [sp+0h] [bp-40h] BYREF

  memset(&v3, 0, sizeof(v3));
  v3.profile = Profile__get(0x16Au);
  v3.position = *(Vec3 *)(a1 + 108);
  v3.field_20 = FIELD_U8(a1, 86);
  v3.parentId = FIELD_U32(a1, 8);
  return ActorMgr__create((void *)ActorMgr__instance, &v3, 0) != 0;
}
