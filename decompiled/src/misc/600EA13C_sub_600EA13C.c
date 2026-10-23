/* sub_600EA13C
 * address: 0x600EA13C   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EA13C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r7
  int v7; // r6
  ActiveCollider *v8; // r5
  ActiveColliderMgr *v9; // r6
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r6
  int v15; // r5
  ActiveCollider *v16; // r5
  ActiveColliderMgr *v17; // r6
  __int64 v18; // kr00_8
  int v19; // r0
  unsigned int v20; // r5
  int v21; // r0
  int result; // r0

  v2 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 1676))(a1, 0);
  v3 = a1[39];
  v4 = a1[40];
  v5 = a1[41];
  v6 = a1[28];
  v7 = a1[29];
  FIELD_U32(v2, 108) = a1[27];
  FIELD_U32(v2, 112) = v6;
  FIELD_U32(v2, 116) = v7;
  v8 = (ActiveCollider *)(v2 + 188);
  FIELD_U32(v2, 156) = v3;
  FIELD_U32(v2, 160) = v4;
  FIELD_U32(v2, 164) = v5;
  FIELD_U8(v2, 8336) = 1;
  v9 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v2 + 188))
    && !ActiveColliderMgr_isInCreateList(v9, v8) )
  {
    ActiveColliderMgr_addToCreateList(v9, v8);
  }
  *(_DWORD *)((*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 1676))(a1, 0) + 6300) = 6;
  v10 = (*(int (__fastcall **)(_DWORD *, int))(*a1 + 1676))(a1, 1);
  v11 = a1[39];
  v12 = a1[40];
  v13 = a1[41];
  v14 = a1[28];
  v15 = a1[29];
  FIELD_U32(v10, 108) = a1[27];
  FIELD_U32(v10, 112) = v14;
  FIELD_U32(v10, 116) = v15;
  v16 = (ActiveCollider *)(v10 + 188);
  FIELD_U32(v10, 156) = v11;
  FIELD_U32(v10, 160) = v12;
  FIELD_U32(v10, 164) = v13;
  FIELD_U8(v10, 8336) = 1;
  v17 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v10 + 188))
    && !ActiveColliderMgr_isInCreateList(v17, v16) )
  {
    ActiveColliderMgr_addToCreateList(v17, v16);
  }
  *(_DWORD *)((*(int (__fastcall **)(_DWORD *, int))(*a1 + 1676))(a1, 1) + 6300) = 6;
  v18 = 3LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  sub_600EA370(a1, HIDWORD(v18));
  v19 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 1676))(a1, 0);
  v20 = (HIDWORD(v18) + 1) % 3u;
  sub_600EA370(v19, v20);
  *(_BYTE *)((*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 1676))(a1, 0) + 8344) = 0;
  v21 = (*(int (__fastcall **)(_DWORD *, int))(*a1 + 1676))(a1, 1);
  sub_600EA370(v21, (v20 + 1) % 3);
  result = (*(int (__fastcall **)(_DWORD *, int))(*a1 + 1676))(a1, 1);
  FIELD_U8(result, 8344) = 0;
  return result;
}
