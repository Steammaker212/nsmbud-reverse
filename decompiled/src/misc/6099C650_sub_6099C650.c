/* sub_6099C650
 * address: 0x6099C650   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099C650(int a1, unsigned int a2, int a3)
{
  unsigned int v4; // r11
  int v6; // r7
  int v7; // r4
  int v8; // r8
  void (__fastcall ***v9)(_DWORD, int *); // r0
  bool v10; // zf
  int v11; // r5
  int v12; // r9
  int v13; // lr
  int v14; // r12
  sead_ListNode *v15; // r0
  int v16; // r3
  sead_ListNode *v17; // r2
  int v18; // r1
  unsigned int v19; // r6
  sead_ListNode *previous; // r11
  unsigned int next; // r1
  _DWORD *v22; // r1
  int *v23; // r8
  sead_ListNode *v24; // r1
  _DWORD *v25; // r1
  void (__fastcall ***v26)(_DWORD, int *); // r0
  bool v27; // zf
  int v29; // [sp+4h] [bp-54h]
  int v30; // [sp+Ch] [bp-4Ch]
  int v31; // [sp+1Ch] [bp-3Ch]
  int v32; // [sp+20h] [bp-38h] BYREF
  unsigned int v33; // [sp+24h] [bp-34h]
  int v34; // [sp+28h] [bp-30h]
  int v35; // [sp+2Ch] [bp-2Ch]
  int v36; // [sp+30h] [bp-28h]

  v4 = a2;
  v6 = a2;
  v7 = a3;
  if ( a2 <= 4 )
    v6 = 4;
  if ( a3 < 0 )
    v7 = -a3;
  v8 = v7 - 1;
  v9 = (void (__fastcall ***)(_DWORD, int *))sead__HeapMgr__sInstance;
  if ( ((v7 - 1) & v7) != 0 )
  {
    v10 = sead__HeapMgr__sInstance == 0;
    v11 = 0;
    if ( sead__HeapMgr__sInstance )
    {
      v9 = *(void (__fastcall ****)(_DWORD, int *))(sead__HeapMgr__sInstance + 8);
      v10 = v9 == 0;
    }
    if ( !v10 )
    {
      v32 = a1;
      v33 = a2;
      v34 = a3;
      v35 = v6;
      v36 = v7;
      (**v9)(v9, &v32);
    }
    return v11;
  }
  v31 = sead__HeapMgr__sInstance;
  v12 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v12 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  if ( FIELD_U32(a1, 132) >= FIELD_U32(a1, 144) )
    goto LABEL_32;
  v13 = FIELD_U32(a1, 28);
  v14 = FIELD_U32(a1, 128);
  v15 = (sead_ListNode *)(a1 + 124);
  v16 = -v7;
  v17 = 0;
  v18 = v13;
  if ( v14 != a1 + 124 )
  {
    v18 = FIELD_U32(a1, 28);
    v30 = a1;
    v19 = v4;
    v17 = (sead_ListNode *)(v14 - 8);
    v29 = v18;
    while ( 1 )
    {
      previous = FIELD_U32(v17, 0x0);
      v11 = (v18 + v8) & v16;
      if ( (__int64)FIELD_U32(v17, 0x0) - (unsigned int)v11 >= (unsigned int)v6 )
        break;
      v14 = FIELD_U32(v14, 4);
      next = (unsigned int)FIELD_U32(v17, 0x4);
      v17 = (sead_ListNode *)(v14 - 8);
      v18 = (int)previous + next;
      if ( (sead_ListNode *)(v14 - 8) == &v15[-1] )
      {
        v4 = v19;
        a1 = v30;
        v13 = v29;
        v17 = 0;
        goto LABEL_19;
      }
    }
    v4 = v19;
    a1 = v30;
    v13 = v29;
    if ( v11 )
      goto LABEL_23;
  }
LABEL_19:
  v11 = (v18 + v8) & v16;
  if ( (__int64)((unsigned int)(FIELD_U32(a1, 32) + v13) - (unsigned __int64)(unsigned int)v11) < (unsigned int)v6 )
    v11 = 0;
  if ( !v11 )
    goto LABEL_32;
  if ( v17 )
  {
LABEL_23:
    v22 = *(_DWORD **)(a1 + 136);
    v23 = 0;
    if ( v22 )
    {
      v23 = *(int **)(a1 + 136);
      FIELD_U32(a1, 136) = *v22;
    }
    v23[3] = 0;
    v23[1] = 0;
    *v23 = 0;
    v23[2] = 0;
    v24 = (sead_ListNode *)(v23 + 2);
    v15 = v17 + 1;
    goto LABEL_29;
  }
  v25 = *(_DWORD **)(a1 + 136);
  v23 = 0;
  if ( v25 )
  {
    v23 = *(int **)(a1 + 136);
    FIELD_U32(a1, 136) = *v25;
  }
  v23[3] = 0;
  v23[1] = 0;
  *v23 = 0;
  v23[2] = 0;
  v24 = (sead_ListNode *)(v23 + 2);
LABEL_29:
  sead__ListNode__insertFront(v15, v24);
  ++FIELD_U32(a1, 132);
  if ( v23 )
  {
    *v23 = v11;
    v23[1] = v6;
    if ( !v12 )
      return v11;
    goto LABEL_37;
  }
LABEL_32:
  v26 = (void (__fastcall ***)(_DWORD, int *))v31;
  v11 = 0;
  v27 = v31 == 0;
  if ( v31 )
  {
    v26 = *(void (__fastcall ****)(_DWORD, int *))(v31 + 8);
    v27 = v26 == 0;
  }
  if ( !v27 )
  {
    v32 = a1;
    v33 = v4;
    v34 = a3;
    v35 = v6;
    v36 = v7;
    (**v26)(v26, &v32);
  }
  if ( v12 )
LABEL_37:
    sead__CriticalSection__unlock(v12);
  return v11;
}
