/* TaskHeap_ref
 * address: 0x608EFFD4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TaskHeap_ref(int a1, int a2, int a3)
{
  int v5; // r7
  int v6; // r3
  int v7; // r10
  unsigned int v8; // r8
  unsigned int v9; // r0
  int v10; // r9
  int v11; // r0
  _DWORD **v12; // r0
  int v13; // r0
  _DWORD *v14; // r6
  int v15; // r1
  unsigned int *v16; // r9
  int v17; // t1
  int v18; // r5
  int v19; // r0
  int v20; // r0
  unsigned int v21; // r2
  unsigned int v22; // r1
  int v24; // [sp+10h] [bp-40h]
  int v26; // [sp+20h] [bp-30h]
  int (**v27)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v28; // [sp+28h] [bp-28h]

  FIELD_U32(a2, 20) = FIELD_U32(a3, 88);
  v24 = a1 + 4;
  v5 = dword_60CCEEA4;
  sead__CriticalSection__lock(a1 + 4);
  v6 = a2;
  if ( v5 >= 1 )
  {
    v7 = 0;
    v8 = 0;
    v26 = a2;
    while ( 1 )
    {
      v9 = 0;
      if ( dword_60CCEEA4 > v8 )
        v9 = v8;
      v10 = a3 + 20 * v9;
      v11 = 0;
      if ( FIELD_U8(v10, 26) )
        goto LABEL_19;
      v12 = (_DWORD **)(v10 + 8);
      if ( !FIELD_U32(v10, 8) )
      {
        v13 = FIELD_U32(a3, 92);
        if ( v13 )
          v12 = (_DWORD **)(v13 + v7 + 68);
        else
          v12 = (_DWORD **)(a1 + 4 * v8 + 124);
      }
      v14 = *v12;
      v11 = 0;
      if ( !v14 )
        goto LABEL_19;
      v17 = FIELD_U32(v10, 16);
      v16 = (unsigned int *)(v10 + 16);
      v15 = v17;
      v18 = 1;
      v19 = *(v16 - 1);
      if ( *((_BYTE *)v16 + 9) )
        v18 = -1;
      if ( !v15 || v19 )
        break;
      v20 = (*(int (__fastcall **)(_DWORD *, int))(*v14 + 64))(v14, 4);
      v21 = *v16;
      v6 = v26;
      v22 = v20;
      v11 = 0;
      if ( v22 > *v16 )
      {
        v27 = &sead__SafeStringBase__vtable;
        v28 = "TaskHeap";
        v11 = sead__ExpHeap__create(v22 - v21, (int)&v27, v14, 4, v18, 0);
LABEL_18:
        v6 = v26;
      }
LABEL_19:
      *(_DWORD *)(v6 + v7) = v11;
      v7 += 4;
      --v5;
      ++v8;
      if ( !v5 )
        return sead__CriticalSection__unlock(v24);
    }
    v27 = &sead__SafeStringBase__vtable;
    v28 = "TaskHeap";
    v11 = sead__ExpHeap__create(v19, (int)&v27, v14, 4, v18, 0);
    goto LABEL_18;
  }
  return sead__CriticalSection__unlock(v24);
}
