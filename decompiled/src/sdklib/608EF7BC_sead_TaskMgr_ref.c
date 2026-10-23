/* sead_TaskMgr_ref
 * address: 0x608EF7BC   size: 644   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead_TaskMgr_ref(int a1, _DWORD *a2)
{
  int v2; // r4
  _DWORD *v4; // r1
  int v5; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r5
  int v9; // r6
  int v10; // r7
  int v11; // r4
  unsigned int v12; // r0
  int v13; // r8
  unsigned int i; // r5
  _DWORD *v15; // r2
  int v16; // r0
  void *v18; // [sp+8h] [bp-40h]
  _DWORD *v19; // [sp+Ch] [bp-3Ch]
  int v20; // [sp+10h] [bp-38h]
  _DWORD v22[11]; // [sp+1Ch] [bp-2Ch] BYREF

  v2 = a1;
  *(_DWORD *)a1 = &off_60C5C5C4;
  v20 = a1 + 4;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 4));
  FIELD_U32(v2, 40) = a2[5];
  FIELD_U32(v2, 44) = 0;
  FIELD_U32(v2, 48) = 0;
  FIELD_U32(v2, 60) = 0;
  FIELD_U32(v2, 56) = v2 + 52;
  FIELD_U32(v2, 52) = v2 + 52;
  FIELD_U32(v2, 72) = 0;
  FIELD_U32(v2, 68) = v2 + 64;
  FIELD_U32(v2, 64) = v2 + 64;
  FIELD_U32(v2, 84) = 0;
  FIELD_U32(v2, 80) = v2 + 76;
  FIELD_U32(v2, 76) = v2 + 76;
  FIELD_U32(v2, 96) = 0;
  FIELD_U32(v2, 92) = v2 + 88;
  FIELD_U32(v2, 88) = v2 + 88;
  FIELD_U32(v2, 108) = 0;
  FIELD_U32(v2, 104) = v2 + 100;
  FIELD_U32(v2, 100) = v2 + 100;
  FIELD_U32(v2, 120) = 0;
  FIELD_U32(v2, 116) = v2 + 112;
  FIELD_U32(v2, 112) = v2 + 112;
  FIELD_U8(v2, 140) = 0;
  v2 += 140;
  FIELD_U8(v2, 4) = 0;
  v2 += 4;
  FIELD_U8(v2, 3) = 0;
  FIELD_U8(v2, 2) = 0;
  FIELD_U8(v2, 1) = 0;
  *(_BYTE *)(v2 - 1) = 0;
  *(_BYTE *)(v2 - 2) = 0;
  *(_BYTE *)(v2 - 3) = 0;
  FIELD_U32(v2, 8) = *a2;
  v18 = (void *)(v2 + 16);
  sub_608EEFA8(v2 + 16);
  v19 = a2;
  v4 = a2;
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  v9 = v4[4];
  v10 = v4[5];
  FIELD_U32(v2, 144) = v5;
  FIELD_U32(v2, 148) = v6;
  FIELD_U32(v2, 152) = v7;
  FIELD_U32(v2, 156) = v8;
  FIELD_U32(v2, 160) = v9;
  FIELD_U32(v2, 164) = v10;
  FIELD_U32(v2, 168) = off_60BFA048;
  sead__TreeNode__ctor((_DWORD *)(v2 + 184));
  FIELD_U32(v2, 200) = v2 + 168;
  FIELD_U32(v2, 204) = &sead__SafeStringBase__vtable;
  FIELD_U32(v2, 208) = &byte_60ABC94D;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 168));
  FIELD_U32(v2, 168) = off_60BFA048;
  FIELD_U32(v2, 240) = 0;
  FIELD_U32(v2, 244) = 0;
  FIELD_U32(v2, 228) = 0;
  FIELD_U32(v2, 224) = 0;
  FIELD_U32(v2, 220) = 0;
  FIELD_U32(v2, 216) = 0;
  FIELD_U32(v2, 212) = off_60BFA060;
  FIELD_U32(v2, 236) = 0;
  FIELD_U32(v2, 12) = 0;
  v11 = v2 + 12;
  v12 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v13 = dword_60CCEEA4 - 1;
    for ( i = 0; ; ++i )
    {
      v15 = 0;
      v22[0] = &sead__SafeStringBase__vtable;
      v22[1] = "sead__TaskMgr";
      if ( v12 > i )
        v15 = *(_DWORD **)(dword_60CCEEAC + 4 * i);
      *(_DWORD *)(a1 + 124 + 4 * i) = sead__ExpHeap__create(0, (int)v22, v15, 4, 1, 0);
      if ( v13 == i )
        break;
      v12 = dword_60CCEEA4;
    }
  }
  sub_608EFA68((_DWORD *)a1);
  qmemcpy(v18, (const void *)v19[3], 0x80u);
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 280) = 1;
  FIELD_U32(a1, 268) = v11;
  FIELD_U32(a1, 260) = 0;
  sead__CriticalSection__lock(v20);
  v16 = FIELD_U32(a1, 260);
  if ( v16 )
    sub_608EC97C(v16, v18);
  else
    sub_608F0894(a1, v18, 0);
  sead__CriticalSection__unlock(v20);
  return a1;
}
