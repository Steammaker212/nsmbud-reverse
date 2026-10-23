/* sub_602518C0
 * address: 0x602518C0   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602518C0(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  char v4; // r12
  int v5; // r1
  unsigned int v6; // r0
  char *v7; // r6
  int v8; // r5
  float v9; // s16
  float v10; // s0

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v5 = 0;
  v7 = (char *)(a1 + 6356);
  v6 = FIELD_U8(a1, 6356);
  if ( v6 < 4 )
    v5 = (char)v6;
  v8 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
  if ( ((unsigned int)&dword_60C7B374 & ~(1613044032 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B370) == 1 )
  {
    v9 = FIELD_F32(v8, 112);
    FIELD_F32(a1, 6308) = fabsf(v9 - FIELD_F32(a1, 112));
    v10 = fabsf((float)(*(float *)(sub_6075F950(v8) + 4) + -4.0) - v9);
    if ( FIELD_F32(a1, 6308) >= v10 )
      FIELD_F32(a1, 6308) = v10;
    FIELD_U16(a1, 6348) = sub_60253F94(dword_60C8DFBC, FIELD_U32(a1, 8), *v7);
    FIELD_U32(a1, 6360) = 0;
    FIELD_U32(a1, 6312) = 1041865114;
    FIELD_U32(a1, 6352) = 0;
    FIELD_U32(a1, 6320) = 0;
    FIELD_U32(a1, 6324) = 0;
    FIELD_U32(a1, 6328) = 0;
    FIELD_U32(a1, 6336) = 0;
    FIELD_U32(a1, 6340) = 0;
    sub_604005D0(AreaRumbleMgr_instance, *v7, 8, 2, 0, 0);
  }
}
