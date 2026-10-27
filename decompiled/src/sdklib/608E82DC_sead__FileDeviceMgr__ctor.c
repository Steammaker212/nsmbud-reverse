/* sead__FileDeviceMgr__ctor
 * address: 0x608E82DC   size: 204   group: sdklib
 * sym: sead::FileDeviceMgr::FileDeviceMgr() as C2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__FileDeviceMgr__ctor(int a1)
{
  int v2; // r0
  _DWORD *ContainHeap_const; // r5
  unsigned int *v4; // r1
  const char *v5; // r0
  unsigned int v6; // r3
  sead_ListNode *v7; // r6
  void *v9; // [sp+4h] [bp-14h] BYREF

  v2 = a1 + 16;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 20) = v2;
  FIELD_U32(a1, 16) = v2;
  FIELD_U8(a1, 40) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 28) = 0;
  if ( sead__HeapMgr__sInstance )
  {
    ContainHeap_const = sead__HeapMgr__findContainHeap_const(sead__HeapMgr__sInstance, a1);
    v9 = 0;
    nn__fs__QueryMountRomCacheSize((nn__fs *)&v9, v4);
    v5 = (const char *)operator_new_8DE2C8((unsigned int)v9, (int)ContainHeap_const, 8);
    FIELD_U32(a1, 36) = v5;
    nn__fs__MountRom((nn__fs *)"content", v5, v9, v6);
    v7 = (sead_ListNode *)operator_new_8DE25C(0x54u, ContainHeap_const, 4);
    sub_608E8A4C(v7, ContainHeap_const);
    FIELD_U32(a1, 32) = v7;
    sub_608E83B4((sead_ListNode *)a1, v7, &off_60C5CB30);
    FIELD_U32(a1, 28) = FIELD_U32(a1, 32);
  }
  return a1;
}
