/* sub_604332D4
 * address: 0x604332D4   size: 892   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604332D4(int a1)
{
  int result; // r0
  unsigned __int16 v3; // r1
  int v4; // r8
  _DWORD *v5; // r10
  int v6; // r7
  int v7; // r12
  unsigned int v8; // r6
  int v9; // r5
  int v10; // r3
  int v11; // r0
  _DWORD *v12; // r0
  void *v13; // r1
  int v14; // r10
  int v15; // r9
  _DWORD *v16; // r5
  int v17; // r6
  int v18; // r8
  int v19; // r8
  int v20; // r6
  float v21; // s16
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  int v24; // [sp+10h] [bp-48h] BYREF
  float v25; // [sp+14h] [bp-44h]
  int v26; // [sp+18h] [bp-40h]
  int v27; // [sp+20h] [bp-38h]
  int v28; // [sp+24h] [bp-34h]
  int v29; // [sp+28h] [bp-30h]

  result = FIELD_U32(a1, 316);
  if ( (result & 0x10) != 0 )
  {
    result &= ~4u;
    FIELD_U32(a1, 316) = result;
  }
  if ( (result & 2) != 0 || (result & 0xC) == 4 )
  {
    sub_6086D754(a1 + 40, 0);
    v12 = *(_DWORD **)(a1 + 80);
    if ( v12 )
    {
      FIELD_U32(a1, 328) = *v12;
      FIELD_U32(a1, 332) = v12[1];
      FIELD_U32(a1, 336) = v12[2];
      FIELD_U32(a1, 340) = v12[4];
    }
    memset((void *)(a1 + 392), 255, 0x28u);
    v4 = -7;
    goto LABEL_21;
  }
  if ( (result & 4) != 0 )
  {
    v3 = FIELD_U16(a1, 64);
    v4 = -5;
    if ( v3 )
    {
      v5 = *(_DWORD **)(a1 + 80);
      v6 = 0;
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = FIELD_U32(a1, 72);
        v10 = *(_DWORD *)(v9 + v6);
        if ( FIELD_U8(v10, 102)
          || (*(_DWORD *)(a1 + 4 * (FIELD_U16(v10, 96) >> 5) + 352) & (1 << (FIELD_U16(v10, 96) & 0x1F))) != 0 )
        {
          ((void (*)(void))loc_60875824)();
          if ( v8 >> 6 <= 4 )
            *(_DWORD *)(a1 + 4 * (v8 >> 5) + 392) |= 1 << (v8 & 0x1F);
          sub_608747A0(v5, v5, *(_DWORD *)(v9 + v6 + 32));
          v3 = FIELD_U16(a1, 64);
          v7 = 1;
        }
        ++v8;
        v6 += 56;
      }
      while ( (int)v8 < v3 );
      v11 = (int)v5;
      if ( v5 )
        v11 = 1;
      if ( (v11 & v7) != 0 )
      {
        FIELD_U32(a1, 328) = *v5;
        FIELD_U32(a1, 332) = v5[1];
        FIELD_U32(a1, 336) = v5[2];
        FIELD_U32(a1, 340) = v5[4];
      }
    }
LABEL_21:
    result = FIELD_U32(a1, 316) & v4;
    FIELD_U32(a1, 316) = result;
  }
  if ( (result & 0x20) != 0 )
  {
    v13 = (void *)(a1 + 392);
    if ( FIELD_U32(a1, 392)
      || FIELD_U32(a1, 396)
      || FIELD_U32(a1, 400)
      || FIELD_U32(a1, 404)
      || FIELD_U32(a1, 408)
      || FIELD_U32(a1, 412)
      || FIELD_U32(a1, 416)
      || FIELD_U32(a1, 420)
      || FIELD_U32(a1, 424)
      || (result = FIELD_U32(a1, 428)) != 0 )
    {
      v27 = -8388609;
      v28 = -8388609;
      v29 = -8388609;
      v24 = 2139095039;
      v25 = 3.4028e38;
      v26 = 2139095039;
      if ( FIELD_U16(a1, 64) )
      {
        v14 = 0;
        v15 = FIELD_U32(a1, 68);
        do
        {
          v16 = (_DWORD *)(FIELD_U32(a1, 72) + 56 * v14);
          if ( (*(_DWORD *)(a1 + 4 * (v14 >> 5) + 392) & (1 << (v14 & 0x1F))) != 0 )
            sub_60875CD8(FIELD_U32(a1, 72) + 56 * v14, v15, 0);
          if ( *(_WORD *)(*(_DWORD *)(*v16 + 32) + 52) )
          {
            v17 = v16[9];
            v18 = 0;
            do
            {
              ((void (__fastcall *)(int *, int *, int))loc_60874884)(&v24, &v24, v17);
              ++v18;
              v17 += 32;
            }
            while ( v18 < *(unsigned __int16 *)(*(_DWORD *)(*v16 + 32) + 52) );
          }
          ++v14;
        }
        while ( v14 < FIELD_U16(a1, 64) );
        v19 = v26;
        v20 = v24;
        v13 = (void *)(a1 + 392);
        v21 = v25 + -200.0;
      }
      else
      {
        v21 = 3.4028e38;
        v19 = 2139095039;
        v20 = 2139095039;
      }
      memset(v13, 0, 0x28u);
      v22 = *(_DWORD **)(a1 + 344);
      *v22 = 2139095039;
      v22[1] = 2139095039;
      v22[2] = 2139095039;
      v22[3] = -8388609;
      v22[4] = -8388609;
      v22[5] = -8388609;
      v23 = *(_DWORD **)(a1 + 344);
      v23[3] = v27;
      v23[4] = v28;
      v23[5] = v29;
      result = FIELD_U32(a1, 344);
      *(_DWORD *)result = v20;
      FIELD_F32(result, 4) = v21;
      FIELD_U32(result, 8) = v19;
    }
  }
  return result;
}
