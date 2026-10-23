/* ModelWrapper_setup_helper_450E5C
 * address: 0x60450E5C   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ModelWrapper_setup_helper_450E5C(int result, int a2, int a3, int *a4, int a5)
{
  bool v6; // zf
  int v7; // r9
  int v8; // r4
  char v9; // r11
  int v10; // r5
  int v11; // r7
  int v12; // r8
  int v13; // r0
  int v14; // r6
  _WORD *v15; // r0
  bool v16; // zf
  int v17; // r1
  int v18; // r9
  int v19; // r10
  int v20; // r6
  _WORD *v21; // r0
  int v22; // r0
  int v23; // [sp+0h] [bp-B0h]
  int v24; // [sp+4h] [bp-ACh]
  int v26; // [sp+8h] [bp-A8h]
  int v27; // [sp+Ch] [bp-A4h] BYREF
  int v28; // [sp+10h] [bp-A0h]
  int v29; // [sp+14h] [bp-9Ch]
  int v30; // [sp+18h] [bp-98h]
  int v31; // [sp+1Ch] [bp-94h]
  char v32; // [sp+20h] [bp-90h]
  char v33; // [sp+21h] [bp-8Fh]
  unsigned int v34; // [sp+24h] [bp-8Ch]
  int v35; // [sp+28h] [bp-88h]
  int v36; // [sp+2Ch] [bp-84h]
  int v37; // [sp+30h] [bp-80h]
  int v38; // [sp+34h] [bp-7Ch]
  int v39; // [sp+38h] [bp-78h]
  int v40; // [sp+3Ch] [bp-74h]
  int v41; // [sp+40h] [bp-70h]
  int v42; // [sp+44h] [bp-6Ch]
  int v43; // [sp+48h] [bp-68h]
  int v44; // [sp+4Ch] [bp-64h]
  int v45; // [sp+50h] [bp-60h]
  int v46; // [sp+54h] [bp-5Ch]
  int v47; // [sp+58h] [bp-58h]
  int v48; // [sp+5Ch] [bp-54h]
  int v49; // [sp+60h] [bp-50h]
  int v50; // [sp+64h] [bp-4Ch]
  int v51; // [sp+68h] [bp-48h]
  int v52; // [sp+6Ch] [bp-44h]
  int v53; // [sp+70h] [bp-40h]
  int v54; // [sp+74h] [bp-3Ch]
  int v55; // [sp+78h] [bp-38h]
  int v56; // [sp+7Ch] [bp-34h]
  int v57; // [sp+80h] [bp-30h]
  int v58; // [sp+84h] [bp-2Ch]
  int v59; // [sp+88h] [bp-28h]

  v6 = a4 == 0;
  v7 = FIELD_U16(a3, 78);
  if ( !a4 )
    v6 = v7 == 0;
  if ( !v6 )
  {
    v23 = result;
    v8 = -1;
    v9 = 0;
    v10 = -1;
    v11 = -1;
    v12 = -1;
    v13 = FIELD_U16(a2, 66);
    v31 = -1;
    v30 = -1;
    v29 = -1;
    v28 = -1;
    v32 = 1;
    v33 = 0;
    v34 = 0;
    v35 = 0;
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
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = -1;
    v52 = 0;
    v53 = 8;
    v54 = 0;
    v55 = -1;
    v56 = 0;
    v57 = 8;
    v58 = 0;
    v59 = -1;
    v27 = v13;
    if ( v7 )
    {
      v8 = -1;
      v9 = 0;
      v10 = -1;
      v11 = -1;
      v12 = -1;
      v14 = 0;
      do
      {
        v15 = *(_WORD **)sub_6043AFA0(a3, 3, v14++);
        if ( v12 < (unsigned __int16)v15[50] )
          v12 = (unsigned __int16)v15[50];
        v28 = v12;
        if ( v11 < (unsigned __int16)v15[57] + (unsigned __int16)v15[56] )
          v11 = (unsigned __int16)v15[57] + (unsigned __int16)v15[56];
        v29 = v11;
        if ( v10 < (unsigned __int16)v15[51] )
          v10 = (unsigned __int16)v15[51];
        v31 = v10;
        if ( v8 < (unsigned __int16)v15[59] )
          v8 = (unsigned __int16)v15[59];
        v30 = v8;
        v13 = (v15[48] & 1) == 0;
        v9 |= v13;
        v33 = v9;
      }
      while ( v7 != v14 );
    }
    v16 = a4 == 0;
    if ( a4 )
    {
      v13 = *a4;
      v16 = *a4 == 0;
    }
    if ( !v16 )
    {
      v17 = a4[2];
      v24 = v17 + 4 * v13;
      do
      {
        v18 = *(_DWORD *)v17;
        v19 = *(unsigned __int16 *)(*(_DWORD *)v17 + 78);
        v26 = v17;
        if ( *(_WORD *)(*(_DWORD *)v17 + 78) )
        {
          v20 = 0;
          do
          {
            v21 = *(_WORD **)sub_6043AFA0(v18, 3, v20++);
            if ( v12 < (unsigned __int16)v21[50] )
              v12 = (unsigned __int16)v21[50];
            v28 = v12;
            if ( v11 < (unsigned __int16)v21[57] + (unsigned __int16)v21[56] )
              v11 = (unsigned __int16)v21[57] + (unsigned __int16)v21[56];
            v29 = v11;
            if ( v10 < (unsigned __int16)v21[51] )
              v10 = (unsigned __int16)v21[51];
            v31 = v10;
            if ( v8 < (unsigned __int16)v21[59] )
              v8 = (unsigned __int16)v21[59];
            v30 = v8;
            v9 |= (v21[48] & 1) == 0;
            v33 = v9;
          }
          while ( v19 != v20 );
        }
        v17 = v26 + 4;
      }
      while ( v26 + 4 != v24 );
    }
    result = v12 | v11 | v10 | v8;
    if ( result >= 0 )
    {
      sub_6086AC64(&v27);
      v22 = operator_new_8DE2C8(v34, a5, 8);
      return sub_6086ADCC(v23 + 32, &v27, v22, v34);
    }
  }
  return result;
}
