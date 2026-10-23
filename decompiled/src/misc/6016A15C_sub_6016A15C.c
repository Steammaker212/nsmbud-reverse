/* sub_6016A15C
 * address: 0x6016A15C   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016A15C(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // r1
  _DWORD *v4; // r0
  int v5; // r0
  int v6; // r1
  int result; // r0
  _DWORD v8[2]; // [sp+Ch] [bp-34h] BYREF
  _DWORD v9[2]; // [sp+14h] [bp-2Ch] BYREF
  int (**v10)(); // [sp+1Ch] [bp-24h] BYREF
  const char *v11; // [sp+20h] [bp-20h]
  _DWORD *v12; // [sp+24h] [bp-1Ch]

  v10 = &sead__SafeStringBase__vtable;
  v11 = "CourseSelectCacheMgr";
  a1[427] = sead__ExpHeap__create(188743680, (int)&v10, a2, 4, 1, 0);
  v9[0] = &sead__SafeStringBase__vtable;
  v8[0] = &sead__SafeStringBase__vtable;
  v10 = 0;
  v9[1] = "pack";
  v8[1] = "Pack/cobPack.pack";
  v11 = (const char *)v9;
  v12 = v8;
  if ( a1[4] < a1[5] )
  {
    v3 = (_DWORD *)a1[7];
    v4 = 0;
    if ( v3 )
    {
      a1[7] = *v3;
      v4 = v3;
    }
    v5 = sub_6016B268(v4, &v10);
    v6 = a1[4];
    if ( v6 < a1[5] )
    {
      *(_DWORD *)(a1[6] + 4 * v6) = v5;
      ++a1[4];
    }
  }
  sub_6016A300(a1);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "CourseSelectCacheMgr__CacheHeapA";
  a1[428] = sead__ExpHeap__create(125829120, (int)&v10, (_DWORD *)a1[427], 4, 1, 0);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "CourseSelectCacheMgr__CacheHeapB";
  a1[429] = sead__ExpHeap__create(54525952, (int)&v10, (_DWORD *)a1[427], 4, 1, 0);
  v10 = &sead__SafeStringBase__vtable;
  v11 = "CourseSelectCacheMgr__ActorInstance";
  result = sead__ExpHeap__create(0, (int)&v10, (_DWORD *)a1[427], 4, 1, 0);
  a1[430] = result;
  return result;
}
