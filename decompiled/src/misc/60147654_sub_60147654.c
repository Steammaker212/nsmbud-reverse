/* sub_60147654
 * address: 0x60147654   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60147654(int a1)
{
  ActiveColliderMgr *v2; // r6

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  FIELD_U32(a1, 100) = -1105618534;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1064304640;
  FIELD_U32(a1, 140) = 0x40000000;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF6A7C, &stru_60AF6A88, &stru_60AF6A94);
  FIELD_U32(a1, 3176) |= 0x40u;
  FIELD_U32(a1, 3184) |= 0x40u;
  FIELD_U32(a1, 3180) |= 0x1000000u;
  FIELD_U32(a1, 3188) |= 0x1000000u;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD4180, 0);
  FIELD_U32(a1, 340) |= 0x1000u;
  ActiveCollider__init((ActiveCollider *)(a1 + 6444), (StageActor *)a1, &stru_60AF6AA0, a1 + 6748);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6444))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 6444)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 6444));
  }
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 624) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 500) = 1103101952;
  FIELD_U32(a1, 504) = 1103101952;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 6416) = 180;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 636))(a1);
  return 1;
}
