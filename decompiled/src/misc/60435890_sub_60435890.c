/* sub_60435890
 * address: 0x60435890   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60435890(int a1, int a2, unsigned int a3, int a4, int a5, _DWORD *a6)
{
  int result; // r0
  int v11; // r1
  _DWORD *v12; // r7
  bool v13; // zf
  int v14; // r1
  bool v15; // zf
  int *v16; // r7
  int v17; // r5
  int v18; // t1
  bool v19; // zf
  int *v20; // r7
  int v21; // r5
  int v22; // t1
  _DWORD v23[6]; // [sp+0h] [bp-50h] BYREF
  char v24; // [sp+18h] [bp-38h]
  char v25; // [sp+19h] [bp-37h]
  int v26; // [sp+1Ch] [bp-34h]
  int v27; // [sp+20h] [bp-30h]
  _DWORD *v28; // [sp+28h] [bp-28h]
  int v29; // [sp+2Ch] [bp-24h]

  result = FIELD_U8(a1, 348);
  if ( (result & 2) != 0 )
  {
    v11 = a6[225];
    if ( a6[224] > a3 )
      v11 += a3 << 7;
    v12 = *(_DWORD **)(v11 + 120);
    v13 = v12 == 0;
    if ( v12 )
      v13 = FIELD_U32(a1, 80) == 0;
    if ( v13 || (result = sub_60874E50(*v12), result == 1) )
    {
      v23[0] = a3;
      v23[1] = a4;
      v14 = 1;
      v23[2] = a5;
      v23[3] = 0;
      v23[4] = 0;
      v23[5] = -1;
      v24 = 1;
      v26 = 4;
      v27 = -1;
      v28 = v12;
      v29 = a2;
      v25 = 1;
      result = FIELD_U32(a1, 312);
      v15 = (result & 2) == 0;
      if ( (result & 2) != 0 )
      {
        v14 = FIELD_U32(a1, 212);
        v15 = v14 == 0;
      }
      if ( !v15 )
      {
        v16 = *(int **)(a1 + 220);
        v17 = 4 * v14;
        do
        {
          v18 = *v16++;
          sub_60434AE8(a1, (int)v23, v18, a6);
          v17 -= 4;
        }
        while ( v17 );
        result = FIELD_U32(a1, 312);
      }
      v19 = (result & 4) == 0;
      if ( (result & 4) != 0 )
      {
        result = FIELD_U32(a1, 200);
        v19 = result == 0;
      }
      if ( !v19 )
      {
        v20 = *(int **)(a1 + 208);
        v21 = 4 * result;
        do
        {
          v22 = *v20++;
          result = sub_60434AE8(a1, (int)v23, v22, a6);
          v21 -= 4;
        }
        while ( v21 );
      }
    }
  }
  return result;
}
