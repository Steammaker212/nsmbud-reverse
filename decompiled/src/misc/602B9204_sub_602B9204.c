/* sub_602B9204
 * address: 0x602B9204   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602B9204(int a1)
{
  int v2; // r6
  _BYTE *v3; // r0
  ActorBuildInfo v4; // [sp+4h] [bp-3Ch] BYREF

  v2 = FIELD_U32(a1, 20);
  memset(&v4.settings2, 0, 40);
  v4.settings1 = v2 & 0x10000000;
  v4.position = *(Vec3 *)(a1 + 108);
  v4.field_20 = FIELD_U8(a1, 86);
  v4.profile = Profile__get(0x281u);
  v3 = ActorMgr__create((void *)ActorMgr__instance, &v4, 0);
  if ( v3 )
  {
    FIELD_U32(a1, 6356) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 1603) = FIELD_U32(a1, 8);
    sub_6013D830((int)v3);
  }
}
