/* sub_60322FA4
 * address: 0x60322FA4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60322FA4(Vec3 *a1, int a2, int a3, unsigned int a4)
{
  _BYTE *result; // r0
  ActorBuildInfo v8; // [sp+0h] [bp-48h] BYREF

  if ( !a4 || (result = 0, FIELD_U16(EnemyCounterMaybe_instance, 200) < a4) )
  {
    memset(&v8.parentId, 0, 36);
    v8.settings1 = a2;
    v8.settings2 = a3;
    v8.profile = Profile__get(0x275u);
    v8.position = *a1;
    return ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
  }
  return result;
}
