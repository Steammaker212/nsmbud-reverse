/* sub_60825A20
 * address: 0x60825A20   size: 2384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60825A20(int a1)
{
  int v2; // r10
  int v3; // r0
  _DWORD *v4; // r11
  int v5; // r8
  int v6; // r5
  int v7; // r7
  int v8; // r0
  int v9; // r5
  int v10; // r7
  int v11; // r5
  char v12; // r12
  int v13; // r6
  int v14; // r5
  char v15; // r12
  int v16; // r5
  char *v17; // r0
  int v18; // r1
  int v19; // r3
  unsigned int v20; // r2
  _BYTE *v21; // r7
  int v22; // r1
  char *v23; // r0
  int v24; // r5
  int v25; // r5
  char v26; // r12
  int v27; // r5
  int v28; // r0
  int v29; // r7
  int v30; // r5
  int v31; // r0
  int v32; // r7
  char *v33; // r0
  int v34; // r1
  int v35; // r7
  unsigned int v36; // r2
  _BYTE *v37; // r6
  int v38; // r3
  int v39; // r1
  char *v40; // r0
  int v41; // r5
  int v42; // r5
  char v43; // r12
  int v44; // r7
  int v45; // r0
  _DWORD *v46; // r5
  int v47; // r6
  _DWORD *CurrentHeap_const; // r0
  void *v49; // r5
  int v50; // r0
  int v51; // r5
  _DWORD v53[32]; // [sp+10h] [bp-128h] BYREF
  int v54[31]; // [sp+90h] [bp-A8h] BYREF
  int (__fastcall *v55)(int); // [sp+10Ch] [bp-2Ch]

  sub_608EF6A8(a1);
  v2 = *(_DWORD *)(FIELD_U32(a1, 92) + 156);
  v3 = v2 + 4 * FIELD_U32(v2, 88);
  v4 = *(_DWORD **)(v3 + 68);
  if ( v4 )
    v5 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, FIELD_U32(v3, 68));
  else
    v5 = 1;
  v6 = sub_6081BA48();
  v7 = sub_608F61B0(4);
  v8 = (*(int (__fastcall **)(_DWORD *))(*v4 + 60))(v4);
  v9 = (*(int (__fastcall **)(_DWORD *, int, int))(*v4 + 24))(v4, v8 - (v7 + v6), 4);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 20))(v4);
  (*(void (__fastcall **)(_DWORD *, int))(*v4 + 28))(v4, v9);
  v54[0] = 2;
  v54[1] = (int)sub_60826474;
  sub_608EF0F0(v53, v54);
  v53[23] = v2;
  v10 = FIELD_U32(a1, 92);
  qmemcpy(v54, v53, sizeof(v54));
  v55 = sub_60819074;
  v11 = sub_608F01B0(v10, v54);
  if ( ((unsigned int)&dword_60CC6BEC & ~(1619155776 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6BEC) )
  {
    dword_60CC6BE8 = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60CC6BEC);
  }
  if ( v11 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v11 + 8))(v11, &dword_60CC6BE8);
  v54[0] = 2;
  v54[1] = (int)sub_608264A0;
  sub_608EF0F0(v53, v54);
  v53[23] = v2;
  v13 = FIELD_U32(a1, 92);
  qmemcpy(v54, v53, sizeof(v54));
  v55 = sub_6081B364;
  v14 = sub_608F01B0(v13, v54);
  if ( ((unsigned int)&dword_60CC6C34 & ~(1619155976 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6C34) )
  {
    dword_60CC6C30 = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60CC6C34);
  }
  if ( v14 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v14 + 8))(v14, &dword_60CC6C30);
  v16 = 0;
  sub_6016A024(0);
  sub_6016A15C((_DWORD *)dword_60C88AC0, 0);
  sub_6081AE48(0);
  FIELD_U32(dword_60CC6C28, 36) = v4[9];
  v54[0] = 2;
  v54[1] = (int)sub_608264CC;
  v17 = (char *)sub_608EF048(v53, v54);
  v53[23] = v2;
  v18 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v19 = dword_60CCEEA4 & 3;
    v20 = dword_60CCEEA4 - 1;
    if ( (dword_60CCEEA4 & 3) != 0 )
    {
      v21 = v17 + 24;
      v16 = 0;
      do
      {
        ++v16;
        *v21 = 1;
        v21 += 20;
      }
      while ( v19 != v16 );
    }
    if ( v20 >= 3 )
    {
      v22 = v18 - v16;
      v23 = &v17[20 * v16 + 84];
      do
      {
        *(v23 - 60) = 1;
        *(v23 - 40) = 1;
        *(v23 - 20) = 1;
        *v23 = 1;
        v23 += 80;
        v22 -= 4;
      }
      while ( v22 );
    }
  }
  v24 = FIELD_U32(a1, 92);
  qmemcpy(v54, v53, sizeof(v54));
  v55 = sub_607DADAC;
  v25 = sub_608F01B0(v24, v54);
  if ( ((unsigned int)&dword_60CC575C & ~(1619156348 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60CC575C) )
  {
    dword_60CC5758 = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60CC575C);
  }
  if ( v25 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v25 + 8))(v25, &dword_60CC5758);
  SoundHeap_ref(v4);
  sub_600236D8(FIELD_U32(a1, 92), v2);
  nullsub_3();
  v27 = 1;
  v54[0] = (int)&sead__SafeStringBase__vtable;
  v54[1] = (int)"ShaderHolder";
  v28 = sead__ExpHeap__create(0, (int)v54, 0, 4, 1, 0);
  v29 = v28;
  if ( v28 )
    v27 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v28);
  sub_6044596C(0);
  sub_60445A10((_DWORD *)dword_60C9CD58, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 20))(v29);
  if ( v27 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v27);
  sub_603FC840(0);
  v30 = 1;
  v54[0] = (int)&sead__SafeStringBase__vtable;
  v54[1] = (int)"CoinEditPatternHolder";
  v31 = sead__ExpHeap__create(0, (int)v54, 0, 4, 1, 0);
  v32 = v31;
  if ( v31 )
    v30 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v31);
  sub_603F7DF0(0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 20))(v32);
  if ( v30 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v30);
  v54[0] = 2;
  v54[1] = (int)RumbleMgr_create;
  v33 = (char *)sub_608EF048(v53, v54);
  v53[23] = v2;
  v34 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v35 = dword_60CCEEA4 & 3;
    v36 = dword_60CCEEA4 - 1;
    if ( (dword_60CCEEA4 & 3) != 0 )
    {
      v37 = v33 + 24;
      v38 = 0;
      do
      {
        ++v38;
        *v37 = 1;
        v37 += 20;
      }
      while ( v35 != v38 );
    }
    else
    {
      v38 = 0;
    }
    if ( v36 >= 3 )
    {
      v39 = v34 - v38;
      v40 = &v33[20 * v38 + 84];
      do
      {
        *(v40 - 60) = 1;
        *(v40 - 40) = 1;
        *(v40 - 20) = 1;
        *v40 = 1;
        v40 += 80;
        v39 -= 4;
      }
      while ( v39 );
    }
  }
  v41 = FIELD_U32(a1, 92);
  qmemcpy(v54, v53, sizeof(v54));
  v55 = sub_604569DC;
  v42 = sub_608F01B0(v41, v54);
  if ( ((unsigned int)&dword_60C9CF20 & ~(1619157020 << v43) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF20) )
  {
    dword_60C9CF1C = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60C9CF20);
  }
  if ( v42 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v42 + 8))(v42, &dword_60C9CF1C);
  sub_6040D224(0);
  nullsub_15();
  sub_607F5E28(dword_60CC62E4, v2);
  sub_6040FE90(0);
  Capture_ref((_DWORD *)dword_60C9A68C);
  sub_6042B868(0);
  v44 = 1;
  v54[0] = (int)&sead__SafeStringBase__vtable;
  v54[1] = (int)"Mii__CentralMgr";
  v45 = sead__ExpHeap__create(0, (int)v54, 0, 4, 1, 0);
  v46 = (_DWORD *)v45;
  if ( v45 )
    v44 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v45);
  sub_6042A29C((int)v46);
  MiiWorkHeap_ref((_DWORD *)dword_60C9C0FC);
  v47 = 1;
  sub_6042A6C8(dword_60C9C0FC, 0, 1, v46);
  sub_6042A6C8(dword_60C9C0FC, 1u, 4, v46);
  sub_6042A6C8(dword_60C9C0FC, 2u, 4, v46);
  sub_6042A6C8(dword_60C9C0FC, 3u, 15, v46);
  sub_6042A6C8(dword_60C9C0FC, 4u, 54, v46);
  (*(void (__fastcall **)(_DWORD *))(*v46 + 20))(v46);
  if ( v44 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v44);
  sub_60826878(0);
  SaveMgrThread_ref(dword_60CC6E04, 0);
  v54[0] = (int)&sead__SafeStringBase__vtable;
  v54[1] = (int)"PlayReportMgr";
  CurrentHeap_const = (_DWORD *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  v49 = (void *)sead__ExpHeap__tryCreate(0, (int)v54, CurrentHeap_const, 4, 1, 0);
  sub_6074E7F8((int)v49);
  sub_6074E888(dword_60CBEA44, 53, v49);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v49 + 20))(v49);
  sub_604085B4(0);
  sub_60406290(0);
  sub_60406A28((_DWORD *)dword_60C9A1E0);
  sub_6040B798(0);
  ExcelOR_MiiTexAnmData_NX_exbin_ref(0);
  v54[0] = (int)&sead__SafeStringBase__vtable;
  v54[1] = (int)"BgmCacheMgr";
  v50 = sead__ExpHeap__create(0, (int)v54, 0, 4, 1, 0);
  v51 = v50;
  if ( v50 )
    v47 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v50);
  sub_60819FC8(0);
  sub_608199F0(0);
  BackgroundLoadMgrThread_ref(dword_60CC6BF4, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v51 + 20))(v51);
  if ( v47 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v47);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 20))(v4);
  if ( v5 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v5);
  return sub_607DF9E4();
}
