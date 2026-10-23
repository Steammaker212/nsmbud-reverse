/* sub_6081F2E0
 * address: 0x6081F2E0   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F2E0(int a1)
{
  int result; // r0
  _BYTE *v3; // r1
  int *v4; // r5
  int v5; // r0
  int v6; // r11
  int v7; // r5
  int v8; // r6
  int v9; // r9
  int v10; // r0
  unsigned int v11; // r4
  int v12; // r8
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r0
  int v16; // [sp+10h] [bp-170h]
  _BYTE *v17; // [sp+14h] [bp-16Ch]
  _DWORD *v18; // [sp+1Ch] [bp-164h]
  _BYTE v19[96]; // [sp+28h] [bp-158h] BYREF
  _DWORD v20[46]; // [sp+88h] [bp-F8h] BYREF
  unsigned int v21; // [sp+140h] [bp-40h] BYREF
  int v22[3]; // [sp+144h] [bp-3Ch] BYREF
  int v23[12]; // [sp+150h] [bp-30h] BYREF

  v3 = (_BYTE *)(a1 + 98529);
  result = FIELD_U8(a1, 98529);
  if ( !result )
  {
    v17 = v3;
    v4 = (int *)(a1 + 98532);
    (*(void (__fastcall **)(int))(*(_DWORD *)*v4 + 44))(*v4);
    if ( FIELD_U32(a1, 98532) )
      v5 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, *v4);
    else
      v5 = 1;
    v16 = v5;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v23[0] = 0;
    v23[1] = -1087163597;
    v23[2] = 0;
    v22[0] = 1017370378;
    v22[1] = 1017370378;
    v22[2] = 1017370378;
    v9 = dword_60C99DD4 + 272;
    if ( !dword_60C99DD4 )
      v9 = dword_60C99DEC + 16;
    v10 = a1 + 232;
    v11 = 0;
    v12 = v10 + 98304;
    v18 = (_DWORD *)dword_60C9A68C;
    do
    {
      v13 = v9 + v6;
      if ( *(_BYTE *)(v9 + v6 + 20) )
      {
        if ( FIELD_U32(v13, 32) == 6 )
        {
          v14 = FIELD_U32(v13, 44);
          if ( v14 >> 25 <= 2 )
          {
            v21 = v14;
            v15 = operator_new(0x4C8u);
            *(_DWORD *)(v12 + 4 * v11) = sub_60436A4C(v15);
            sub_604186F8((int)v20);
            sub_6042A9E8(dword_60C9C0FC, v20, 1u);
            sub_6042F294(v19, &v21);
            qmemcpy(v20, v19, 0x5Cu);
            sub_60436B70(*(_DWORD **)(v12 + 4 * v11), v20, 1u, v11, 0);
            sub_6042C56C();
            sub_604106A4(v18, v12 + v8 + 3328, *(_DWORD *)(v12 + 4 * v11), v12 + v7 + 16, v23, v22, 0);
          }
        }
      }
      v6 += 72;
      v8 += 1784;
      v7 += 824;
      ++v11;
    }
    while ( v6 != 288 );
    result = 1;
    *v17 = 1;
    if ( v16 != 1 )
      return sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v16);
  }
  return result;
}
