/* sub_6089725C
 * address: 0x6089725C   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089725C(_DWORD *a1, int a2, int a3)
{
  int v5; // r1
  _DWORD *v6; // r12
  int v7; // r0
  int v8; // r3
  _DWORD *v9; // r0
  int v10; // r3
  int v12; // r3
  int v13; // r0
  _DWORD *v14; // r2
  _DWORD *v15; // r1
  int v16; // r6
  int v17; // r7
  int v18; // r6
  int v19; // r4
  int v20; // r0
  int v21; // r3
  int v22; // r3

  v5 = a1[101];
  if ( v5 <= a1[100] )
  {
    debugPrintRelated3("GpuBuffer management domain is lacking. \n");
    return 0;
  }
  v6 = (_DWORD *)a1[105];
  if ( !v6 )
  {
    v7 = a1[103] + 1;
    if ( v7 == v5 )
      v7 = 0;
    a1[103] = v7;
    v8 = 7 * v7;
    v9 = (_DWORD *)a1[99];
    v6 = &v9[v8];
    if ( v6[1] )
    {
      if ( v5 < 1 )
      {
LABEL_10:
        v6 = 0;
      }
      else
      {
        v10 = 0;
        while ( v9[1] )
        {
          ++v10;
          v9 += 7;
          if ( v10 >= v5 )
            goto LABEL_10;
        }
        a1[105] = v9;
        a1[103] = v10;
        v6 = v9;
      }
    }
    else
    {
      a1[105] = v6;
    }
  }
  v12 = -a3;
  v13 = a3 - 1;
  v14 = (_DWORD *)a1[95];
  v15 = a1 + 94;
  v16 = a1[92];
  if ( v14 == a1 + 94 )
  {
LABEL_18:
    v20 = (v13 + v16) & v12;
    if ( a1[92] + a1[93] - v20 < a2 )
    {
      nullsub_95();
      debugPrintRelated3("GpuBuffer Allocation Failed. Allocated size : %d Byte.\n");
      debugPrintRelated3("Current GpuBuffer Allocation : %d/%d.\n");
      return 0;
    }
    v6[1] = v20;
    v6[2] = a2;
    v21 = v6[3];
    v6[3] = a1[94];
    FIELD_U32(v21, 4) = v15;
    *(_DWORD *)(a1[94] + 4) = v6 + 3;
    a1[94] = v21;
  }
  else
  {
    v16 = a1[92];
    while ( 1 )
    {
      v17 = (v13 + v16) & v12;
      v18 = *(v14 - 2);
      if ( v18 - v17 >= a2 )
        break;
      v19 = *(v14 - 1);
      v14 = (_DWORD *)v14[1];
      v16 = v18 + v19;
      if ( v14 == v15 )
        goto LABEL_18;
    }
    v6[1] = v17;
    v6[2] = a2;
    v22 = v6[3];
    v6[3] = *v14;
    FIELD_U32(v22, 4) = v14;
    *(_DWORD *)(*v14 + 4) = v6 + 3;
    *v14 = v22;
  }
  a1[105] = 0;
  ++a1[100];
  a1[102] += v6[2];
  return v6[1];
}
