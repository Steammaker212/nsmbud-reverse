/* sub_6048CD38
 * address: 0x6048CD38   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6048CD38(int a1)
{
  int v2; // r6
  int v3; // r5
  _DWORD *CurrentHeap_const; // r0
  unsigned int v5; // r8
  int v6; // r7
  void **v7; // r0
  int v8; // r4
  int v9; // r0
  unsigned int result; // r0
  const void *v11; // r9
  unsigned int v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r4
  int v15; // r0
  _DWORD *v16; // r4
  int v17; // t1
  int v18; // r0
  int v19; // r4
  void *v20; // r0
  int v21; // r0
  _DWORD *v22; // [sp+18h] [bp-290h]
  void **v23; // [sp+24h] [bp-284h]
  int v24; // [sp+28h] [bp-280h]
  int v25; // [sp+2Ch] [bp-27Ch]
  int v26; // [sp+34h] [bp-274h]
  _DWORD v27[106]; // [sp+38h] [bp-270h] BYREF
  char v28[140]; // [sp+1E0h] [bp-C8h] BYREF
  int v29[3]; // [sp+26Ch] [bp-3Ch] BYREF
  int v30[12]; // [sp+278h] [bp-30h] BYREF

  v30[0] = 0;
  v30[1] = -1087163597;
  v30[2] = 0;
  v29[0] = 1017370378;
  v29[1] = 1017370378;
  v29[2] = 1017370378;
  v2 = dword_60CC6E04;
  v22 = (_DWORD *)dword_60C9A68C;
  v3 = dword_60C9C0FC;
  v24 = sead__HeapMgr__sInstance;
  CurrentHeap_const = (_DWORD *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  sub_6042A6C8(v3, 5u, 34, CurrentHeap_const);
  memset(v28, 255, 0x88u);
  v5 = 0;
  v6 = 0;
  v25 = a1;
  v7 = (void **)(a1 + 614104);
  v8 = 0;
  v23 = v7;
  do
  {
    if ( (int)v5 >= 34 )
    {
      v9 = sub_60913508(v27);
      sub_60913814(v9);
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)dword_60CCFC8C + 16))(dword_60CCFC8C, v27);
      sub_6091361C(v27);
      sub_60913598(v27);
      v5 = 0;
      v8 = 1;
    }
    result = *(unsigned __int8 *)(FIELD_U32(v2, 40) + 104 * v6 + 6265);
    if ( result == 6 )
    {
      result = sub_60828E04(v2, v6);
      v11 = (const void *)result;
      if ( result )
      {
        v26 = v8;
        if ( (v8 & 1) != 0 )
        {
          v12 = 0;
          if ( v5 < 0x22 )
            v12 = v5;
          v13 = *(_DWORD *)&v28[4 * v12];
          if ( v13 != -1 )
          {
            if ( v13 >= 0x80 )
              v13 = 0;
            v14 = v25 + 4424 * v13;
            v17 = FIELD_U32(v14, 50456);
            v16 = (_DWORD *)(v14 + 50456);
            v15 = v17;
            if ( v17 )
            {
              result = FIELD_U32(v15, 1004);
              if ( result )
              {
                --v6;
LABEL_24:
                v8 = v26;
                goto LABEL_25;
              }
              sub_6042AC08((_DWORD *)dword_60C9C0FC, 5u, v5);
              if ( *v16 )
                (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v16 + 48))(*v16);
            }
          }
        }
        v18 = 0;
        if ( (unsigned int)v6 < 0x80 )
          v18 = v6;
        v19 = v25 + 4424 * v18;
        v20 = (void *)sead__HeapMgr__getCurrentHeap_const(v24);
        sub_6042C4DC(v19 + 47848, v20, dword_60B02B40);
        sub_6042BD4C(v19 + 49632, v19 + 47848);
        v21 = operator_new(0x4C8u);
        FIELD_U32(v19, 50456) = sub_60436A4C(v21);
        sub_604186F8((int)v27);
        sub_6042A9E8(dword_60C9C0FC, v27, 5u);
        qmemcpy(v27, v11, 0x5Cu);
        if ( sub_60436B70(*(_DWORD **)(v19 + 50456), v27, 5u, v5, *v23) == 1 )
        {
          FIELD_U32(v19, 47836) = 1;
          sub_604106A4(v22, v19 + 47864, FIELD_U32(v19, 50456), v19 + 49632, v30, v29, 0);
        }
        result = 0;
        if ( v5 < 0x22 )
          result = v5;
        ++v5;
        *(_DWORD *)&v28[4 * result] = v6;
        goto LABEL_24;
      }
    }
LABEL_25:
    ++v6;
  }
  while ( v6 < 128 );
  return result;
}
