/* sub_60381950
 * address: 0x60381950   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60381950(int a1, int a2)
{
  signed int result; // r0
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6
  unsigned int v9; // r10
  unsigned int v10; // r2
  signed int *v11; // r9
  int v12; // r0
  int *v13; // r1
  int *v14; // r8
  unsigned int v15; // r2
  unsigned int v16; // r3
  int v17; // r2
  int v18; // r12
  unsigned int v19; // r3
  int *v20; // r7
  int v21; // r6
  int v22; // r4
  int v23; // r3
  _DWORD *v24; // r4
  signed int v25; // r5
  int v26; // r7
  int v27; // r4
  int v28; // r5

  result = sub_602A588C(a1);
  if ( result )
    return result;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C969DC + 8))();
  if ( v6 == result )
    return result;
  v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  result = (*(int (**)(void))(dword_60C969FC + 8))();
  if ( v8 == result )
    return result;
  result = FIELD_U32(a1, 2872);
  if ( FIELD_F32(a1, 6372) <= 0.0 )
  {
    result &= 0x10400u;
    if ( result == 1024 )
      return result;
  }
  else if ( (result & 1) != 0 )
  {
    return result;
  }
  v9 = a2 + 1;
  v11 = (signed int *)(a1 + 6300);
  v10 = FIELD_U32(a1, 6300);
  v12 = a2 + 1;
  v14 = (int *)(a1 + 6304);
  v13 = *(int **)(a1 + 6304);
  if ( v10 < a2 + 1 )
    v12 = FIELD_U32(a1, 6300);
  if ( v12 )
  {
    v15 = ~v10;
    v16 = -2 - a2;
    if ( -2 - a2 < v15 )
      v16 = v15;
    if ( (v12 & 1) != 0 )
    {
      v18 = 1;
      v17 = *(unsigned __int8 *)(*v13 + 128);
      if ( v16 == -2 )
        goto LABEL_19;
    }
    else
    {
      v17 = 0;
      v18 = 0;
      if ( v16 == -2 )
        goto LABEL_19;
    }
    v19 = ~v18 - v16;
    v20 = &v13[v18 + 1];
    do
    {
      v21 = *(v20 - 1);
      v22 = *v20;
      v20 += 2;
      v19 -= 2;
      v17 += FIELD_U8(v22, 128) + FIELD_U8(v21, 128);
    }
    while ( v19 );
    do
    {
LABEL_19:
      v23 = *v13++;
      if ( FIELD_U8(v23, 128) )
        FIELD_U32(v23, 120) = v17--;
      --v12;
    }
    while ( v12 );
  }
  v24 = (_DWORD *)(a1 + 6384);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C969DC);
  FIELD_U32(a1, 6380) = 24;
  v25 = a2 + 1;
  *v24 = 1065353216;
  result = *v11;
  if ( *v11 < v9 )
    v25 = *v11;
  if ( v25 )
  {
    v26 = *v14;
    do
    {
      if ( *(_BYTE *)(*(_DWORD *)v26 + 128) )
        sub_60386654(*(_DWORD *)v26 + 12, 1);
      --v25;
      v26 += 4;
    }
    while ( v25 );
    result = *v11;
  }
  if ( (int)v9 < result && result > v9 )
  {
    v27 = result - 1 - a2;
    v28 = *v14 + 4 * v9;
    do
    {
      result = *(_DWORD *)v28;
      if ( *(_BYTE *)(*(_DWORD *)v28 + 128) )
        result = sub_60386654(result + 12, 3);
      --v27;
      v28 += 4;
    }
    while ( v27 );
  }
  return result;
}
