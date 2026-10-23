/* Actor__ctor
 * address: 0x60002C54   size: 312   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor__ctor(Actor *this, ActorBuildInfo *buildInfo)
{
  int actorMgr; // r0
  Actor *parent; // r6

  FIELD_U32(this, 0x0) = (int)&Actor__vtable;
  FIELD_U32(this, 0x4) = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  actorMgr = ActorMgr__instance;
  FIELD_U32(this, 0x8) = FIELD_U32(ActorMgr__instance, 0x6A38);
  FIELD_U32(this, 0xC) = FIELD_U32(buildInfo, 0xC);
  FIELD_U8(this, 0x10) = FIELD_U8(actorMgr, 0x6A3C);
  FIELD_U8(this, 0x11) = FIELD_U32(buildInfo, 0x28) != 0;
  FIELD_U8(this, 0x12) = 0;
  FIELD_U8(this, 0x13) = 0;
  FIELD_U32(this, 0x14) = FIELD_U32(buildInfo, 0x0);
  FIELD_U32(this, 0x18) = FIELD_U32(buildInfo, 0x4);
  FIELD_U8(this, 0x1C) = FIELD_U8(buildInfo, 0x24);
  FIELD_U8(this, 0x1D) = FIELD_U8(buildInfo, 0x25);
  FIELD_U8(this, 0x1E) = FIELD_U8(buildInfo, 0x26);
  FIELD_U32(this, 0x20).previous = &FIELD_U32(this, 0x20);
  FIELD_U32(this, 0x20).next = &FIELD_U32(this, 0x20);
  FIELD_U32(this, 0x28) = 0;
  FIELD_U32(this, 0x2C) = -1;
  FIELD_U32(this, 0x30) = 0;
  FIELD_U32(this, 0x34) = 0;
  parent = (Actor *)ActorMgrRelated_getById(actorMgr + 0x6A20, FIELD_U32(buildInfo, 0x8));
  FIELD_U32(this, 0x38) = parent;
  FIELD_U32(this, 0x3C) = 0;
  FIELD_U32(this, 0x40) = 0;
  FIELD_U32(this, 0x44) = 0;
  FIELD_U32(this, 0x48) = 0;
  FIELD_U32(this, 0x4C) = 0;
  FIELD_U32(this, 0x2C) = 48;
  if ( parent )
  {
    sead__ListNode__insertFront(&FIELD_U32(parent, 0x20), (sead_ListNode *)((char *)this + FIELD_U32(parent, 0x2C)));
    ++FIELD_U32(parent, 0x28);
    return this;
  }
  else
  {
    if ( FIELD_U32(buildInfo, 0x8) )
      FIELD_U8(this, 0x13) = 1;
    return this;
  }
}
