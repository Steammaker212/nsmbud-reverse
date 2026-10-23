/* sub_605E8C00
 * address: 0x605E8C00   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_605E8C00(int *a1, char a2, char a3)
{
  ActorBuildInfo v7; // [sp+4h] [bp+0h] BYREF

  memset(&v7.settings2, 0, 40);
  v7.profile = Profile__get(0x1BEu);
  v7.position = *(Vec3 *)a1;
  v7.settings1 = a2 & 0xF | (16 * (a3 & 0xF));
  return ActorMgr__create((void *)ActorMgr__instance, &v7, 0);
}
