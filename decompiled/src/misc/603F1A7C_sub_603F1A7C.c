/* sub_603F1A7C
 * address: 0x603F1A7C   size: 3080   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F1A7C(int a1)
{
  int v2; // r5
  int v3; // r9
  int Area; // r0
  int v5; // r0
  int v6; // r4
  int v7; // r0
  int v8; // r2
  unsigned __int8 v9; // r1
  int v10; // r7
  unsigned __int8 *v11; // r0
  int v12; // r7
  int v13; // r0
  int v14; // r6
  int v15; // r2
  int v16; // r7
  int v17; // r0
  int v18; // r6
  int v19; // r7
  int v20; // r0
  int v21; // r6
  int v22; // r7
  int v23; // r0
  int v24; // r6
  int v25; // r7
  int v26; // r0
  int v27; // r6
  int v28; // r7
  int v29; // r0
  int v30; // r6
  int v31; // r7
  int v32; // r0
  int v33; // r6
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r7
  int v38; // r0
  int v39; // r6
  int v40; // r7
  int v41; // r0
  int v42; // r6
  int v43; // r7
  int v44; // r0
  int v45; // r6
  int v46; // r4
  int v47; // r7
  int v48; // r0
  int v49; // r6
  int v50; // r7
  int v51; // r0
  int v52; // r6
  int v53; // r7
  int v54; // r0
  int v55; // r6
  int result; // r0
  int (**v57)(); // [sp+8h] [bp-28h] BYREF
  const char *v58; // [sp+Ch] [bp-24h]

  FIELD_U32(dword_60CC6D78, 32) = 5;
  v2 = LevelInfo_instance;
  sub_6040D310(LevelInfo_instance);
  v3 = FIELD_U32(v2, 24);
  Area = Level_getArea(Level_instance, FIELD_U8(v2, 18));
  sub_60727620(Area, FIELD_U8(v2, 20), a1 + 1812);
  v5 = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  FIELD_U32(a1, 1828) = 0;
  FIELD_U32(a1, 1828) = *(_WORD *)(FIELD_U32(v5, 8) + 8) & 1;
  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
  {
    v6 = LevelInfo_instance;
    v7 = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
    v8 = FIELD_U32(v7, 148);
    v9 = 1;
    if ( v8 >= 1 )
    {
      v10 = 0;
      v11 = (unsigned __int8 *)(FIELD_U32(v7, 28) + 13);
      while ( *v11 != FIELD_U8(v6, 20) || !v11[6] )
      {
        ++v10;
        v11 += 24;
        if ( v10 >= v8 )
          goto LABEL_9;
      }
      v9 = (v11[6] - 1) | 1;
    }
LABEL_9:
    FIELD_U32(a1, 1864) = v9 >> 1;
  }
  v12 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "AreaLayerMgr";
  v13 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v14 = v13;
  if ( v13 )
    v12 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v13);
  sub_603F1020(0);
  sub_603F1364(0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 20))(v14);
  if ( v12 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v12);
  v15 = FIELD_U8(v2, 18);
  if ( v3 == 3 )
  {
    sub_607299E8(EventMgr__instance, 0, v15);
    sub_605825E0(dword_60CAF15C);
    sub_603F55B8(dword_60C99D88);
    sub_60253F24(dword_60C8DFBC);
  }
  else
  {
    sub_607299E8(EventMgr__instance, 1, v15);
  }
  sub_60582614(dword_60CAF15C);
  sub_60024298();
  sub_60787AF4(PlayerMgr_instance, FIELD_U8(v2, 18), FIELD_U8(v2, 19));
  v16 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "BgTexMgrInstance";
  v17 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v18 = v17;
  if ( v17 )
    v16 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v17);
  sub_60721380(0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 20))(v18);
  if ( v16 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v16);
  v19 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "BgInstance";
  v20 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v21 = v20;
  if ( v20 )
    v19 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v20);
  TileMgr_createInstance(0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 20))(v21);
  if ( v19 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v19);
  v22 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "BgScrollMgr";
  v23 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v24 = v23;
  if ( v23 )
    v22 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v23);
  sub_607FBD40(0);
  sub_607FC034(
    dword_60CC6484,
    FIELD_U8(v2, 18),
    FIELD_U8(v2, 19),
    FIELD_U8(v2, 20));
  (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 20))(v24);
  if ( v22 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v22);
  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
    sub_606E8DFC(dword_60CBC000);
  sub_60465CD4(0);
  sub_603EDCD4(0);
  AreaRumbleMgr_createInstance(0);
  sub_6000B41C(0);
  v25 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "BgPrepare";
  v26 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v27 = v26;
  if ( v26 )
    v25 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v26);
  sub_60711A78(TileMgr_instance);
  (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 20))(v27);
  if ( v25 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v25);
  sub_607293D4(dword_60CBD8A4);
  v28 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "MaskMgr";
  v29 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v30 = v29;
  if ( v29 )
    v28 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v29);
  MaskManager_ctor(MaskMgr_instance);
  (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 20))(v30);
  if ( v28 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v28);
  v31 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "BgActorMgr";
  v32 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v33 = v32;
  if ( v32 )
    v31 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v32);
  sub_607189B4(dword_60CBD25C);
  (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 20))(v33);
  if ( v31 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v31);
  sub_605E82DC(dword_60CB1BE4, FIELD_U8(v2, 18), FIELD_U8(v2, 19), v3 != 3);
  v34 = FIELD_U32(dword_60C99DD4, 764);
  if ( v34 == 3 )
  {
    v36 = operator_new(0x3BF8u);
    FIELD_U32(a1, 2592) = sub_604B2DE4(v36);
    sub_604AF284(0);
  }
  else if ( !v34 )
  {
    v35 = operator_new(0xE50u);
    FIELD_U32(a1, 2596) = sub_6054A4B4(v35);
  }
  sub_603F4EAC(a1);
  if ( FIELD_U32(a1, 2588) )
    DarknessFrame_bflyt_ref();
  if ( FIELD_U32(a1, 2592) )
    P_Arrow_00_ref();
  if ( FIELD_U32(a1, 2596) )
    N_ShadowArrow_00_ref();
  if ( dword_60CA1910 )
    CoinEditMenu_ref();
  v37 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "BgTexMgr";
  v38 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v39 = v38;
  if ( v38 )
    v37 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v38);
  sub_60721780(dword_60CBD85C, FIELD_U8(v2, 18));
  (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 20))(v39);
  if ( v37 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v37);
  v40 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "FragmentMgr";
  v41 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v42 = v41;
  if ( v41 )
    v40 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v41);
  FragmentUnitHeap_ref(dword_60C99CDC, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 20))(v42);
  if ( v40 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v40);
  sub_603772C4((_DWORD *)dword_60C96478);
  v43 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "TouchDrcMgr";
  v44 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v45 = v44;
  if ( v44 )
    v43 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v44);
  sub_606E8F68(dword_60CBC000);
  (*(void (__fastcall **)(int))(*(_DWORD *)v45 + 20))(v45);
  if ( v43 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v43);
  v46 = dword_60C99D6C;
  sub_604E20DC(dword_60C99D6C + 16);
  sub_604E20DC(v46 + 5768);
  sub_604E20DC(v46 + 11520);
  sub_604E20DC(v46 + 17272);
  sub_604E20DC(v46 + 23024);
  sub_604E20DC(v46 + 28776);
  v47 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "ParentTagMgr";
  v48 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v49 = v48;
  if ( v48 )
    v47 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v48);
  sub_606B34A4(0);
  sub_606B35AC(dword_60CBA43C);
  (*(void (__fastcall **)(int))(*(_DWORD *)v49 + 20))(v49);
  if ( v47 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v47);
  sub_60009D74(EnemyCounterMaybe_instance);
  if ( v3 == 3 )
  {
    sub_6000588C((int *)dword_60C7B3F8);
  }
  else
  {
    sub_600042A8(dword_60C7B3F8);
    sub_606E8D80(dword_60CBC000);
  }
  v50 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "GrassFlower";
  v51 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v52 = v51;
  if ( v51 )
    v50 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v51);
  sub_60716A00(TileMgr_instance);
  (*(void (__fastcall **)(int))(*(_DWORD *)v52 + 20))(v52);
  if ( v50 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v50);
  sub_60377564(dword_60C96478);
  v53 = 1;
  v57 = &sead__SafeStringBase__vtable;
  v58 = "DistantViewMgr";
  v54 = sead__ExpHeap__create(0, (int)&v57, 0, 4, 1, 0);
  v55 = v54;
  if ( v54 )
    v53 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v54);
  sub_60231338(0);
  sub_6023160C(dword_60C8D904, FIELD_U8(v2, 18), FIELD_U8(v2, 20), (float *)(a1 + 1812));
  (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 20))(v55);
  if ( v53 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v53);
  v57 = &sead__SafeStringBase__vtable;
  v58 = "DialogHeap";
  FIELD_U32(a1, 1840) = sub_608F8808(0x4000, &v57, 0, 4, 1, 0);
  result = sub_608EF6A8(a1);
  FIELD_U8(a1, 194) = 1;
  return result;
}
