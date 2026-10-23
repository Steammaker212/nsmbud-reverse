/* sub_605E2910
 * address: 0x605E2910   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E2910(int a1)
{
  int v1; // r0
  unsigned int v2; // r1
  _DWORD *v3; // r0
  StateMethodExecuter *result; // r0
  int *v5; // r5
  int v6; // r10
  _DWORD *v7; // r2
  _DWORD *v8; // r3
  int *v9; // r6
  int v10; // r0
  _DWORD *v11; // r8
  int v12; // r2
  _DWORD *v13; // r9
  int v14; // r7
  char v15; // r12
  _DWORD *v16; // r7
  int v17; // r1
  bool v18; // cc
  int v19; // r0
  int v20; // r2
  int v21; // r7
  int v22; // r1
  int v23; // r3
  int v24; // r3
  int v25; // r0
  _DWORD *v26; // r3
  int v27; // r4
  _DWORD *v28; // r0
  int *v29; // r1
  int v31; // [sp+18h] [bp-28h]

  v1 = FIELD_U32(a1, 6076);
  v2 = FIELD_U32(v1, 8);
  v3 = *(_DWORD **)(v1 + 12);
  if ( v2 > 1 )
    ++v3;
  result = (StateMethodExecuter *)sub_605EB988(*v3, v2);
  if ( result == (StateMethodExecuter *)1 )
  {
    v5 = (int *)(a1 + 6456);
    result = *(StateMethodExecuter **)(a1 + 6456);
    if ( result )
    {
      v6 = 0;
      v7 = (_DWORD *)(a1 + 6448);
      v8 = (_DWORD *)(a1 + 6452);
      v9 = (int *)(a1 + 6444);
      v31 = ActorMgr__instance + 27168;
      while ( 1 )
      {
        v10 = *v8;
        v11 = v7;
        v12 = *v7;
        v13 = v8;
        if ( v6 + *v8 >= v12 )
          v10 -= v12;
        v14 = ActorMgrRelated_getById(v31, *(_DWORD *)(*v9 + 20 * (v6 + v10)));
        if ( ((unsigned int)&dword_60C7B364 & ~(1616783900 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v14 )
        {
          if ( (**(int (__fastcall ***)(int, int *))v14)(v14, &StageActor_RTTI) == 1 )
          {
            v16 = *(_DWORD **)(v14 + 624);
            if ( v16 )
              break;
          }
        }
        result = (StateMethodExecuter *)*v5;
        ++v6;
        v7 = v11;
        v8 = v13;
        if ( v6 == *v5 )
          return result;
      }
      v16[6] = 0;
      (*(void (__fastcall **)(_DWORD *, int))(*v16 + 16))(v16, a1);
      v16[2] = 0;
      v17 = *v5;
      if ( *v5 > v6 )
      {
        v18 = v6 < 0;
        if ( v6 >= 0 )
          v18 = v17 < 1;
        if ( !v18 )
        {
          if ( --v17 > v6 )
          {
            do
            {
              v19 = *v13;
              v20 = *v11;
              v21 = *v9;
              v22 = v6 + *v13;
              v23 = v22;
              if ( v22 + 1 >= *v11 )
                v23 = v22 - v20;
              v24 = 5 * v23;
              if ( v22 >= v20 )
                v19 -= v20;
              v25 = v6 + v19;
              ++v6;
              v26 = (_DWORD *)(v21 + 4 * v24);
              v25 *= 5;
              v27 = v26[6];
              *(_DWORD *)(v21 + 4 * v25) = v26[5];
              v28 = (_DWORD *)(v21 + 4 * v25);
              v28[1] = v27;
              v28[2] = v26[7];
              v28[3] = v26[8];
              v28[4] = v26[9];
              v17 = *v5 - 1;
            }
            while ( v6 < v17 );
          }
          *v5 = v17;
        }
      }
      if ( v17 )
        v29 = &dword_60CB1AE4;
      else
        v29 = &dword_60CB1AA4;
      return StateMgr__changeState((StateMgr *)(a1 + 6424), (StateBase *)v29);
    }
  }
  return result;
}
