/* sub_6066D28C
 * address: 0x6066D28C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066D28C(int a1)
{
  unsigned int v2; // r2
  StateMgr *v3; // r0
  int *v4; // r1
  ShapedColliderInfo v6; // [sp+14h] [bp-3Ch] BYREF

  ((void (__fastcall *)(int, int, int, _DWORD, int, int, _DWORD, _DWORD))loc_606BB874)(
    a1 + 6100,
    (FIELD_U32(a1, 24) >> 20) & 0xF,
    FIELD_U8(a1, 23) & 1 | 2,
    FIELD_U32(a1, 24) >> 28,
    HIBYTE(FIELD_U32(a1, 24)) & 0xF,
    HIWORD(FIELD_U32(a1, 24)) & 3,
    0,
    0);
  FIELD_U32(a1, 6856) = FIELD_U32(a1, 112);
  lift_zen_kaihei_ref(a1);
  FIELD_U32(a1, 572) = 1103101952;
  FIELD_U32(a1, 576) = -1048576000;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 1103101952;
  FIELD_U32(a1, 496) = -1048576000;
  v2 = FIELD_U32(a1, 24);
  FIELD_U32(a1, 500) = 1111490560;
  FIELD_F32(a1, 504) = (float)(((v2 >> 15) & 0x1E0) + 544);
  FIELD_U32(a1, 508) = 1111490560;
  FIELD_U32(a1, 512) = 1107296256;
  v6.distToCenter.x = 0.0;
  v6.distToCenter.y = 0.0;
  v6.field_8 = 24.0;
  v6.field_C = -16.0;
  v6.topLeft.x = 0.0;
  v6.topLeft.y = 0.0;
  v6.bottomRight.x = 48.0;
  v6.bottomRight.y = -32.0;
  v6.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6200), (StageActor *)a1, &v6);
  FIELD_U32(a1, 6524) = sub_6066D524;
  FIELD_U32(a1, 6528) = sub_6066D544;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6200));
  if ( (FIELD_U8(a1, 26) & 0xF0) != 0 )
  {
    ((void (__fastcall *)(int))loc_606BBA3C)(a1 + 6100);
    v3 = (StateMgr *)(a1 + 6084);
    v4 = &dword_60CB6F58;
  }
  else
  {
    v3 = (StateMgr *)(a1 + 6084);
    v4 = &dword_60CB6F38;
  }
  StateMgr__changeState(v3, (StateBase *)v4);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 6856) + FIELD_F32(a1, 6168);
  sub_6066D564(a1);
  return 1;
}
