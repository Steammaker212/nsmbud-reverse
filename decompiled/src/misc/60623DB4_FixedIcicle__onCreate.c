/* FixedIcicle__onCreate
 * address: 0x60623DB4   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
signed int __fastcall FixedIcicle__onCreate(FixedIcicle *this)
{
  ActiveCollider *aCollider2; // r5
  int *v3; // r3
  ActiveColliderInfo *aCollider1_info; // r2
  ActiveColliderMgr *v5; // r7
  ActiveColliderMgr *v6; // r6

  FIELD_U32(this, 0x18A0) = FIELD_U32(this, 0x0)._._._._.settings1 & 0xF;
  (*(void (__fastcall **)(FixedIcicle *))(FIELD_U32(this, 0x0)._._._._.vtable + 0x270))(this);
  FIELD_U32(this, 0x0)._._._.field_1F4 = 64.0;
  FIELD_U32(this, 0x0)._._._.field_1F8 = 64.0;
  if ( FIELD_U32(this, 0x18A0) )
  {
    ActiveCollider__init(&FIELD_U32(this, 0x0)._._._.aCollider, &FIELD_U32(this, 0x0)._._._, &stru_60C11C70, 0);
    aCollider2 = &FIELD_U32(this, 0x18A4);
    v3 = &FIELD_U32(this, 0x19D4);
    aCollider1_info = &stru_60B06908;
  }
  else
  {
    ActiveCollider__init(&FIELD_U32(this, 0x0)._._._.aCollider, &FIELD_U32(this, 0x0)._._._, &stru_60C11C44, 0);
    aCollider2 = &FIELD_U32(this, 0x18A4);
    v3 = &FIELD_U32(this, 0x19D4);
    aCollider1_info = &stru_60B068DC;
  }
  ActiveCollider__init(aCollider2, &FIELD_U32(this, 0x0)._._._, aCollider1_info, (int)v3);
  FIELD_U32(this, 0x0)._._._.aCollider.trapezoidOffsetTopLeft = -8.0;
  FIELD_U32(this, 0x0)._._._.aCollider.trapezoidOffsetTopRight = 8.0;
  FIELD_U32(this, 0x0)._._._.aCollider.trapezoidOffsetBottomLeft = -1.0;
  FIELD_U32(this, 0x0)._._._.aCollider.trapezoidOffsetBottomRight = 1.0;
  FIELD_U32(this, 0x18A4).trapezoidOffsetTopLeft = -8.0;
  FIELD_U32(this, 0x18A4).trapezoidOffsetTopRight = 8.0;
  FIELD_U32(this, 0x18A4).trapezoidOffsetBottomLeft = -1.0;
  FIELD_U32(this, 0x18A4).trapezoidOffsetBottomRight = 1.0;
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(this, 0x0)._._._.aCollider)
    && !ActiveColliderMgr_isInCreateList(v5, &FIELD_U32(this, 0x0)._._._.aCollider) )
  {
    ActiveColliderMgr_addToCreateList(v5, &FIELD_U32(this, 0x0)._._._.aCollider);
  }
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, aCollider2)
    && !ActiveColliderMgr_isInCreateList(v6, aCollider2) )
  {
    ActiveColliderMgr_addToCreateList(v6, aCollider2);
  }
  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
    sub_60003D84(this);
  FIELD_U32(this, 0x0)._._._.field_280 = 0;
  (*(void (__fastcall **)(FixedIcicle *, int *))(FIELD_U32(this, 0x0)._._._._.vtable + 192))(this, &dword_60CB3ABC);
  (*(void (__fastcall **)(FixedIcicle *))(FIELD_U32(this, 0x0)._._._._.vtable + 628))(this);
  return 1;
}
