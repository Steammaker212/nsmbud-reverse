/* CharacterSelectPosTmpHeap2_ref
 * address: 0x603FE670   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CharacterSelectPosTmpHeap2_ref(int a1)
{
  int v2; // r8
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int *v7; // r5
  unsigned int v8; // r9
  int result; // r0
  int v10; // r4
  int CurrentHeap_const; // r0
  int v12; // r0
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r2
  int v16; // r1
  int v17; // r3
  int v18; // [sp+20h] [bp-188h]
  int *v19; // [sp+24h] [bp-184h]
  _BYTE v20[92]; // [sp+28h] [bp-180h] BYREF
  unsigned int v21; // [sp+84h] [bp-124h] BYREF
  _DWORD v22[46]; // [sp+88h] [bp-120h] BYREF
  _DWORD v23[4]; // [sp+140h] [bp-68h] BYREF
  _DWORD v24[3]; // [sp+150h] [bp-58h] BYREF
  _DWORD v25[3]; // [sp+15Ch] [bp-4Ch] BYREF
  _DWORD v26[3]; // [sp+168h] [bp-40h] BYREF
  _DWORD v27[13]; // [sp+174h] [bp-34h] BYREF

  v27[0] = 375;
  v27[1] = 460;
  v27[2] = 29;
  v22[0] = &sead__SafeStringBase__vtable;
  v22[1] = "CharacterSelectPosTmpHeap2";
  v2 = 0;
  FIELD_U32(a1, 239128) = sub_608F8808(5529600, v22, 0, 4, 1, 0);
  v26[0] = 0;
  v26[1] = -1087163597;
  v26[2] = 0;
  v25[0] = 1017370378;
  v25[1] = 1017370378;
  v25[2] = 1017370378;
  v3 = FIELD_U32(dword_60C9C0FC, 1512);
  v4 = FIELD_U32(dword_60C9C0FC, 1516);
  v24[0] = FIELD_U32(dword_60C9C0FC, 1508);
  v24[1] = v3;
  v24[2] = v4;
  v5 = FIELD_U32(dword_60C9C0FC, 1520);
  v6 = FIELD_U32(dword_60C9C0FC, 1524);
  v19 = (int *)(a1 + 239128);
  v23[2] = FIELD_U32(dword_60C9C0FC, 1528);
  v23[1] = v6;
  v23[0] = v5;
  v7 = (int *)(a1 + 2856);
  v18 = dword_60C9A68C;
  do
  {
    v8 = sub_60834674(v2);
    if ( HIBYTE(v8) == 6 )
    {
      result = -655;
      *(v7 - 655) = 0;
    }
    else
    {
      v10 = sead__HeapMgr__sInstance;
      CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
      sub_6042C4DC(v7 - 652, CurrentHeap_const, &unk_60B01680);
      v12 = sead__HeapMgr__getCurrentHeap_const(v10);
      sub_6042C4DC(v7 + 2, v12, v27);
      *(v7 - 654) = v8;
      sub_6042BD4C(v7 - 206, v7 - 652);
      v13 = operator_new(0x4C8u);
      *v7 = sub_60436A4C(v13);
      sub_604186F8(v22);
      sub_6042A9E8(dword_60C9C0FC, v22, 4);
      v21 = v8;
      sub_6042F294(v20, &v21);
      qmemcpy(v22, v20, 0x5Cu);
      v14 = sub_608346E0(HIBYTE(v8), v21 & 0xFFFFFF);
      v27[3] = 4;
      v15 = 0;
      v16 = FIELD_U32(dword_60C9C0FC, 960);
      if ( FIELD_U32(dword_60C9C0FC, 956) > v14 )
        v16 += 72 * v14;
      v17 = FIELD_U32(v16, 4);
      if ( *(_DWORD *)v17 <= 1u && !FIELD_U8(v17, 189) )
        v15 = FIELD_U32(v17, 4);
      sub_60436FEC((_DWORD *)*v7, (int)v22, v15, 4, v14, *v19);
      *(v7 - 655) = 1;
      sub_604106A4(v18, v7 - 648, *v7, v7 - 206, v26, v25, 0);
      result = sub_6041046C(v18, v7 + 6, v7[448], v24, v23, 0);
    }
    ++v2;
    v7 += 1106;
  }
  while ( v2 != 54 );
  return result;
}
