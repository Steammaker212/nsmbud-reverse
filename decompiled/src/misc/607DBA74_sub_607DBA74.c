/* sub_607DBA74
 * address: 0x607DBA74   size: 1208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607DBA74(_DWORD *result, int a2, int a3, int a4, int a5, int a6)
{
  char v6; // r12
  _DWORD *v7; // r10
  int v8; // r6
  int v9; // r4
  int v10; // r11
  int (__fastcall ***v11)(_DWORD, int *); // r7
  int v12; // r0
  bool v13; // zf
  int *v14; // r11
  int v15; // r8
  int v16; // r0
  unsigned int v17; // r9
  unsigned int v18; // r0
  int v19; // r1
  int v20; // r6
  int v21; // r4
  int v22; // r5
  int v23; // r5
  int v24; // r7
  int v25; // r7
  int *v26; // r1
  int v27; // r5
  int v28; // r0
  int v29; // r3
  int v30; // r2
  int v31; // r6
  int v32; // r3
  int v33; // r4
  int v34; // r0
  _DWORD *v35; // r0
  int v36; // r1
  _DWORD *v37; // r0
  _DWORD *v40; // [sp+Ch] [bp-44h]
  int v41; // [sp+1Ch] [bp-34h]
  _DWORD v42[12]; // [sp+20h] [bp-30h] BYREF

  v41 = a4;
  if ( a4 < 0 )
  {
    *result = 0;
    result[1] = 0;
    return result;
  }
  v40 = result;
  v7 = (_DWORD *)dword_60CCF448;
  v8 = FIELD_U32(dword_60CCF448, 200);
  v9 = dword_60CCF448 + 196;
  if ( v8 == dword_60CCF448 + 196 )
  {
    v11 = 0;
  }
  else
  {
    v10 = FIELD_U32(dword_60CCF448, 208);
    v11 = (int (__fastcall ***)(_DWORD, int *))(v8 - v10);
    while ( 1 )
    {
      if ( ((unsigned int)&dword_60C9CFA8 & ~(1618852608 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFA8) )
      {
        dword_60C9CFA4 = (int)&off_60BFB1D8;
        _cxa_guard_release(&dword_60C9CFA8);
      }
      v12 = (**v11)(v11, &dword_60C9CFA4);
      v13 = v11 == 0;
      if ( v11 )
        v13 = (v12 ^ 1) == 1;
      if ( !v13 )
        break;
      v8 = FIELD_U32(v8, 4);
      v11 = (int (__fastcall ***)(_DWORD, int *))(v8 - v10);
      if ( v8 - v10 == v9 - v7[52] )
      {
        v11 = 0;
        break;
      }
    }
    v7 = (_DWORD *)dword_60CCF448;
  }
  if ( !v7[53] )
    goto LABEL_26;
  v14 = (int *)v7[55];
  while ( 1 )
  {
    v15 = *v14;
    if ( ((unsigned int)&dword_60C8C224 & ~(1618852844 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
    {
      dword_60C8C220 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C8C224);
    }
    v16 = (**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60C8C220);
    if ( !v15 || v16 != 1 )
      goto LABEL_25;
    if ( !v41 )
      break;
    --v41;
LABEL_25:
    if ( ++v14 == (int *)(v7[55] + 4 * v7[53]) )
      goto LABEL_26;
  }
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v15 + 20))(v15) )
  {
LABEL_26:
    *v40 = 0;
    v40[1] = 0;
    return 0;
  }
  v17 = FIELD_U32(v15, 348);
  v18 = v17;
  if ( v17 >= 9 )
    v18 = 0;
  v19 = (int)v11[934 * v18 + 177];
  v20 = v19;
  if ( v19 >= 2 )
    v20 = 2;
  if ( v19 >= 1 )
  {
    v21 = FIELD_U8(v15, 353);
    if ( v21 == 5 )
    {
      v22 = 0;
      do
        sub_607DBF84(a2, v17, v22++, 5, 0);
      while ( v22 < v20 );
    }
    else
    {
      v23 = 0;
      v24 = (int)&v11[934 * v18 + 948];
      do
      {
        sub_607DBF84(a2, v17, v23++, v21, v24);
        v24 += 4;
      }
      while ( v23 < v20 );
    }
  }
  v25 = a2 + 16692;
  sead__CriticalSection__lock(a2 + 16692);
  v26 = (int *)(a2 + 16540);
  v27 = FIELD_U32(a2, 16540);
  v28 = FIELD_U32(a2, 16544);
  if ( v27 >= v28 )
  {
LABEL_44:
    if ( v27 < 1 )
      goto LABEL_63;
    v31 = 0;
    v30 = FIELD_U32(a2, 16552);
    while ( *(_DWORD *)(*(_DWORD *)v30 + 12) )
    {
      ++v31;
      v30 += 4;
      if ( v31 >= v27 )
        goto LABEL_63;
    }
    v32 = 0;
    if ( v27 < v28 )
      v32 = v27 + 1;
    *v26 = v32;
    if ( v28 <= (unsigned int)v31 )
      goto LABEL_63;
  }
  else
  {
    v29 = FIELD_U32(a2, 16540);
    v30 = FIELD_U32(a2, 16552) + 4 * v27;
    while ( *(_DWORD *)(*(_DWORD *)v30 + 12) )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= v28 )
        goto LABEL_44;
    }
    *v26 = v27 + 1;
    if ( v28 <= (unsigned int)v29 )
    {
LABEL_63:
      *v40 = 0;
      v40[1] = 0;
      return (_DWORD *)sead__CriticalSection__unlock(v25);
    }
  }
  v33 = *(_DWORD *)v30;
  if ( !*(_DWORD *)v30 )
    goto LABEL_63;
  FIELD_U32(v33, 12) = FIELD_U32(a2, 16536);
  v34 = FIELD_U32(a2, 16536) + 1;
  if ( FIELD_U32(a2, 16536) == -1 )
    v34 = 1;
  FIELD_U32(a2, 16536) = v34;
  sead__ListNode__insertFront((sead_ListNode *)(a2 + 16556), (sead_ListNode *)(FIELD_U32(a2, 16568) + v33));
  ++FIELD_U32(a2, 16564);
  if ( !sub_607DCAE0(v33, a3, v17, a5, a6) )
  {
    sead__CriticalSection__lock(v25);
    FIELD_U32(v33, 12) = 0;
    v37 = (_DWORD *)(FIELD_U32(a2, 16568) + v33);
    if ( v37[1] || *v37 )
    {
      sead__ListNode__erase(v37);
      --FIELD_U32(a2, 16564);
    }
    sead__CriticalSection__unlock(v25);
    goto LABEL_63;
  }
  sead__CriticalSection__unlock(v25);
  v35 = sub_607DAD38(v42);
  sub_607DAD98(v35, v33);
  result = (_DWORD *)v42[0];
  v36 = v42[1];
  *v40 = v42[0];
  v40[1] = v36;
  return result;
}
