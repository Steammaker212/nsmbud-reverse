/* sub_608F0578
 * address: 0x608F0578   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608F0578(int a1, int *a2, int a3)
{
  int v6; // r8
  int v7; // r0
  int v8; // r9
  int v9; // r1
  int v10; // r4
  _DWORD *v11; // r6
  int v12; // r0
  int v13; // r1
  int v14; // r0
  _DWORD v16[3]; // [sp+4h] [bp-34h] BYREF
  int v17; // [sp+10h] [bp-28h] BYREF
  int v18; // [sp+14h] [bp-24h]

  v6 = a1 + 4;
  sead__CriticalSection__lock(a1 + 4);
  v7 = *a2;
  v18 = a2[1];
  v17 = v7;
  v8 = a2[30];
  v9 = *(_DWORD *)(a3 + 4 * FIELD_U32(a3, 20));
  if ( v9 )
    v10 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v9);
  else
    v10 = 1;
  v16[0] = a3;
  v16[1] = a1;
  v16[2] = a2[24];
  v11 = (_DWORD *)sub_6091221C(&v17, v16);
  if ( v10 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v10);
  v12 = v17;
  v13 = v18;
  v11[25] = v8;
  v11[26] = v12;
  v11[27] = v13;
  v14 = a2[23];
  if ( v14 )
    sub_608DEFB0(v14 + 16, v11 + 4);
  sead__CriticalSection__unlock(v6);
  return v11;
}
