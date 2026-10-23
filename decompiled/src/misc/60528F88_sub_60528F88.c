/* sub_60528F88
 * address: 0x60528F88   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60528F88(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  unsigned int v4; // r0
  unsigned int v5; // r2
  _DWORD *v6; // r2
  int v7; // r3
  int v8; // r7
  unsigned int v9; // r0
  unsigned int v10; // r2
  int result; // r0
  unsigned int v12; // r7
  unsigned int v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // t1

  v3 = a1 + 1155;
  v2 = a1[1155];
  if ( *((_BYTE *)v3 + 52) )
  {
    if ( v2 >= 1 )
    {
      v4 = 0;
      do
      {
        v5 = 0;
        if ( v4 < 4 )
          v5 = v4;
        ++v4;
        v6 = &a1[v5];
        v7 = *(_DWORD *)(v6[1038] + 3140);
        v8 = FIELD_U32(v7, 68);
        FIELD_U32(v7, 52) = v8;
        *(_DWORD *)(v6[1038] + 3132) = v8;
      }
      while ( (signed int)v4 < *v3 );
    }
  }
  else if ( v2 >= 1 )
  {
    v9 = 0;
    do
    {
      v10 = 0;
      if ( v9 < 4 )
        v10 = v9;
      ++v9;
      *(_DWORD *)(a1[v10 + 1038] + 3132) = *(_DWORD *)(*(_DWORD *)(a1[v10 + 1038] + 3140) + 52);
    }
    while ( (signed int)v9 < *v3 );
  }
  *(_BYTE *)(a1[994] + 64) &= ~1u;
  *(_BYTE *)(a1[995] + 64) &= ~1u;
  *(_BYTE *)(a1[996] + 64) &= ~1u;
  *(_BYTE *)(a1[997] + 64) &= ~1u;
  *(_BYTE *)(a1[998] + 64) &= ~1u;
  *(_BYTE *)(a1[999] + 64) &= ~1u;
  *(_BYTE *)(a1[1000] + 64) &= ~1u;
  *(_BYTE *)(a1[1001] + 64) &= ~1u;
  *(_BYTE *)(a1[1002] + 64) &= ~1u;
  *(_BYTE *)(a1[1003] + 64) &= ~1u;
  *(_BYTE *)(a1[1004] + 64) &= ~1u;
  *(_BYTE *)(a1[1005] + 64) &= ~1u;
  *(_BYTE *)(a1[1006] + 64) &= ~1u;
  *(_BYTE *)(a1[1007] + 64) &= ~1u;
  *(_BYTE *)(a1[1010] + 64) &= ~1u;
  *(_BYTE *)(a1[1011] + 64) &= ~1u;
  *(_BYTE *)(a1[1012] + 64) &= ~1u;
  *(_BYTE *)(a1[1013] + 64) &= ~1u;
  *(_BYTE *)(a1[1014] + 64) &= ~1u;
  *(_BYTE *)(a1[1015] + 64) &= ~1u;
  *(_BYTE *)(a1[1016] + 64) &= ~1u;
  *(_BYTE *)(a1[1017] + 64) &= ~1u;
  *(_BYTE *)(a1[1018] + 64) &= ~1u;
  *(_BYTE *)(a1[1019] + 64) &= ~1u;
  *(_BYTE *)(a1[1020] + 64) &= ~1u;
  *(_BYTE *)(a1[1021] + 64) &= ~1u;
  *(_BYTE *)(a1[1022] + 64) &= ~1u;
  *(_BYTE *)(a1[1023] + 64) &= ~1u;
  *(_BYTE *)(a1[1024] + 64) &= ~1u;
  *(_BYTE *)(a1[1025] + 64) &= ~1u;
  result = *v3;
  if ( (int)*v3 >= 1 )
  {
    v12 = 0;
    do
    {
      v13 = 0;
      if ( v12 < 4 )
        v13 = v12;
      v14 = &a1[v13];
      v17 = v14[1038];
      v15 = v14 + 1038;
      v16 = v17;
      if ( FIELD_U32(v17, 3072) == 3 )
        FIELD_U8(v16, 3067) = 1;
      else
        FIELD_U8(v16, 3066) = 1;
      sub_604034B0(*v15 + 56, (int)&dword_60CA99F4);
      result = *v3;
      ++v12;
    }
    while ( (signed int)v12 < *v3 );
  }
  return result;
}
