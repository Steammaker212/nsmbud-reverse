/* sub_601573D4
 * address: 0x601573D4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601573D4(
        CircularCollider *a1,
        StageActor *a2,
        CircularColliderInfo *a3,
        ColliderListNode *a4,
        ColliderListNode *a5)
{
  int result; // r0
  ColliderOwnerInfo ownerInfo; // [sp+4h] [bp-2Ch] BYREF

  ColliderBase_setSolidity(&FIELD_U32(a1, 0x0), 2);
  FIELD_U32(a1, 0x174) = (int)a4;
  FIELD_U32(a1, 0x178) = (int)a5;
  ownerInfo.positionPtr = &FIELD_U32(a2, 0x6C);
  ownerInfo._248Ptr = &FIELD_U32(a2, 0x248);
  ownerInfo._56Ptr = &FIELD_U8(a2, 0x56);
  ownerInfo._57Ptr = &FIELD_U8(a2, 0x57);
  ownerInfo.playerIdPtr = &FIELD_U8(a2, 0x54);
  result = CircularCollider_initImpl(a1, &ownerInfo, a3);
  FIELD_U32(a1, 0x0).owner = a2;
  return result;
}
