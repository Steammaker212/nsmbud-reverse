/* sub_6030413C
 * address: 0x6030413C   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030413C(int a1)
{
  char v2; // r12
  int v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r6
  int v7; // r0
  _DWORD *v8; // r6
  int v9; // r0
  int *v10; // r1

  if ( Actor__getProfileId((Actor *)a1) == 625 )
    return sub_60304350(a1);
  v4 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C92F04 & ~(1613775228 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
  {
    dword_60C92F00 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C92F04);
  }
  if ( !v4 )
    return 0;
  if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C92F00) != 1 )
    return 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 != (*(int (**)(void))(dword_60C92FC8 + 8))() )
    return 0;
  v8 = (_DWORD *)(a1 + 7012);
  v7 = FIELD_U32(a1, 7012);
  if ( v7 )
  {
    v9 = v7 - 1;
LABEL_11:
    *v8 = v9;
    return 0;
  }
  if ( !FIELD_U32(a1, 6992) )
  {
    if ( FIELD_U32(a1, 7028) == 3 )
    {
      if ( FIELD_F32(a1, 108) < FIELD_F32(dword_60CC6484, 116) )
      {
        *v8 = 45;
        goto LABEL_23;
      }
      v10 = &dword_60AF34D8;
    }
    else
    {
      v10 = &dword_60AF353C;
    }
    if ( (unsigned int)sub_600085D0(ActorMgr__instance, *v10) < FIELD_U32(a1, 6996) )
      goto LABEL_15;
    if ( FIELD_U32(a1, 6992) )
      return 0;
LABEL_23:
    v9 = dword_60AF2048[HIBYTE(FIELD_U32(a1, 20)) & 1];
    goto LABEL_11;
  }
  *v8 = 45;
LABEL_15:
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C92E90);
  return 1;
}
