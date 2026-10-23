/* ModelWrapper_setup_helper_445CD0
 * address: 0x60445CD0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ModelWrapper_setup_helper_445CD0(int a1, int a2, int a3, int *a4, int a5)
{
  int result; // r0
  int v8; // r0
  int v9; // r0
  bool v10; // zf
  int *v11; // r6
  int v12; // r7
  int v13; // t1
  bool v14; // nf
  bool v15; // nf
  int v16; // r0
  int v17; // [sp+0h] [bp-98h] BYREF
  int v18; // [sp+4h] [bp-94h]
  int v19; // [sp+8h] [bp-90h]
  int v20; // [sp+Ch] [bp-8Ch]
  int v21; // [sp+10h] [bp-88h]
  char v22; // [sp+14h] [bp-84h]
  char v23; // [sp+15h] [bp-83h]
  unsigned int v24; // [sp+18h] [bp-80h]
  int v25; // [sp+1Ch] [bp-7Ch]
  int v26; // [sp+20h] [bp-78h]
  int v27; // [sp+24h] [bp-74h]
  int v28; // [sp+28h] [bp-70h]
  int v29; // [sp+2Ch] [bp-6Ch]
  int v30; // [sp+30h] [bp-68h]
  int v31; // [sp+34h] [bp-64h]
  int v32; // [sp+38h] [bp-60h]
  int v33; // [sp+3Ch] [bp-5Ch]
  int v34; // [sp+40h] [bp-58h]
  int v35; // [sp+44h] [bp-54h]
  int v36; // [sp+48h] [bp-50h]
  int v37; // [sp+4Ch] [bp-4Ch]
  int v38; // [sp+50h] [bp-48h]
  int v39; // [sp+54h] [bp-44h]
  int v40; // [sp+58h] [bp-40h]
  int v41; // [sp+5Ch] [bp-3Ch]
  int v42; // [sp+60h] [bp-38h]
  int v43; // [sp+64h] [bp-34h]
  int v44; // [sp+68h] [bp-30h]
  int v45; // [sp+6Ch] [bp-2Ch]
  int v46; // [sp+70h] [bp-28h]
  int v47; // [sp+74h] [bp-24h]
  int v48; // [sp+78h] [bp-20h]
  int v49; // [sp+7Ch] [bp-1Ch]

  if ( a4 || (result = FIELD_U16(a3, 76) | FIELD_U16(a3, 74), FIELD_U32(a3, 74)) )
  {
    v8 = FIELD_U16(a2, 66);
    v21 = -1;
    v20 = -1;
    v19 = -1;
    v18 = -1;
    v22 = 1;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 8;
    v28 = 0;
    v29 = -1;
    v30 = 0;
    v31 = 8;
    v32 = 0;
    v33 = -1;
    v34 = 0;
    v35 = 8;
    v36 = 0;
    v37 = -1;
    v38 = 0;
    v39 = 8;
    v40 = 0;
    v41 = -1;
    v42 = 0;
    v43 = 8;
    v44 = 0;
    v45 = -1;
    v46 = 0;
    v47 = 8;
    v48 = 0;
    v49 = -1;
    v17 = v8;
    v9 = sub_60445E30(&v17, a3);
    v10 = a4 == 0;
    if ( a4 )
    {
      v9 = *a4;
      v10 = *a4 == 0;
    }
    if ( !v10 )
    {
      v11 = (int *)a4[2];
      v12 = 4 * v9;
      do
      {
        v13 = *v11++;
        sub_60445E30(&v17, v13);
        v12 -= 4;
      }
      while ( v12 );
    }
    result = v17;
    if ( v17 >= 0 )
    {
      result = v18;
      v14 = v18 < 0;
      if ( v18 >= 0 )
      {
        result = v19;
        v14 = v19 < 0;
      }
      if ( !v14 )
      {
        result = v21;
        v15 = v21 < 0;
        if ( v21 >= 0 )
        {
          result = v20;
          v15 = v20 < 0;
        }
        if ( !v15 )
        {
          sub_6086AC64(&v17);
          v16 = operator_new_8DE2C8(v24, a5, 8);
          return sub_6086ADCC(a1 + 32, &v17, v16, v24);
        }
      }
    }
  }
  return result;
}
