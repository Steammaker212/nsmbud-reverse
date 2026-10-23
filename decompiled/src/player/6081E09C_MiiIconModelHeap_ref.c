/* MiiIconModelHeap_ref
 * address: 0x6081E09C   size: 2784   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MiiIconModelHeap_ref(int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r8
  int v4; // r7
  int v5; // r1
  int v6; // r10
  int v7; // r8
  int v8; // r5
  _BYTE *v9; // r0
  int v10; // r5
  int v11; // r6
  int v12; // r4
  char v13; // r12
  int v14; // r2
  int v15; // r8
  int v16; // r9
  _DWORD *v17; // r10
  void *v18; // r5
  const void *v19; // r6
  signed int v20; // r7
  bool v21; // cc
  signed int v22; // r0
  int v23; // r5
  _DWORD *v24; // r10
  void *v25; // r8
  const void *v26; // r6
  signed int v27; // r7
  signed int v28; // r0
  unsigned int v29; // r0
  int v31; // [sp+Ch] [bp-5Ch]
  int v32; // [sp+10h] [bp-58h]
  _BYTE *v33; // [sp+14h] [bp-54h]
  int v34; // [sp+20h] [bp-48h]
  int v35; // [sp+28h] [bp-40h]
  int v36; // [sp+2Ch] [bp-3Ch]
  int v37; // [sp+30h] [bp-38h]
  int v38; // [sp+34h] [bp-34h]
  int v39; // [sp+34h] [bp-34h]
  int v40; // [sp+38h] [bp-30h]
  _DWORD v41[11]; // [sp+3Ch] [bp-2Ch] BYREF

  v1 = a1;
  v2 = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U8(a1, 20) = 1;
  FIELD_U32(a1, 24) = 0;
  FIELD_U8(a1, 28) = 0;
  FIELD_U32(a1, 32) = 1;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 48) = 0;
  sub_60408218((void *)(a1 + 52));
  FIELD_U32(v1, 124) = 0;
  FIELD_U32(v1, 128) = 0;
  FIELD_U32(v1, 132) = 0;
  FIELD_U8(v1, 117) = 0;
  FIELD_U8(v1, 113) = 0;
  FIELD_U8(v1, 109) = 0;
  FIELD_U8(v1, 105) = 0;
  FIELD_U8(v1, 101) = 0;
  FIELD_U8(v1, 120) = 0;
  FIELD_U8(v1, 116) = 0;
  FIELD_U8(v1, 119) = 0;
  FIELD_U8(v1, 118) = 0;
  FIELD_U8(v1, 112) = 0;
  FIELD_U8(v1, 115) = 0;
  FIELD_U8(v1, 114) = 0;
  FIELD_U8(v1, 108) = 0;
  FIELD_U8(v1, 111) = 0;
  FIELD_U8(v1, 110) = 0;
  FIELD_U8(v1, 104) = 0;
  FIELD_U8(v1, 107) = 0;
  FIELD_U8(v1, 106) = 0;
  FIELD_U8(v1, 100) = 0;
  FIELD_U8(v1, 103) = 0;
  v33 = (_BYTE *)(v1 + 100);
  FIELD_U8(v1, 102) = 0;
  FIELD_U32(v1, 140) = v1 + 148;
  FIELD_U32(v1, 136) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(v1, 144) = 260;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(v1 + 136);
  v3 = 0;
  **(_BYTE **)(v1 + 140) = 0;
  FIELD_U32(v1, 136) = &off_60BF9688;
  FIELD_U32(v1, 408) = 0;
  memset((void *)(v1 + 412), 255, 0x24u);
  FIELD_U32(v1, 448) = 0;
  FIELD_U32(v1, 452) = 0;
  memset((void *)(v1 + 456), 255, 0x24u);
  FIELD_U32(v1, 492) = 6;
  FIELD_U32(v1, 496) = 0;
  FIELD_U32(v1, 500) = 0;
  FIELD_U8(v1, 504) = (12 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32;
  FIELD_U32(v1, 516) = 0;
  FIELD_U16(v1, 520) = 0;
  FIELD_U8(v1, 523) = 0;
  FIELD_U8(v1, 524) = 0;
  FIELD_U8(v1, 525) = 0;
  FIELD_U8(v1, 532) = 0;
  FIELD_U32(v1, 536) = 0;
  FIELD_U8(v1, 510) = 0;
  FIELD_U8(v1, 506) = 0;
  FIELD_U8(v1, 513) = 0;
  FIELD_U8(v1, 509) = 0;
  FIELD_U8(v1, 512) = 0;
  FIELD_U8(v1, 511) = 0;
  FIELD_U8(v1, 505) = 0;
  FIELD_U8(v1, 508) = 0;
  FIELD_U8(v1, 507) = 0;
  memset((void *)(v1 + 540), 255, 0xD8u);
  FIELD_U32(v1, 756) = 0;
  v32 = v1 + 796;
  sub_603F69E4((void *)(v1 + 796));
  v31 = v1 + 984;
  sub_60186E04((_DWORD *)(v1 + 984));
  v40 = v1;
  FIELD_U8(v1, 2092) = 0;
  v1 += 2092;
  FIELD_U8(v1, 5) = 0;
  FIELD_U8(v1, 4) = 0;
  FIELD_U8(v1, 3) = 0;
  FIELD_U8(v1, 2) = 0;
  FIELD_U8(v1, 1) = 0;
  memset((void *)(v1 + 8), 0, 48);
  v36 = v1 + 18064;
  v4 = v1 + 13452;
  v35 = v1 + 96392;
  v5 = v1 + 13448;
  do
  {
    v6 = v3;
    v7 = 4608;
    v37 = v5;
    v38 = v2;
    do
    {
      v8 = v4 + v2;
      *(_DWORD *)(v4 + v2) = v40 + v2 + 15552;
      *(_DWORD *)(v8 - 4) = &BufferedSafeStringBase_char_vtable_probably;
      FIELD_U32(v8, 4) = 5;
      sead__BufferedSafeStringBase__assureTerminationImpl_const(v4 + v2 - 4);
      v9 = *(_BYTE **)(v4 + v2);
      v2 += 36;
      v7 -= 36;
      *v9 = v6;
      *(_DWORD *)(v8 - 4) = &off_60BD4F38;
    }
    while ( v7 );
    v3 = v6;
    v10 = 0;
    v11 = v36 + v38;
    do
    {
      v12 = v11 + v10;
      *(_DWORD *)(v12 - 8) = &BufferedSafeStringBase_char_vtable_probably;
      *(_DWORD *)(v12 - 4) = v11 + v10 + 4;
      *(_DWORD *)(v11 + v10) = 5;
      sead__BufferedSafeStringBase__assureTerminationImpl_const(v11 + v10 - 8);
      v10 += 36;
      **(_BYTE **)(v12 - 4) = v6;
      *(_DWORD *)(v12 - 8) = &off_60BD4F38;
    }
    while ( v10 != 4608 );
    v5 = v37 + 9216;
    v2 = v38 + 9216;
  }
  while ( v37 + 9216 != v35 );
  FIELD_U8(v40, 98528) = 0;
  FIELD_U8(v40, 98529) = 0;
  FIELD_U8(v40, 98530) = 0;
  FIELD_U32(v40, 98532) = 0;
  sub_6042BC2C((_DWORD *)(v40 + 98552));
  sub_6042BC2C((_DWORD *)(v40 + 99376));
  sub_6042BC2C((_DWORD *)(v40 + 100200));
  sub_6042BC2C((_DWORD *)(v40 + 101024));
  sub_6081EBD0(v40 + 101848);
  FIELD_U8(v40, 109032) = 0;
  FIELD_U8(v40, 109034) = 0;
  FIELD_U8(v40, 109035) = 0;
  FIELD_U8(v40, 109036) = -1;
  FIELD_U8(v40, 109037) = -1;
  FIELD_U8(v40, 109038) = 0;
  FIELD_U8(v40, 109039) = 0;
  FIELD_U8(v40, 109040) = 0;
  FIELD_U32(v40, 109060) = 0;
  FIELD_U32(v40, 109064) = 0;
  FIELD_U8(v40, 109058) = 0;
  FIELD_U16(v40, 109056) = 0;
  FIELD_U32(v40, 109052) = 0;
  FIELD_U32(v40, 109048) = 0;
  FIELD_U32(v40, 109068) = 2;
  FIELD_U32(v40, 109072) = 0;
  FIELD_U8(v40, 109013) = 0;
  FIELD_U8(v40, 109012) = 0;
  FIELD_U8(v40, 109009) = 0;
  FIELD_U8(v40, 109005) = 0;
  FIELD_U8(v40, 109001) = 0;
  FIELD_U8(v40, 108997) = 0;
  FIELD_U8(v40, 108993) = 0;
  FIELD_U8(v40, 108989) = 0;
  FIELD_U8(v40, 108985) = 0;
  FIELD_U8(v40, 109008) = 0;
  FIELD_U8(v40, 109011) = 0;
  FIELD_U8(v40, 109010) = 0;
  FIELD_U8(v40, 109004) = 0;
  FIELD_U8(v40, 109007) = 0;
  FIELD_U8(v40, 109006) = 0;
  FIELD_U8(v40, 109000) = 0;
  FIELD_U8(v40, 109003) = 0;
  FIELD_U8(v40, 109002) = 0;
  FIELD_U8(v40, 108996) = 0;
  FIELD_U8(v40, 108999) = 0;
  FIELD_U8(v40, 108998) = 0;
  FIELD_U8(v40, 108992) = 0;
  FIELD_U8(v40, 108995) = 0;
  FIELD_U8(v40, 108994) = 0;
  FIELD_U8(v40, 108988) = 0;
  FIELD_U8(v40, 108991) = 0;
  FIELD_U8(v40, 108990) = 0;
  FIELD_U8(v40, 108984) = 0;
  FIELD_U8(v40, 108987) = 0;
  FIELD_U8(v40, 108986) = 0;
  FIELD_U32(v40, 109016) = 100663296;
  FIELD_U32(v40, 109020) = 100663296;
  FIELD_U32(v40, 109024) = 100663296;
  FIELD_U32(v40, 109028) = 100663296;
  **(_BYTE **)(v40 + 140) = 0;
  sub_603F77EC(v32);
  sub_60186EA8(v31);
  FIELD_U8(v40, 2085) = 0;
  FIELD_U8(v40, 2084) = 0;
  FIELD_U8(v40, 2087) = 0;
  FIELD_U8(v40, 2086) = 0;
  FIELD_U8(v40, 2089) = 7;
  FIELD_U8(v40, 2088) = 7;
  FIELD_U8(v40, 2091) = 7;
  FIELD_U8(v40, 2090) = 7;
  FIELD_U32(v40, 98488) = 15;
  FIELD_U32(v40, 98492) = 15;
  FIELD_U32(v40, 98496) = 15;
  FIELD_U32(v40, 98500) = 15;
  FIELD_U32(v40, 98504) = 15;
  FIELD_U32(v40, 98508) = 15;
  FIELD_U32(v40, 98512) = 15;
  FIELD_U32(v40, 98516) = 15;
  FIELD_U32(v40, 98520) = 15;
  FIELD_U32(v40, 98524) = 15;
  memset((void *)(v40 + 760), 0, 36);
  FIELD_U32(v40, 780) = FIELD_U8(v40, 120) ^ 1;
  v33[13] = 0;
  v33[9] = 0;
  v33[5] = 0;
  v33[3] = 0;
  v33[2] = 0;
  v33[1] = 0;
  *v33 = 0;
  v33[12] = 0;
  v33[15] = 0;
  v33[14] = 0;
  v33[8] = 0;
  v33[11] = 0;
  v33[10] = 0;
  v33[4] = 0;
  v33[7] = 0;
  v33[6] = 0;
  FIELD_U8(v40, 2092) = 0;
  FIELD_U8(v40, 2093) = 0;
  FIELD_U8(v40, 109041) = 0;
  FIELD_U8(v40, 109046) = 0;
  FIELD_U8(v40, 109045) = 0;
  FIELD_U8(v40, 109044) = 0;
  FIELD_U8(v40, 109043) = 0;
  FIELD_U8(v40, 109042) = 0;
  FIELD_U8(v40, 109047) = 0;
  FIELD_U8(v40, 525) = 15;
  FIELD_U8(v40, 526) = 0;
  FIELD_U8(v40, 527) = 0;
  FIELD_U32(v40, 528) = 4;
  if ( ((unsigned int)&dword_60CC6D7C & ~(1619126280 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6D7C) )
  {
    dword_60CC6D80 = (int)&sead__SafeStringBase__vtable;
    dword_60CC6D84 = (int)"W000";
    _cxa_guard_release(&dword_60CC6D7C);
  }
  v14 = 0;
  do
  {
    v39 = v14;
    v34 = v40 + 1488 * v14;
    memset((void *)(v34 + 2148), 0, 744);
    v15 = 0;
    do
    {
      v16 = v40 + 9216 * v39;
      v17 = (_DWORD *)(v16 + 36 * v15);
      v18 = (void *)v17[3886];
      (*(void (__fastcall **)(int *))(dword_60CC6D80 + 12))(&dword_60CC6D80);
      v19 = (const void *)dword_60CC6D84;
      if ( v18 != (void *)dword_60CC6D84 )
      {
        (*(void (__fastcall **)(int *))(dword_60CC6D80 + 12))(&dword_60CC6D80);
        v20 = 0;
        while ( *(_BYTE *)(dword_60CC6D84 + v20) )
        {
          if ( !*(_BYTE *)(dword_60CC6D84 + v20 + 1) )
          {
            ++v20;
            break;
          }
          if ( !*(_BYTE *)(dword_60CC6D84 + v20 + 2) )
          {
            v20 += 2;
            break;
          }
          v21 = v20 + 2 <= 0x7FFFF;
          v20 += 3;
          if ( !v21 )
          {
            v20 = 0;
            break;
          }
        }
        v22 = v17[3887];
        if ( v20 >= v22 )
          v20 = v22 - 1;
        qmemcpy(v18, v19, v20);
        *((_BYTE *)v18 + v20) = 0;
      }
      ++v15;
      v17[3893] = 0;
      v17[3892] = 0;
      v17[3891] = 0;
      v17[3890] = 0;
    }
    while ( v15 != 128 );
    memset((void *)(v34 + 2892), 0, 744);
    v23 = 0;
    do
    {
      v24 = (_DWORD *)(v16 + 36 * v23);
      v25 = (void *)v24[5038];
      (*(void (__fastcall **)(int *))(dword_60CC6D80 + 12))(&dword_60CC6D80);
      v26 = (const void *)dword_60CC6D84;
      if ( v25 != (void *)dword_60CC6D84 )
      {
        (*(void (__fastcall **)(int *))(dword_60CC6D80 + 12))(&dword_60CC6D80);
        v27 = 0;
        while ( *(_BYTE *)(dword_60CC6D84 + v27) )
        {
          if ( !*(_BYTE *)(dword_60CC6D84 + v27 + 1) )
          {
            ++v27;
            break;
          }
          if ( !*(_BYTE *)(dword_60CC6D84 + v27 + 2) )
          {
            v27 += 2;
            break;
          }
          v21 = v27 + 2 <= 0x7FFFF;
          v27 += 3;
          if ( !v21 )
          {
            v27 = 0;
            break;
          }
        }
        v28 = v24[5039];
        if ( v27 >= v28 )
          v27 = v28 - 1;
        qmemcpy(v25, v26, v27);
        *((_BYTE *)v25 + v27) = 0;
      }
      ++v23;
      v24[5045] = 0;
      v24[5044] = 0;
      v24[5043] = 0;
      v24[5042] = 0;
    }
    while ( v23 != 128 );
    v14 = v39 + 1;
  }
  while ( v39 != 8 );
  FIELD_U32(v40, 98484) = sub_608DE200(0x1100u);
  v29 = sub_60455CAC();
  FIELD_U32(v40, 128) = sub_608DE200(v29);
  v41[0] = &sead__SafeStringBase__vtable;
  v41[1] = "MiiIconModelHeap";
  FIELD_U32(v40, 98532) = sead__ExpHeap__create(0x100000, (int)v41, 0, 4, 1, 0);
  FIELD_U32(v40, 98548) = 0;
  FIELD_U32(v40, 98544) = 0;
  FIELD_U32(v40, 98540) = 0;
  FIELD_U32(v40, 98536) = 0;
  return v40;
}
