/* ModelWrapper_setup_helper_446F0C
 * address: 0x60446F0C   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ModelWrapper_setup_helper_446F0C(int result, int a2, int a3, int *a4, int a5)
{
  int v5; // r4
  bool v6; // zf
  int v7; // r9
  int v8; // r7
  int v9; // r2
  int v10; // r0
  char v11; // r1
  int v12; // r6
  int v13; // r2
  __int16 *v14; // r4
  __int16 v15; // r5
  bool v16; // zf
  int v17; // lr
  int v18; // r12
  int v19; // r5
  int v20; // r4
  __int16 *v21; // r5
  __int16 v22; // r3
  int v23; // r0
  int v24; // [sp+4h] [bp-7Ch] BYREF
  int v25; // [sp+8h] [bp-78h]
  int v26; // [sp+Ch] [bp-74h]
  int v27; // [sp+10h] [bp-70h]
  char v28; // [sp+14h] [bp-6Ch]
  char v29; // [sp+15h] [bp-6Bh]
  unsigned int v30; // [sp+18h] [bp-68h]
  int v31; // [sp+1Ch] [bp-64h]
  int v32; // [sp+20h] [bp-60h]
  int v33; // [sp+24h] [bp-5Ch]
  int v34; // [sp+28h] [bp-58h]
  int v35; // [sp+2Ch] [bp-54h]
  int v36; // [sp+30h] [bp-50h]
  int v37; // [sp+34h] [bp-4Ch]
  int v38; // [sp+38h] [bp-48h]
  int v39; // [sp+3Ch] [bp-44h]
  int v40; // [sp+40h] [bp-40h]
  int v41; // [sp+44h] [bp-3Ch]
  int v42; // [sp+48h] [bp-38h]
  int v43; // [sp+4Ch] [bp-34h]
  int v44; // [sp+50h] [bp-30h]
  int v45; // [sp+54h] [bp-2Ch]
  int v46; // [sp+58h] [bp-28h]
  int v47; // [sp+5Ch] [bp-24h]

  v5 = FIELD_U32(a3, 20);
  v6 = a4 == 0;
  v7 = result;
  v8 = FIELD_U16(v5, 196);
  if ( !a4 )
    v6 = v8 == 0;
  if ( !v6 )
  {
    v9 = FIELD_U16(a2, 64);
    v10 = -1;
    v11 = 0;
    v27 = -1;
    v26 = -1;
    v25 = -1;
    v28 = 1;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 8;
    v34 = 0;
    v35 = -1;
    v36 = 0;
    v37 = 8;
    v38 = 0;
    v39 = -1;
    v40 = 0;
    v41 = 8;
    v42 = 0;
    v43 = -1;
    v44 = 0;
    v45 = 8;
    v46 = 0;
    v47 = -1;
    v12 = -1;
    v24 = v9;
    v13 = -1;
    if ( v8 )
    {
      v11 = 0;
      v13 = -1;
      v12 = -1;
      v14 = (__int16 *)(FIELD_U32(v5, 104) + 72);
      v10 = -1;
      do
      {
        if ( v10 < (unsigned __int16)v14[8] )
          v10 = (unsigned __int16)v14[8];
        if ( v13 < (unsigned __int16)v14[3] )
          v13 = (unsigned __int16)v14[3];
        if ( v12 < (unsigned __int16)v14[2] )
          v12 = (unsigned __int16)v14[2];
        v15 = *v14;
        v14 += 48;
        --v8;
        v11 |= (v15 & 1) == 0;
      }
      while ( v8 );
      v25 = v12;
      v26 = v13;
      v27 = v10;
      v29 = v11;
    }
    v16 = a4 == 0;
    if ( a4 )
    {
      v8 = *a4;
      v16 = *a4 == 0;
    }
    if ( !v16 )
    {
      v17 = a4[2];
      v18 = v17 + 4 * v8;
      do
      {
        v19 = *(_DWORD *)(*(_DWORD *)v17 + 20);
        v20 = FIELD_U16(v19, 196);
        if ( FIELD_U16(v19, 196) )
        {
          v21 = (__int16 *)(FIELD_U32(v19, 104) + 72);
          do
          {
            if ( v10 < (unsigned __int16)v21[8] )
              v10 = (unsigned __int16)v21[8];
            if ( v13 < (unsigned __int16)v21[3] )
              v13 = (unsigned __int16)v21[3];
            if ( v12 < (unsigned __int16)v21[2] )
              v12 = (unsigned __int16)v21[2];
            v22 = *v21;
            v21 += 48;
            --v20;
            v11 |= (v22 & 1) == 0;
          }
          while ( v20 );
          v25 = v12;
          v26 = v13;
          v27 = v10;
          v29 = v11;
        }
        v17 += 4;
      }
      while ( v17 != v18 );
    }
    sub_60873C20(&v24);
    v23 = operator_new_8DE2C8(v30, a5, 8);
    return sub_60873D58(v7 + 32, &v24, v23, v30);
  }
  return result;
}
