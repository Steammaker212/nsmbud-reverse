/* sub_600A7B70
 * address: 0x600A7B70   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600A7B70(_DWORD *a1)
{
  _DWORD *v2; // r9
  _DWORD *v3; // r6
  _DWORD *v4; // r5
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  _DWORD *result; // r0
  int v9; // r11
  int v10; // r10
  _DWORD *v11; // r5
  _DWORD *v12; // r4
  _DWORD **v13; // r7
  int v14; // r1
  int v15; // r0
  _DWORD *v16; // r8
  _DWORD *v17; // r1

  v2 = a1 + 4899;
  v3 = (_DWORD *)a1[4900];
  if ( v3 != a1 + 4899 )
  {
    v4 = a1 + 4902;
    do
    {
      v5 = (_DWORD *)v3[1];
      sead__ListNode__erase(v3);
      --a1[4901];
      *(v3 - 1) = *v4;
      v6 = v3 - 1;
      v3 = v5;
      *v4 = v6;
    }
    while ( v5 != v2 );
  }
  v7 = (_DWORD *)a1[2171];
  result = a1 + 2170;
  if ( v7 != a1 + 2170 )
  {
    v9 = 0;
    v10 = 0;
    v11 = a1 + 4901;
    v12 = a1 + 2004;
    result = v7 - 166;
    v13 = (_DWORD **)(a1 + 4902);
    do
    {
      if ( result[2] )
      {
        v14 = ((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) * (unsigned __int64)(unsigned int)++v10) >> 32)
            - 1;
        if ( v14 < 0 )
        {
          v16 = *v13;
          if ( *v13 )
            *v13 = (_DWORD *)*v16;
          else
            v16 = 0;
          *v16 = 0;
          v16[1] = 0;
          v17 = v16 + 1;
          v16[2] = 0;
          v15 = (int)v2;
        }
        else
        {
          v15 = sub_608DE61C(v2, v14);
          v16 = *v13;
          if ( *v13 )
            *v13 = (_DWORD *)*v16;
          else
            v16 = 0;
          *v16 = 0;
          v16[1] = 0;
          v17 = v16 + 1;
          if ( !v15 )
            v15 = 4;
          v16[2] = 0;
        }
        sub_608DE510(v15, v17);
        ++*v11;
        *v16 = v9;
      }
      v7 = (_DWORD *)v7[1];
      ++v9;
      result = v7 - 166;
    }
    while ( v7 - 166 != v12 );
  }
  return result;
}
