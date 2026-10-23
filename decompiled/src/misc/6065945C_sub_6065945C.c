/* sub_6065945C
 * address: 0x6065945C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065945C(int a1, _DWORD *a2)
{
  int v4; // r4
  float v5; // s0
  char v6; // r12
  SolidOnTopColliderInfo v8; // [sp+0h] [bp-40h] BYREF
  float v9[10]; // [sp+18h] [bp-28h] BYREF

  if ( Actor__getProfileId((Actor *)a1) == 96 )
    FIELD_U8(a1, 6188) = 1;
  FIELD_U32(a1, 6704) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  v4 = (FIELD_U32(a1, 24) >> 12) & 1;
  memset(&v8, 0, 16);
  v5 = *(float *)&dword_60CB6624[3 * v4 + 2];
  v9[0] = v5 * -0.5;
  v9[1] = 10.0;
  v9[2] = v5 * 0.5;
  v9[3] = 10.0;
  v8.points = (Vec2 *)v9;
  v8.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6248), (StageActor *)a1, &v8);
  if ( Actor__getProfileId((Actor *)a1) == 96 )
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6248));
  sub_606595FC(a1, &dword_60CB6624[v4 | (2 * v4)]);
  *a2 = a1 + 6200;
  a2[1] = a1 + 6244;
  if ( ((unsigned int)&dword_60CB6644 & ~(1617270144 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6644) )
  {
    dword_60CB6648 = 1134559232;
    dword_60CB664C = 1134559232;
    _cxa_guard_release(&dword_60CB6644);
  }
  a2[2] = dword_60CB6648;
  a2[3] = dword_60CB664C;
  FIELD_U32(a1, 6200) = a1 + 6248;
  return 1;
}
