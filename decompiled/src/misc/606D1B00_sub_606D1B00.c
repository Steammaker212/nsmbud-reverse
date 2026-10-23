/* sub_606D1B00
 * address: 0x606D1B00   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D1B00(int a1)
{
  int v2; // r4
  unsigned int v3; // r5
  unsigned int v4; // r6
  char *v5; // r8
  int v6; // r7
  int ResArchiveById; // r0
  int v8; // r0
  unsigned int v9; // r0
  _DWORD *v10; // r4
  float *v11; // r1
  float v12; // s0
  unsigned int v13; // r11
  float *v14; // r6
  float v15; // s16
  float v16; // s18
  float v17; // s0
  float v18; // s2
  float v19; // r1
  float v20; // r2
  int *v22; // [sp+14h] [bp-4Ch]
  float v23[18]; // [sp+18h] [bp-48h] BYREF

  v2 = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1138163712;
  FIELD_U32(a1, 504) = 1138163712;
  sub_60002B50(a1 + 13192);
  FIELD_U32(a1, 6164) = a1 + 10568;
  v22 = (int *)(a1 + 13208);
  v3 = a1 + 6168;
  v4 = a1 + 6168;
  v5 = &byte_60CBB4DC;
  do
  {
    if ( v2 < 2 )
    {
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      sub_6063916C(v4, ResArchiveById, (unsigned __int8)*v5, (unsigned __int8)v5[1], 0.0, 2);
    }
    else
    {
      if ( *v22 )
        v6 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, *v22);
      else
        v6 = 1;
      v8 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      sub_6063916C(v4, v8, (unsigned __int8)*v5, (unsigned __int8)v5[1], 0.0, 2);
      if ( v6 != 1 )
        sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v6);
    }
    v4 += 1100;
    v5 += 12;
    ++v2;
  }
  while ( v4 < a1 + 10568 );
  v9 = FIELD_U32(a1, 164);
  v10 = (_DWORD *)(a1 + 10812);
  v11 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  v12 = (float)(v9 & 0xFFFFFF);
  v13 = FIELD_U32(a1, 6164);
  v14 = (float *)&dword_60CBB4D4;
  v15 = *v11 + (float)((float)(v12 * v11[1]) * 0.000000059605);
  v16 = v11[2] + (float)((float)(v12 * v11[3]) * 0.000000059605);
  do
  {
    v17 = *v14;
    v18 = v14[1];
    v19 = FIELD_F32(a1, 112);
    v20 = FIELD_F32(a1, 116);
    v23[0] = FIELD_F32(a1, 108);
    v23[2] = v20;
    v23[0] = (float)((float)(v16 * v17) - (float)(v15 * v18)) + v23[0];
    v23[1] = (float)((float)(v16 * v18) + (float)(v15 * v17)) + v19;
    sub_606361F8(v3, v23, (_DWORD *)(a1 + 156));
    v3 += 1100;
    v14 += 3;
    *v10 = FIELD_U32(a1, 164);
    v10 += 164;
  }
  while ( v3 < v13 );
  sub_606D16D0((_DWORD *)a1, a1 + 10568, a1 + 13192, (int)&dword_60CBB504);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 232))(a1);
  FIELD_U32(a1, 76) &= 0xFFFFFFF9;
  return 1;
}
