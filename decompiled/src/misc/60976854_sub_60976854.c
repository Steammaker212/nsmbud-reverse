/* sub_60976854
 * address: 0x60976854   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60976854(int a1, int a2, int a3)
{
  unsigned int *v5; // r7
  _DWORD *v6; // r5
  int v7; // r0
  _DWORD *v8; // r9
  unsigned int v9; // r1
  int v10; // r6
  unsigned int v11; // r0
  int v12; // r0
  int *v13; // r5
  int v14; // r0
  int v15; // r6
  _DWORD *v16; // r6
  int v17; // r0
  int v18; // r5
  __int16 v19; // r9
  int v20; // r0
  int *v21; // r5
  int v22; // r0
  int v23; // r7
  int v24; // t1
  unsigned int result; // r0
  _DWORD *v26; // r2
  int v27; // r3
  unsigned int v28; // r7
  _DWORD *v29; // r1
  _DWORD *v30; // r2
  unsigned int v31; // r0
  int v32; // r3
  _BYTE v33[192]; // [sp+8h] [bp-1C8h] BYREF
  int v34; // [sp+C8h] [bp-108h]

  if ( a3 == 1 )
  {
    v5 = (unsigned int *)(a1 + 3604);
    do
      __ldrex(v5);
    while ( __strex(0, v5) );
    v6 = *(_DWORD **)(a1 + 3592);
    v7 = FIELD_U32(a1, 3584);
    if ( v7 )
    {
      v8 = &v6[v7];
      do
      {
        if ( (*(_BYTE *)(*v6 + 20) & 1) != 0 )
        {
          v9 = FIELD_U32(a1, 3604);
          v10 = FIELD_U32(a1, 3600);
          if ( FIELD_U32(a1, 3596) > v9 )
            v10 += 616 * v9;
          sub_60976CA0(*v6, v10);
          do
            v11 = __ldrex(v5);
          while ( __strex(v11 + 1, v5) );
          *(_DWORD *)(FIELD_U32(a1, 3612) + 4 * v11) = v10;
        }
        ++v6;
      }
      while ( v6 != v8 );
    }
  }
  v12 = FIELD_U8(a1, 5);
  if ( v12 == 2 )
  {
    v19 = *(unsigned __int8 *)(FIELD_U32(a1, 2296) + 161);
    v20 = sub_60913508((int)v33);
    sub_60913564(v20, 584 * v19 + a1 + 2416);
    if ( sub_60918EB8(584 * v19 + a1 + 2416) == 1 )
    {
      v21 = *(int **)(a1 + 3612);
      v22 = FIELD_U32(a1, 3604);
      if ( v22 )
      {
        v23 = 4 * v22;
        do
        {
          v24 = *v21++;
          dword_60CC77F0(v34, 1, v24 + 32);
          v23 -= 4;
        }
        while ( v23 );
      }
      sub_60918FC4(584 * v19 + a1 + 2416);
      if ( (*(_BYTE *)(584 * v19 + a1 + 2436) & 1) != 0 )
        sub_609194C8(584 * v19 + a1 + 2416);
    }
    sub_60913598((int)v33);
  }
  else if ( v12 == 1 )
  {
    v16 = *(_DWORD **)(a1 + 3612);
    v17 = FIELD_U32(a1, 3604);
    if ( v17 )
    {
      v18 = 4 * v17;
      do
      {
        dword_60CC77F0(FIELD_U32(a2, 192), 1, *v16 + 32);
        if ( (FIELD_U8(a1, 2353) & 0x10) != 0 )
          (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_60CCFC8C + 16))(dword_60CCFC8C, a2);
        v18 -= 4;
        ++v16;
      }
      while ( v18 );
    }
  }
  else if ( !FIELD_U8(a1, 5) )
  {
    v13 = *(int **)(a1 + 3612);
    v14 = FIELD_U32(a1, 3604);
    if ( v14 )
    {
      v15 = 4 * v14;
      do
      {
        sub_609194C8(*v13);
        if ( (FIELD_U8(a1, 2353) & 0x10) != 0 )
          (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_60CCFC8C + 16))(dword_60CCFC8C, a2);
        v15 -= 4;
        ++v13;
      }
      while ( v15 );
    }
  }
  if ( (FIELD_U8(a1, 2353) & 0x20) != 0 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)dword_60CCFC8C + 16))(dword_60CCFC8C, a2);
  result = 0;
  FIELD_U32(a1, 2408) = 0;
  v26 = *(_DWORD **)(a1 + 3612);
  v27 = FIELD_U32(a1, 3604);
  if ( v27 )
  {
    v28 = (unsigned int)(4 * v27 - 4) >> 2;
    if ( ((4 * v27 - 4) & 4) != 0 )
    {
      result = 0;
      v29 = *(_DWORD **)(a1 + 3612);
      if ( !v28 )
        goto LABEL_44;
    }
    else
    {
      v29 = v26 + 1;
      result = *(_DWORD *)(*v26 + 24);
      FIELD_U32(a1, 2408) = result;
      if ( !v28 )
        goto LABEL_44;
    }
    v30 = &v26[v27];
    do
    {
      v31 = result + *(_DWORD *)(*v29 + 24);
      FIELD_U32(a1, 2408) = v31;
      v32 = v29[1];
      v29 += 2;
      result = v31 + FIELD_U32(v32, 24);
      FIELD_U32(a1, 2408) = result;
    }
    while ( v29 != v30 );
  }
LABEL_44:
  if ( FIELD_U32(a1, 2412) < result )
    FIELD_U32(a1, 2412) = result;
  return result;
}
