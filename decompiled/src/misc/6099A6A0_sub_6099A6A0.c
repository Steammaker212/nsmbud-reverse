/* sub_6099A6A0
 * address: 0x6099A6A0   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099A6A0(int a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 *v3; // lr
  bool v4; // zf
  int v5; // r3
  int v6; // r5
  int v7; // r6
  int v8; // r5
  int v9; // r6
  unsigned int v10; // r12
  unsigned int v11; // r3
  int v12; // r4
  unsigned int v13; // r5
  unsigned __int16 *v14; // r0
  unsigned int v15; // r6
  unsigned int v16; // r6
  unsigned __int16 *v17; // r0
  unsigned int v18; // r6
  unsigned int v19; // r3
  unsigned int v20; // r1
  unsigned __int16 *v21; // r5
  unsigned int v22; // r4

  v3 = *(unsigned __int16 **)(a1 + 68);
  v4 = v3 == 0;
  if ( v3 )
    v4 = FIELD_U8(a1, 4) == 0;
  if ( v4 )
    return 0;
  v5 = FIELD_U32(a1, 84);
  if ( v5 )
  {
    if ( v5 >= 1 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = a1 + 4 * v6;
        if ( FIELD_U32(v7, 88) <= a2 && FIELD_U32(v7, 104) >= a2 )
          break;
        if ( ++v6 >= v5 )
          return 0;
      }
      v8 = 0;
      while ( 1 )
      {
        v9 = a1 + 4 * v8;
        if ( FIELD_U32(v9, 88) <= a3 && FIELD_U32(v9, 104) >= a3 )
          break;
        if ( ++v8 >= v5 )
          return 0;
      }
      goto LABEL_16;
    }
    return 0;
  }
LABEL_16:
  v10 = *v3;
  v11 = 0;
  do
  {
    v12 = 2;
    v13 = (v11 + v10) >> 1;
    v14 = &v3[4 * v13];
    v15 = *((_DWORD *)v14 + 1);
    if ( v15 == a2 )
      continue;
    if ( v15 >= a2 )
    {
      v12 = 1;
      v4 = v10 == v13;
      v16 = (v11 + v10) >> 1;
      v13 = v11;
      if ( v4 )
        continue;
LABEL_22:
      v12 = 0;
      v10 = v16;
      v11 = v13;
      continue;
    }
    v12 = 1;
    v16 = v10;
    if ( v11 != v13 )
      goto LABEL_22;
  }
  while ( (v12 & 3) == 0 );
  if ( v12 != 2 )
  {
    v17 = 0;
    if ( !v12 )
      goto LABEL_27;
    return 0;
  }
  v17 = (unsigned __int16 *)((char *)v3 + *((_DWORD *)v14 + 2));
LABEL_27:
  v18 = *v17;
  v19 = 0;
  while ( 1 )
  {
    v20 = (v18 + v19) >> 1;
    v21 = &v17[4 * v20];
    v22 = *((_DWORD *)v21 + 1);
    if ( v22 == a3 )
      break;
    if ( v22 < a3 )
    {
      v4 = v19 == v20;
      v19 = (v18 + v19) >> 1;
      if ( v4 )
        return 0;
    }
    else
    {
      v4 = v18 == v20;
      v18 = (v18 + v19) >> 1;
      if ( v4 )
        return 0;
    }
  }
  return (__int16)v21[4];
}
