/* sub_6054EDD8
 * address: 0x6054EDD8   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054EDD8(int a1)
{
  int v2; // r5
  char v3; // r12
  float v4; // s0
  float v5; // s4
  int v6; // r1
  int result; // r0
  _DWORD *v8; // r5

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 3824));
  if ( !v2 )
    goto LABEL_10;
  if ( ((unsigned int)&dword_60C7B408 & ~(1616178712 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B404) != 1 )
  {
LABEL_10:
    StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CACD8C);
    v8 = (_DWORD *)(a1 + 3800);
    goto LABEL_11;
  }
  if ( FIELD_U8(a1, 3823) )
  {
    v4 = (float)FIELD_S32(dword_60C9A1E8, 231388);
    v5 = FIELD_F32(v2, 112);
    v6 = FIELD_U32(v2, 116);
    FIELD_U32(a1, 3720) = FIELD_U32(v2, 108);
    FIELD_F32(a1, 3724) = v5 + (float)(v4 + 16.0);
    FIELD_U32(a1, 3728) = v6;
  }
  v8 = (_DWORD *)(a1 + 3800);
  result = FIELD_U32(a1, 3800);
  if ( FIELD_U32(a1, 3796) >= result )
  {
    StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CACD8C);
LABEL_11:
    *v8 = 0;
    return 0;
  }
  return result;
}
