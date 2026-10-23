/* MiiWorkHeap_ref
 * address: 0x6042AE60   size: 588   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MiiWorkHeap_ref(_DWORD *a1)
{
  unsigned int v2; // r6
  unsigned int i; // r9
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r5
  int v7; // r1
  unsigned int v8; // r7
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int *v13; // r2
  _DWORD *v14; // r1
  int v15; // r0
  int *v16; // r2
  _DWORD *v17; // r1
  int CurrentHeap_const; // [sp+14h] [bp-16Ch]
  _DWORD v20[13]; // [sp+1Ch] [bp-164h] BYREF
  char v21; // [sp+51h] [bp-12Fh]
  char v22; // [sp+52h] [bp-12Eh]
  int (**v23)(); // [sp+A8h] [bp-D8h] BYREF
  const char *v24; // [sp+ACh] [bp-D4h]
  int v25; // [sp+104h] [bp-7Ch]
  int v26; // [sp+108h] [bp-78h]
  int v27; // [sp+10Ch] [bp-74h]
  int v28; // [sp+110h] [bp-70h]
  int v29; // [sp+114h] [bp-6Ch]

  CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  sub_6042B0CC(a1);
  sub_6042ED28(a1[181]);
  v2 = 0;
  for ( i = 0; i != 6; ++i )
  {
    sub_604186F8((int)&v23);
    v20[0] = i;
    if ( i <= 5 )
    {
      v25 = 1;
      v4 = dword_60B022B0[i];
      v26 = dword_60B02290[i];
      v27 = v4;
      v28 = 256;
      v29 = 1;
    }
    sub_60418774((int)v20, (int)&v23);
    v6 = sub_6041AC90((int)v20, v5);
    v21 = 0;
    v22 = 1;
    v8 = sub_6041AC90((int)v20, v7);
    if ( v6 > v8 )
      v8 = v6;
    v9 = sub_608F61B0(4) + v8;
    if ( v9 > v2 )
      v2 = v9;
  }
  v10 = sub_608DE334(0xCu, 0, 4);
  if ( v10 )
  {
    a1[266] = 3;
    a1[267] = v10;
  }
  v11 = sub_608DE334(0xCu, 0, 4);
  if ( v11 )
  {
    a1[268] = 3;
    a1[269] = v11;
  }
  v23 = &sead__SafeStringBase__vtable;
  v24 = "MiiWorkHeap";
  *(_DWORD *)a1[267] = sead__ExpHeap__create(v2, (int)&v23, 0, 4, 1, 0);
  *(_DWORD *)a1[269] = 0;
  v23 = &sead__SafeStringBase__vtable;
  v24 = "MiiWorkHeap";
  v12 = sead__ExpHeap__create(v2, (int)&v23, 0, 4, 1, 0);
  v13 = (int *)a1[267];
  if ( a1[266] > 1u )
    ++v13;
  *v13 = v12;
  v14 = (_DWORD *)a1[269];
  if ( a1[268] > 1u )
    ++v14;
  *v14 = 0;
  v23 = &sead__SafeStringBase__vtable;
  v24 = "MiiWorkHeap";
  v15 = sead__ExpHeap__create(v2, (int)&v23, 0, 4, 1, 0);
  v16 = (int *)a1[267];
  if ( a1[266] > 2u )
    v16 += 2;
  *v16 = v15;
  v17 = (_DWORD *)a1[269];
  if ( a1[268] > 2u )
    v17 += 2;
  *v17 = 0;
  sub_6042C734(a1 + 6);
  return sub_6081F1A0(dword_60CC6D78, CurrentHeap_const);
}
