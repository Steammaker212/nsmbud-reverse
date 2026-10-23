/* sub_601BDBE0
 * address: 0x601BDBE0   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601BDBE0(_DWORD *a1)
{
  char v2; // r12
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r0
  StateMgr *v6; // r5
  StateBase *CurrentState; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r5
  StateMethodExecuter *result; // r0
  int v12; // r2
  int v13; // r3
  bool v14; // vf
  int v15; // r2
  _DWORD *v16; // r5
  int v17; // r0
  int v18; // r1
  int v19; // r1

  if ( sub_601C5EEC(a1) == 1 )
    goto LABEL_15;
  v3 = a1;
  while ( 1 )
  {
    v3 = (_DWORD *)v3[69];
    if ( !v3 )
      break;
    if ( (*(int (__fastcall **)(_DWORD *))(*v3 + 92))(v3) == 1 )
    {
      v4 = 0;
      goto LABEL_7;
    }
  }
  v4 = 1;
  v3 = 0;
LABEL_7:
  if ( ((unsigned int)&dword_60C8AB28 & ~(1612438588 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AB28) )
  {
    dword_60C8AB24 = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C8AB28);
  }
  v5 = 0;
  if ( !v4 )
  {
    v5 = (*(int (__fastcall **)(_DWORD *, int *))*v3)(v3, &dword_60C8AB24);
    if ( v5 )
      v5 = (int)v3;
  }
  v6 = (StateMgr *)(v5 + 904);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 904));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C8AD6C + 8))()
    || (v9 = StateMgr__getCurrentState(v6),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
        v10 == (*(int (**)(void))(stru_60C8ADFC + 8))()) )
  {
LABEL_15:
    result = (StateMethodExecuter *)(a1[72] - 1);
    a1[72] = result;
  }
  else
  {
    result = (StateMethodExecuter *)a1[72];
  }
  if ( (int)result < 0 )
  {
    if ( (int)a1[286] >= 1 )
    {
      v12 = a1[284];
      v13 = a1[285];
      v14 = __OFSUB__(v13, v12);
      v15 = v13 - v12;
      if ( v15 < 0 != v14 )
        v15 = a1[285];
      v16 = (_DWORD *)(a1[283] + 60 * v15);
      sub_6019EC34(a1 + 287, v16);
      sub_6019EC34(a1 + 290, v16 + 3);
      a1[293] = v16[6];
      a1[294] = v16[7];
      a1[295] = v16[8];
      a1[296] = v16[9];
      a1[297] = v16[10];
      a1[298] = v16[11];
      v17 = v16[12];
      v18 = v16[13];
      a1[301] = v16[14];
      a1[300] = v18;
      a1[299] = v17;
      v19 = a1[285] + 1;
      if ( v19 >= a1[284] )
        v19 = 0;
      a1[285] = v19;
      --a1[286];
    }
    return sub_601B69F4((int)a1, (StateBase *)&dword_60C8AC40);
  }
  return result;
}
