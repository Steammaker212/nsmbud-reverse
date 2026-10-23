/* sub_607045A4
 * address: 0x607045A4   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall sub_607045A4(StageActor *a1)
{
  ActiveCollider *p_aCollider; // r5
  float v3; // r0
  StageActor **v4; // r7
  ActiveColliderMgr *v5; // r6
  StageActor *result; // r0
  ShapedColliderInfo v7; // [sp+0h] [bp-40h] BYREF

  p_aCollider = &FIELD_U32(a1, 0xBC);
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), a1, &stru_60C20C7C, 0);
  v4 = (StageActor **)&a1[9].field_1F8;
  v3 = a1[9].field_1F8;
  LODWORD(FIELD_F32(a1, 0x130)) = dword_60AF2B44[LODWORD(v3)];
  LODWORD(FIELD_F32(a1, 0x134)) = dword_60AF2B54[LODWORD(v3)];
  LODWORD(FIELD_F32(a1, 0x138)) = dword_60AF2B64[LODWORD(v3)];
  LODWORD(FIELD_F32(a1, 0x13C)) = dword_60AF2B74[LODWORD(v3)];
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, p_aCollider)
    && !ActiveColliderMgr_isInCreateList(v5, p_aCollider) )
  {
    ActiveColliderMgr_addToCreateList(v5, p_aCollider);
  }
  v7.rotation = FIELD_U32(a1, 0xA4);
  memset(&v7, 0, 16);
  v7.topLeft.x = -14.5;
  v7.topLeft.y = 96.0;
  v7.bottomRight.x = 14.5;
  v7.bottomRight.y = 0.0;
  ShapedCollider_init((ShapedCollider *)&a1[10]._.id, a1, &v7);
  a1[10].aCollider.info.field_10 = (int)sub_60704C90;
  a1[10].aCollider.info.field_14 = (int)&loc_60704C9C;
  a1[10].aCollider.info.category = (int)&loc_60704CA8;
  ColliderBase_setType((ColliderBase *)&a1[10]._.id, 35);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)&a1[10]._.id);
  result = *v4;
  if ( (unsigned int)*v4 <= 3 )
  {
    result = (StageActor *)dword_60AF2A24[(_DWORD)result];
    FIELD_U32(a1, 0xA4) = (int)result;
    a1[10].aCollider.owner = result;
  }
  return result;
}
