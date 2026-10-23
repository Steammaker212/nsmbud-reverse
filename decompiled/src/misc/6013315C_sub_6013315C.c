/* sub_6013315C
 * address: 0x6013315C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6013315C(int a1, int a2)
{
  int v4; // r6
  int (__fastcall ***v5)(_DWORD, int *); // r7
  char v6; // r12
  _DWORD *result; // r0
  int v8; // r1
  int v9; // r2

  *(_DWORD *)(FIELD_U32(a1, 36) + 80) = FIELD_U32(a2, 80);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 36) + 68))(FIELD_U32(a1, 36), FIELD_S8(a2, 84));
  *(_DWORD *)(FIELD_U32(a1, 36) + 160) = dword_60AF1EC0[*(_DWORD *)(FIELD_U32(a1, 36) + 80)];
  if ( !FIELD_U8(dword_60CC6D8C, 17) )
    sub_60158F04((ActiveCollider *)(FIELD_U32(a1, 36) + 188), 3);
  *(_DWORD *)(FIELD_U32(a1, 36) + 328) = 9;
  sub_60158FA8((ActiveCollider *)(FIELD_U32(a1, 36) + 188), 32815);
  v4 = 0;
  *(_DWORD *)(FIELD_U32(a1, 36) + 336) = 0;
  *(_DWORD *)(FIELD_U32(a1, 36) + 344) = sub_601349FC;
  *(_DWORD *)(FIELD_U32(a1, 36) + 336) |= 0x88200u;
  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 36);
  if ( ((unsigned int)&dword_60C87668 & ~(1611870764 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C87668) )
  {
    dword_60C87664 = (int)&off_60BD20C4;
    _cxa_guard_release(&dword_60C87668);
  }
  if ( v5 )
  {
    v4 = (**v5)(v5, &dword_60C87664);
    if ( v4 )
      v4 = (int)v5;
  }
  FIELD_U32(v4, 6588) = 8;
  FIELD_U32(v4, 6584) = 1;
  CollisionMgr_init(
    (CollisionMgr *)(FIELD_U32(a1, 36) + 648),
    *(StateActor **)(a1 + 36),
    &stru_60AF65BC,
    &stru_60AF65C8,
    &stru_60AF65D4);
  StateMgr__changeState((StateMgr *)(FIELD_U32(a1, 36) + 6084), &stru_60C875C4);
  *(float *)(FIELD_U32(a1, 36) + 120) = *(float *)(FIELD_U32(a1, 36) + 120) + (float)(FIELD_F32(a2, 120) * 0.5);
  result = *(_DWORD **)(a1 + 36);
  v8 = FIELD_U32(a1, 16);
  v9 = FIELD_U32(a1, 20);
  result[36] = FIELD_U32(a1, 12);
  result[37] = v8;
  result[38] = v9;
  return result;
}
