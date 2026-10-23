/* sub_60304350
 * address: 0x60304350   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60304350(int a1)
{
  char v1; // r12
  int v3; // r6
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r0
  int *v7; // r6
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  int *v11; // r0

  v3 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C92F04 & ~(1613775724 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
  {
    dword_60C92F00 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C92F04);
  }
  if ( !v3 )
    return 0;
  if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C92F00) != 1 )
    return 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 != (*(int (**)(void))(dword_60C92FC8 + 8))() )
    return 0;
  v7 = (int *)(a1 + 7012);
  v6 = FIELD_U32(a1, 7012);
  if ( v6 )
  {
    v8 = v6 - 1;
    *v7 = v8;
    if ( v8 )
      return 0;
  }
  v9 = FIELD_U32(a1, 7028);
  if ( v9 < 2 )
  {
    v11 = &dword_60AF353C;
    goto LABEL_16;
  }
  if ( v9 == 2 )
  {
    v11 = &dword_60AF3390;
    goto LABEL_16;
  }
  if ( v9 == 3 )
  {
    v10 = 45;
    if ( FIELD_F32(a1, 108) < FIELD_F32(dword_60CC6484, 116) )
    {
LABEL_19:
      *v7 = v10;
      return 0;
    }
    v11 = &dword_60AF34D8;
LABEL_16:
    if ( (unsigned int)sub_600085D0(ActorMgr__instance, *v11) < FIELD_U32(a1, 6996) )
    {
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C92E90);
      return 1;
    }
    v10 = ((140 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 140;
    goto LABEL_19;
  }
  return 0;
}
