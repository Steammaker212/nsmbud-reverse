/* sub_605BF660
 * address: 0x605BF660   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_605BF660(int a1, StageActor *a2, int a3, int a4, float a5, int a6)
{
  char v9; // r12
  ShapedColliderInfo v11[2]; // [sp+0h] [bp-50h] BYREF

  bolt_pyramid_ref(a1, a3, a4, a5);
  if ( ((unsigned int)&dword_60CB08A0 & ~(1616639636 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CB08A0) )
  {
    dword_60CB08AC = -1048576000;
    dword_60CB08B0 = 1098907648;
    dword_60CB08B4 = 1098907648;
    dword_60CB08B8 = 1098907648;
    _cxa_guard_release(&dword_60CB08A0);
  }
  if ( ((unsigned int)dword_60CB08A4 & ~(1616639728 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60CB08A4) )
  {
    dword_60CB08CC = 0;
    dword_60CB08D0 = 0;
    dword_60CB08D4 = 0;
    dword_60CB08D8 = 0;
    LODWORD(qword_60CB08DC) = &dword_60CB08AC;
    HIDWORD(qword_60CB08DC) = 0;
    _cxa_guard_release(dword_60CB08A4);
  }
  LODWORD(v11[0].distToCenter.x) = dword_60CB08CC;
  LODWORD(v11[0].field_8) = dword_60CB08D4;
  LODWORD(v11[0].field_C) = dword_60CB08D8;
  v11[0].topLeft = (Vec2)qword_60CB08DC;
  v11[0].distToCenter.y = a5;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 8), a2, (SolidOnTopColliderInfo *)v11);
  if ( a6 == 1 )
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 8));
  v11[0].distToCenter.x = 0.0;
  v11[0].distToCenter.y = a5;
  v11[0].field_8 = 0.0;
  v11[0].field_C = 0.0;
  v11[0].topLeft.x = -16.0;
  v11[0].topLeft.y = 16.0;
  v11[0].bottomRight.x = 16.0;
  v11[0].bottomRight.y = 0.0;
  v11[0].rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 456), a2, v11);
  ColliderBase_setSolidity((ColliderBase *)(a1 + 456), 0);
  return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 456));
}
