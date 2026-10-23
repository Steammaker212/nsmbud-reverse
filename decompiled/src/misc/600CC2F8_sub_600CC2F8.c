/* sub_600CC2F8
 * address: 0x600CC2F8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CC2F8(int a1)
{
  int v2; // r2
  int v3; // r0
  float v4; // s16

  v2 = dword_60C8407C;
  v3 = dword_60C84080;
  FIELD_U32(a1, 144) = dword_60C84078;
  FIELD_U32(a1, 148) = v2;
  FIELD_U32(a1, 152) = v3;
  v4 = FIELD_F32(a1, 144);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCAD50, a1 + 6284);
  FIELD_F32(a1, 312) = v4 * 7.0;
  FIELD_F32(a1, 316) = v4 * 7.0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  FIELD_U32(a1, 500) = 1107296256;
  FIELD_U32(a1, 504) = 1107296256;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF5B4C, &stru_60AF5B58, &stru_60AF5B64);
  FIELD_U32(a1, 3200) |= 0x40000000u;
  FIELD_U32(a1, 3192) |= 0x40000000u;
  FIELD_U32(a1, 3176) |= 0x40000000u;
  FIELD_U32(a1, 3184) |= 0x40000000u;
  FIELD_U32(a1, 3200) |= 0x800u;
  FIELD_U32(a1, 3192) |= 0x800u;
  FIELD_U32(a1, 3176) |= 0x800u;
  FIELD_U32(a1, 3184) |= 0x800u;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C84084);
  sub_600CC43C(a1);
  return 1;
}
