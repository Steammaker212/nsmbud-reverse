/* sub_603D74F8
 * address: 0x603D74F8   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D74F8(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r0
  float v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r2
  int v10; // r0
  ActiveColliderMgr *v11; // r5

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
  if ( v2 != result )
  {
    sub_603D907C(a1, 1, 1.0);
    v4 = FIELD_U32(a1, 160) >> 31;
    FIELD_U32(a1, 80) = v4;
    v5 = flt_60AF2080[v4];
    FIELD_F32(a1, 120) = v5;
    FIELD_U32(a1, 124) = 1069547520;
    FIELD_U32(a1, 128) = 0;
    FIELD_F32(a1, 132) = v5;
    FIELD_U32(a1, 136) = -1061158912;
    FIELD_U32(a1, 140) = 0;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B012F0, &stru_60B012FC, &stru_60B01308);
    v6 = FIELD_U32(a1, 3200);
    FIELD_U32(a1, 3204) |= 0x1428000u;
    FIELD_U32(a1, 3200) = v6 | 0x41000E40;
    v7 = FIELD_U32(a1, 3192) | 0x41000E40;
    FIELD_U32(a1, 3196) |= 0x1428000u;
    FIELD_U32(a1, 3192) = v7;
    v8 = FIELD_U32(a1, 3184);
    v9 = FIELD_U32(a1, 3188) | 0x1428000;
    v10 = FIELD_U32(a1, 3176) | 0x41000E40;
    FIELD_U32(a1, 3180) |= 0x1428000u;
    FIELD_U32(a1, 3188) = v9;
    FIELD_U32(a1, 3176) = v10;
    FIELD_U32(a1, 3184) = v8 | 0x41000E40;
    FIELD_U8(a1, 11812) = 0;
    FIELD_U32(a1, 164) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 12940), (StateBase *)&dword_60C991D8);
    if ( !FIELD_U8(a1, 11815) )
    {
      FIELD_U8(a1, 11815) = 1;
      v11 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
      ActiveColldierMgr_removeFromCreateList(v11, (ActiveCollider *)(a1 + 188));
      ActiveColldierMgr_removeFromList3(v11, a1 + 188);
    }
    FIELD_U8(a1, 11813) = 1;
    FIELD_U32(a1, 11856) = 1;
    return 11856;
  }
  return result;
}
