/* sub_60693940
 * address: 0x60693940   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60693940(int a1)
{
  unsigned int v2; // r6
  int ResArchiveById; // r0
  int v4; // r6
  ShapedColliderInfo v6; // [sp+0h] [bp-40h] BYREF

  FIELD_U32(a1, 116) = 0;
  v2 = FIELD_U32(a1, 24);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v4 = (v2 >> 8) & 0x1F;
  sub_60693F1C(a1 + 644, ResArchiveById, v4);
  sub_60693A00(a1);
  sub_6069455C(a1 + 644);
  memset(&v6, 0, 24);
  v6.bottomRight.x = (float)(unsigned int)(16 * v4 + 48);
  v6.bottomRight.y = -32.0;
  v6.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 1896), (StageActor *)a1, &v6);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1896));
  return 1;
}
