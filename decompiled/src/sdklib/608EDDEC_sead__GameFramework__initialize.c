/* sead__GameFramework__initialize
 * address: 0x608EDDEC   size: 444   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__GameFramework__initialize(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r5
  _DWORD *v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r6
  int (**v13)(); // [sp+8h] [bp-20h] BYREF
  const char *v14; // [sp+Ch] [bp-1Ch]

  sead__Framework__initialize(a1);
  v1 = *(_DWORD **)dword_60CCEEAC;
  v2 = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)dword_60CCEEAC + 64))(*(_DWORD *)dword_60CCEEAC, 4);
  v3 = 1;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "sead__SystemManagers";
  v4 = (_DWORD *)sead__ExpHeap__create(v2, (int)&v13, v1, 4, 1, 0);
  v5 = (*(int (__fastcall **)(_DWORD *, int))(*v4 + 64))(v4, 4);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "sead__ResourceMgr";
  v6 = sead__ExpHeap__create(v5, (int)&v13, v4, 4, 1, 0);
  v7 = v6;
  if ( v6 )
    v3 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v6);
  sead__ResourceMgr__createInstance(v7);
  (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7);
  if ( v3 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v3);
  v8 = (*(int (__fastcall **)(_DWORD *, int))(*v4 + 64))(v4, 4);
  v9 = 1;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "sead__FileDeviceMgr";
  v10 = sead__ExpHeap__create(v8, (int)&v13, v4, 4, 1, 0);
  v11 = v10;
  if ( v10 )
    v9 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v10);
  sead__FileDeviceMgr__createInstance(v11);
  (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11);
  if ( v9 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v9);
  return (*(int (__fastcall **)(_DWORD *))(*v4 + 20))(v4);
}
