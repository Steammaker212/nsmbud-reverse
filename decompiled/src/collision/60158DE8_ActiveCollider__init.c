/* ActiveCollider__init
 * address: 0x60158DE8   size: 208   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall ActiveCollider__init(ActiveCollider *this, StageActor *owner, ActiveColliderInfo *info, int unk)
{
  ActiveColliderInfo *this_info; // r0
  int *v6; // r2
  float infoX; // r4
  float y; // r5
  float x; // r6
  float v10; // r7
  int v11; // r12
  float v12; // r5
  float v13; // r6
  float v14; // r7
  int v15; // r12
  int v16; // lr
  ActiveColliderMgr *v17; // r5
  signed int result; // r0

  FIELD_U32(this, 0x40) = owner;
  this_info = &FIELD_U32(this, 0x74);
  infoX = FIELD_F32(info, 0x0);
  y = FIELD_F32(info, 0x4);
  x = FIELD_F32(info, 0x8);
  v10 = FIELD_F32(info, 0xC);
  v11 = FIELD_U32(info, 0x10);
  v6 = &FIELD_U32(info, 0x14);
  FIELD_F32(this_info, 0x0) = infoX;
  FIELD_F32(this_info, 0x4) = y;
  FIELD_F32(this_info, 0x8) = x;
  FIELD_F32(this_info, 0xC) = v10;
  FIELD_U32(this_info, 0x10) = v11;
  this_info = (ActiveColliderInfo *)((char *)this_info + 20);
  v12 = *((float *)v6 + 1);
  v13 = *((float *)v6 + 2);
  v14 = *((float *)v6 + 3);
  v15 = v6[4];
  v16 = v6[5];
  LODWORD(FIELD_F32(this_info, 0x0)) = *v6;
  FIELD_F32(this_info, 0x4) = v12;
  FIELD_F32(this_info, 0x8) = v13;
  FIELD_F32(this_info, 0xC) = v14;
  FIELD_U32(this_info, 0x10) = v15;
  FIELD_U32(this_info, 0x14) = v16;
  FIELD_U8(this, 0x6E) = 0;
  FIELD_U32(this, 0x70) = unk;
  FIELD_U8(this, 0x6C) = FIELD_U8(owner, 0x57);
  FIELD_U8(this, 0x6D) = FIELD_U8(owner, 0x56);
  v17 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, this)
    || (result = ActiveColliderMgr_isInCreateList(v17, this), result == 1) )
  {
    ActiveColldierMgr_removeFromActiveList(v17, this);
    ActiveColldierMgr_removeFromCreateList(v17, this);
    ActiveColldierMgr_removeFromList3(v17, (int)this);
    result = ActiveColliderMgr_isInActiveList(v17, this);
    if ( !result )
    {
      result = ActiveColliderMgr_isInCreateList(v17, this);
      if ( !result )
        return (signed int)ActiveColliderMgr_addToCreateList(v17, this);
    }
  }
  return result;
}
