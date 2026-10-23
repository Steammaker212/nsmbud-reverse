/* sub_60830F48
 * address: 0x60830F48   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60830F48(int a1)
{
  int v2; // r0
  ActorBuildInfo v4; // [sp+4h] [bp-44h] BYREF

  FIELD_U32(a1, 6100) = 60;
  FIELD_U32(a1, 6104) = 0;
  v2 = FIELD_U32(dword_60C99DD4, 260);
  if ( v2 )
    FIELD_U8(v2, 4039) = 1;
  memset(&v4.settings2, 0, 40);
  v4.profile = Profile__get(0x258u);
  v4.settings1 = 0;
  v4.position = *(Vec3 *)(a1 + 108);
  ActorMgr__create((void *)ActorMgr__instance, &v4, 0);
  memset(&v4.settings2, 0, 40);
  v4.profile = Profile__get(0x258u);
  v4.settings1 = 1;
  v4.position = *(Vec3 *)(a1 + 108);
  return ActorMgr__create((void *)ActorMgr__instance, &v4, 0);
}
