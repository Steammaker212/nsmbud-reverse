/* sub_600082CC
 * address: 0x600082CC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600082CC(void *this, ActorBuildInfo *buildInfo, char a3)
{
  int porfileId; // r0
  bool v7; // zf
  _DWORD *v8; // r2
  int v9; // r1
  int v10; // r6
  int v11; // r5
  sead__SafeString v13; // [sp+8h] [bp-18h] BYREF

  porfileId = FIELD_U32(FIELD_U32(buildInfo, 0xC), 0x8);
  if ( porfileId == 444 )
    goto LABEL_7;
  v7 = porfileId == 443;
  if ( porfileId != 443 )
    v7 = porfileId == 855;
  if ( v7 || porfileId == 856 )
  {
LABEL_7:
    v13.vtable = &sead__SafeStringBase__vtable;
    v13.cstr = "PlayerHeap";
    v8 = *((_DWORD **)this + 4);
  }
  else
  {
    v13.vtable = &sead__SafeStringBase__vtable;
    v13.cstr = "ActorHeap";
    v8 = *((_DWORD **)this + 5);
  }
  v9 = sub_608F882C(0, (int)&v13, v8, 4, 1, 0);
  if ( !v9 )
    return 0;
  *((_DWORD *)this + 6798) = *((_DWORD *)this + 6796) | (*((_DWORD *)this + 6794) << 22);
  *((_BYTE *)this + 27196) = a3;
  v10 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v9);
  v11 = ((int (__fastcall *)(ActorBuildInfo *))FIELD_U32(FIELD_U32(buildInfo, 0xC), 0x4))(buildInfo);
  sub_60008BC8((unsigned int *)this + 6792, v11);
  if ( v10 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v10);
  return v11;
}
