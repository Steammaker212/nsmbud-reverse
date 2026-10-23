/* sub_6067C324
 * address: 0x6067C324   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_6067C324(int a1)
{
  _DWORD *v2; // r5
  float *v3; // r7
  signed int v4; // r6
  int v5; // t1
  float v6; // s0
  float v7; // s2
  SolidOnTopColliderInfo info; // [sp+8h] [bp-88h] BYREF
  float v10; // [sp+20h] [bp-70h] BYREF
  float v11; // [sp+24h] [bp-6Ch]
  int v12; // [sp+28h] [bp-68h] BYREF

  v2 = *(_DWORD **)(a1 + 6132);
  sub_6067DD1C(*(v2 - 1), &v10);
  v3 = (float *)&v12;
  v4 = 2;
  v10 = v10 - FIELD_F32(a1, 108);
  v11 = v11 - FIELD_F32(a1, 112);
  do
  {
    v5 = *--v2;
    sub_6067DBD0(v5, v3);
    ++v4;
    *v3 = *v3 - FIELD_F32(a1, 108);
    v3[1] = v3[1] - FIELD_F32(a1, 112);
    v3 += 2;
  }
  while ( (unsigned int)v2 > a1 + 6100 );
  sub_6067DC50(*v2, v3);
  *v3 = *v3 - FIELD_F32(a1, 108);
  v6 = FIELD_F32(a1, 112);
  v7 = v3[1];
  memset(&info, 0, 16);
  info.points = (Vec2 *)&v10;
  info.rotation = 0;
  v3[1] = v7 - v6;
  SolidOnTopCollider_init2((SolidOnTopCollider *)(a1 + 9152), (StageActor *)a1, &info, v4, 0);
  ColliderBase_setType((ColliderBase *)(a1 + 9152), 39);
  FIELD_U32(a1, 9376) = 4;
  return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 9152));
}
