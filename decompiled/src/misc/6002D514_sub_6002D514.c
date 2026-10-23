/* sub_6002D514
 * address: 0x6002D514   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6002D514(int a1)
{
  int v2; // r0
  unsigned __int16 *v3; // r6
  int v4; // r0
  int v5; // r5
  unsigned int v6; // r1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r5
  char v12; // r12
  StateBase *CurrentState; // r0
  int v14; // r5
  int v15; // r0
  bool v16; // zf
  int v17; // r0
  unsigned int v18; // r1
  int v19; // r0
  int v20; // r4
  char v21; // r12

  v3 = (unsigned __int16 *)(a1 + 6276);
  v2 = FIELD_U16(a1, 6276);
  if ( v2 == *((unsigned __int8 *)v3 + 1155) || v2 == FIELD_U8(a1, 7432) )
  {
    v5 = a1 + 7096;
    v4 = FIELD_U32(a1, 7096);
    v6 = FIELD_U32(v4, 24);
    v7 = FIELD_U32(v4, 28);
    if ( v6 > 1 )
      v7 += 4;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v7 + 4));
    v8 = *(_DWORD *)(*(_DWORD *)v5 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 24) > 1u )
      v8 += 4;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
    v9 = *(_DWORD *)(*(_DWORD *)v5 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 24) > 2u )
      v9 += 8;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v9 + 4));
    v10 = *(_DWORD *)(*(_DWORD *)v5 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 24) > 2u )
      v10 += 8;
    *(_DWORD *)(*(_DWORD *)v10 + 24) = 1065353216;
  }
  v11 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7320));
  if ( ((unsigned int)&dword_60C7FBF4 & ~(1610798588 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FBF4) )
  {
    dword_60C7FBF0 = (int)&off_60BC1FE8;
    _cxa_guard_release(&dword_60C7FBF4);
  }
  if ( v11 && (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C7FBF0) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v11 + 6084));
    v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v15 = (*(int (**)(void))(dword_60C80900 + 8))();
    v16 = v14 == v15;
    if ( v14 == v15 )
      v16 = *v3 == 0;
    if ( v16 )
    {
      v17 = FIELD_U32(a1, 7096);
      v18 = FIELD_U32(v17, 24);
      v19 = FIELD_U32(v17, 28);
      if ( v18 > 1 )
        v19 += 4;
      if ( (*(_BYTE *)(*(_DWORD *)v19 + 28) & 0x20) != 0 )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FAE0);
        v20 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7324));
        if ( ((unsigned int)&dword_60C7FC04 & ~(1610798876 << v21) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FC04) )
        {
          dword_60C7FC00 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C7FC04);
        }
        if ( v20 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v20)(v20, &dword_60C7FC00) == 1 )
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v20 + 192))(v20, &dword_60C7FCD4);
        }
      }
    }
  }
}
