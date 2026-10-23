/* sub_60788E34
 * address: 0x60788E34   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60788E34(Vec3 *a1, char a2, int a3)
{
  int v6; // r0
  ActorBuildInfo v8; // [sp+0h] [bp-40h] BYREF

  memset(&v8, 0, sizeof(v8));
  v8.profile = Profile__get(0x1BAu);
  v8.position = *a1;
  if ( a3 )
  {
    v8.parentId = FIELD_U32(a3, 8);
    v6 = (FIELD_U32(a3, 80) << 24) & 0x1000000;
  }
  else
  {
    v6 = 0;
  }
  v8.settings1 = v6 | a2 & 0xF;
  return ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
}
