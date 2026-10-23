/* SE_EMY_ref_2_helper_3230CC
 * address: 0x603230CC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_EMY_ref_2_helper_3230CC(Vec3 *a1, int a2, int a3)
{
  ActorBuildInfo v7; // [sp+0h] [bp-48h] BYREF

  memset(&v7.parentId, 0, 36);
  v7.settings1 = a2;
  v7.settings2 = a3;
  v7.profile = Profile__get(0x277u);
  v7.position = *a1;
  return ActorMgr__create((void *)ActorMgr__instance, &v7, 0);
}
