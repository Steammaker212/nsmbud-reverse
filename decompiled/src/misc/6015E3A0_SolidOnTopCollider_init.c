/* SolidOnTopCollider_init
 * address: 0x6015E3A0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SolidOnTopCollider_init(SolidOnTopCollider *this, StageActor *owner, SolidOnTopColliderInfo *info)
{
  ColliderOwnerInfo ownerInfo; // [sp+4h] [bp-24h] BYREF

  ownerInfo.positionPtr = &FIELD_U32(owner, 0x6C);
  ownerInfo._248Ptr = &FIELD_U32(owner, 0x248);
  ownerInfo._56Ptr = &FIELD_U8(owner, 0x56);
  ownerInfo._57Ptr = &FIELD_U8(owner, 0x57);
  ownerInfo.playerIdPtr = &FIELD_U8(owner, 0x54);
  SolidOnTopCollider_initImpl(this, &ownerInfo, info);
  FIELD_U32(this, 0x90) = owner;
}
