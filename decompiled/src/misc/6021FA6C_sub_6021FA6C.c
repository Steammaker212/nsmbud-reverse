/* sub_6021FA6C
 * address: 0x6021FA6C   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021FA6C(int a1)
{
  int i; // r6
  int v2; // r7
  unsigned int v3; // r4
  int v4; // r5
  int v5; // r0
  unsigned int v6; // r6
  int v7; // r0
  _DWORD *v8; // r5
  unsigned int *v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  int result; // r0
  unsigned int v15[6]; // [sp+4h] [bp-74h] BYREF
  int v16; // [sp+1Ch] [bp-5Ch] BYREF
  int v17; // [sp+20h] [bp-58h]
  int v18; // [sp+24h] [bp-54h]
  int v19; // [sp+28h] [bp-50h] BYREF
  int v20; // [sp+2Ch] [bp-4Ch]
  _DWORD *v21; // [sp+30h] [bp-48h]
  int v22; // [sp+34h] [bp-44h] BYREF
  int v23; // [sp+48h] [bp-30h] BYREF
  int v24; // [sp+4Ch] [bp-2Ch]
  int v25; // [sp+50h] [bp-28h]

  v23 = -1;
  v24 = -1;
  v25 = -1;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  sub_608DEB0C(&v19, 5, (int)&v22);
  for ( i = 0; i != 5; ++i )
  {
    if ( sub_6021EE50(6, i) != -1 )
    {
      v2 = sub_601A443C(dword_60C89E18, 6, 0);
      if ( FIELD_S32(v2, 28) >= 1 )
      {
        v3 = 0;
        v4 = dword_60AFD488[i + 30];
        while ( !sub_60183038(v2, v3, v4) )
        {
          if ( (signed int)++v3 >= FIELD_U32(v2, 28) )
            goto LABEL_9;
        }
        v23 = 6;
        v24 = 0;
        v25 = v3;
      }
LABEL_9:
      v5 = sub_601DFFE4((int)&v23);
      if ( v19 < v20 )
        v21[v19++] = v5;
    }
  }
  sead__Random__init(v15);
  sub_608DEBEC(&v19, v15);
  v6 = 0;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  do
  {
    v7 = v19;
    if ( v19 >= 1 )
    {
      v8 = (_DWORD *)*v21;
      memmove(v21, v21 + 1, 4 * v19 - 4);
      v7 = --v19;
      if ( v8 )
      {
        v16 = v8[21];
        v17 = v8[22];
        v18 = v8[24];
        v9 = (unsigned int *)sub_60186FEC(dword_60CC6D78 + 984, 6u, v6);
        v15[0] = *v9;
        v15[1] = v9[1];
        v15[2] = v9[2];
        v10 = v9[3];
        v11 = v9[4];
        v12 = v9[5];
        v15[3] = v10;
        v15[4] = v11;
        v15[5] = v12;
        sub_6019EC34(v15, &v16);
        v7 = sub_60186FC0(dword_60CC6D78 + 984, 6u, v6, (int)v15);
      }
    }
    ++v6;
  }
  while ( v6 != 5 );
  result = sub_6021FC98(v7);
  if ( result )
    return sub_6021EDAC(a1);
  return result;
}
