/* sub_6060D27C
 * address: 0x6060D27C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060D27C(int a1)
{
  int v2; // r0
  int v3; // r9
  int v4; // r7
  int v5; // r5
  int v6; // r6
  int v7; // r10
  int v8; // r11
  ActorBuildInfo v10; // [sp+0h] [bp-50h] BYREF

  v2 = FIELD_U32(a1, 672);
  FIELD_U32(a1, 672) = v2 - 1;
  if ( v2 <= 1 )
  {
    v3 = FIELD_U32(a1, 644);
    v4 = FIELD_U32(a1, 648);
    v5 = FIELD_U32(a1, 652);
    v6 = FIELD_U32(a1, 656);
    v7 = FIELD_U32(a1, 660);
    v8 = FIELD_U32(a1, 664);
    memset(&v10.parentId, 0, 36);
    v10.settings1 = v3 | (v4 << 12) | (v5 << 16) | (v6 << 20);
    v10.settings2 = v7 | (v8 << 8);
    v10.profile = Profile__get(0x51u);
    v10.position = *(Vec3 *)(a1 + 108);
    v10.field_1C = FIELD_U32(a1, 160);
    v10.field_20 = 0;
    ActorMgr__create((void *)ActorMgr__instance, &v10, 0);
    FIELD_U32(a1, 672) = FIELD_U32(a1, 668);
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
