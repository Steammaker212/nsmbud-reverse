/* sub_607DF208
 * address: 0x607DF208   size: 1120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DF208(int a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r8
  int v5; // r0
  int v6; // r6
  int v7; // r0
  _DWORD *v8; // r7
  int v9; // r5
  int v10; // r5
  char v11; // r12
  void *v12; // r5
  int result; // r0
  sead__SafeString str2; // [sp+8h] [bp-120h] BYREF
  int v15; // [sp+64h] [bp-C4h]
  sead__SafeString str1; // [sp+88h] [bp-A0h] BYREF
  int (__fastcall *v17)(int); // [sp+104h] [bp-24h]

  BootSceneDL_bflyt_ref(a1 + 356);
  sub_608EF6A8(a1);
  v2 = *(_DWORD *)(FIELD_U32(a1, 92) + 156);
  v3 = *(_DWORD *)(v2 + 4 * FIELD_U32(v2, 88) + 68);
  if ( v3 )
    v4 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v3);
  else
    v4 = 1;
  if ( !dword_60C9CCB8 )
  {
    sub_60440688(0);
    v5 = operator_new_8DE2C8(0x30000u, 0, 64);
    sub_6044083C(dword_60C9CCB8, 0, v5, 196608, 0);
  }
  if ( !dword_60C9CC80 )
  {
    sub_6043FA94(0);
    polygon_ctrl_ref(dword_60C9CC80, 0);
  }
  v6 = 1;
  str1.vtable = &sead__SafeStringBase__vtable;
  str1.cstr = "PtclMgr";
  v7 = sead__ExpHeap__create(0, (int)&str1, 0, 4, 1, 0);
  v8 = (_DWORD *)v7;
  if ( v7 )
    v6 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v7);
  sub_60237EA4((int)v8);
  sub_6023816C((_DWORD *)dword_60C8D9DC, v8);
  (*(void (__fastcall **)(_DWORD *))(*v8 + 20))(v8);
  if ( v6 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v6);
  sub_6043B1F8(0);
  nullsub_18();
  str1.vtable = (void *)2;
  str1.cstr = (char *)sub_607DF6F8;
  sub_608EF0F0(&str2, &str1);
  v15 = v2;
  v9 = FIELD_U32(a1, 92);
  qmemcpy(&str1, &str2, 0x7Cu);
  v17 = sub_60424B24;
  v10 = sub_608F01B0(v9, &str1);
  if ( ((unsigned int)&dword_60C9BEDC & ~(1618867220 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEDC) )
  {
    dword_60C9BED8 = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60C9BEDC);
  }
  if ( v10 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v10 + 8))(v10, &dword_60C9BED8);
  str1.vtable = &sead__SafeStringBase__vtable;
  str1.cstr = "ActorResLoader";
  v12 = (void *)sead__ExpHeap__create(0, (int)&str1, 0, 4, 1, 0);
  str1.vtable = &sead__SafeStringBase__vtable;
  str1.cstr = "Pack/jyotyuActorPack.pack";
  ArchiveManagerMaybe_loadPack(ArchiveManagerMaybe_instance, (int)&str1, (int)v12);
  str1.vtable = &sead__SafeStringBase__vtable;
  str2.vtable = &sead__SafeStringBase__vtable;
  str1.cstr = "Pa0_jyotyu";
  str2.cstr = "Unit/Pa0_jyotyu.szs";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &str1, &str2, v12, 1);
  str1.vtable = &sead__SafeStringBase__vtable;
  str2.vtable = &sead__SafeStringBase__vtable;
  str1.cstr = "Pa0_jyotyu_chika";
  str2.cstr = "Unit/Pa0_jyotyu_chika.szs";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &str1, &str2, v12, 1);
  str1.vtable = &sead__SafeStringBase__vtable;
  str2.vtable = &sead__SafeStringBase__vtable;
  str1.cstr = "Pa0_jyotyu_setsugen";
  str2.cstr = "Unit/Pa0_jyotyu_setsugen.szs";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &str1, &str2, v12, 1);
  str1.vtable = &sead__SafeStringBase__vtable;
  str2.vtable = &sead__SafeStringBase__vtable;
  str1.cstr = "Pa0_jyotyu_yougan";
  str2.cstr = "Unit/Pa0_jyotyu_yougan.szs";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &str1, &str2, v12, 1);
  str1.vtable = &sead__SafeStringBase__vtable;
  str2.vtable = &sead__SafeStringBase__vtable;
  str1.cstr = "Pa0_jyotyu_yougan2";
  str2.cstr = "Unit/Pa0_jyotyu_yougan2.szs";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &str1, &str2, v12, 1);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v12 + 20))(v12);
  LoadProfileArchives(0, 0);
  str1.vtable = &sead__SafeStringBase__vtable;
  str2.vtable = &sead__SafeStringBase__vtable;
  str1.cstr = "Mask";
  str2.cstr = "Mask";
  result = sub_6043B2D8(ResourceMgrRelated_instance, &str1, (int)&str2, 0);
  if ( v4 != 1 )
    return sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v4);
  return result;
}
