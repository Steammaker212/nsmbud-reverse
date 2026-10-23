/* sub_608FC14C
 * address: 0x608FC14C   size: 1136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608FC14C(int a1, int (***a2)(), int a3)
{
  int v6; // r0
  int v7; // r4
  unsigned __int8 **v8; // r5
  unsigned __int8 *v9; // r8
  int v10; // r10
  unsigned __int8 *v11; // r1
  unsigned __int8 *v12; // r4
  unsigned __int8 *v13; // r6
  bool v14; // zf
  unsigned __int8 *v15; // r1
  int v16; // r5
  int v17; // r9
  bool v18; // r2
  int v19; // r0
  bool v20; // zf
  int v21; // r0
  bool v22; // zf
  int v23; // r3
  int v24; // r1
  bool v25; // zf
  int v26; // r0
  int v27; // r2
  int v28; // r3
  bool v29; // zf
  signed int v30; // r11
  int v31; // r0
  int v32; // r0
  int v33; // r1
  unsigned __int8 *v34; // r12
  int i; // r1
  signed int v36; // r6
  int v37; // r0
  int v38; // r5
  int v39; // [sp+8h] [bp-1D8h]
  int v40; // [sp+Ch] [bp-1D4h]
  unsigned __int8 **v41; // [sp+10h] [bp-1D0h]
  void *v42; // [sp+14h] [bp-1CCh]
  int (**v43)(); // [sp+28h] [bp-1B8h] BYREF
  int v44; // [sp+2Ch] [bp-1B4h]
  signed int v45; // [sp+30h] [bp-1B0h]
  int v46; // [sp+34h] [bp-1ACh]
  _BYTE v47[68]; // [sp+38h] [bp-1A8h] BYREF
  int (**v48)(); // [sp+7Ch] [bp-164h] BYREF
  int v49; // [sp+80h] [bp-160h]
  int v50; // [sp+84h] [bp-15Ch]
  char v51; // [sp+88h] [bp-158h] BYREF
  _DWORD v52[4]; // [sp+188h] [bp-58h] BYREF
  int v53; // [sp+198h] [bp-48h]
  int v54; // [sp+19Ch] [bp-44h]
  int v55; // [sp+1A0h] [bp-40h]
  int v56; // [sp+1A4h] [bp-3Ch]
  char v57; // [sp+1A8h] [bp-38h]
  char v58; // [sp+1A9h] [bp-37h]
  int v59; // [sp+1ACh] [bp-34h]
  int v60; // [sp+1B0h] [bp-30h]
  char v61; // [sp+1B4h] [bp-2Ch]

  v6 = FIELD_U32(a3, 12);
  if ( v6 )
  {
    if ( dword_60CCEBD0 )
    {
      v52[0] = &sead__SafeStringBase__vtable;
      v52[1] = &byte_60B3BA34;
      v48 = &sead__SafeStringBase__vtable;
      v49 = v6;
      v56 = 0;
      v55 = 0;
      v54 = 0;
      v53 = 0;
      v52[3] = 0;
      v52[2] = 0;
      v57 = 1;
      v58 = 1;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      sead__SafeStringBase__operator_assign((int)v52, (int)&v48);
      v53 = FIELD_U32(a3, 20);
      v54 = -32;
      v7 = sub_608E8914(dword_60CCEBD0, (int)v52);
      if ( v7 )
      {
        v40 = a1;
        v39 = a3;
        v8 = (unsigned __int8 **)sub_608FDF04(v59 + 1, FIELD_U32(a3, 20), -4);
        v42 = (void *)v7;
        sub_608FDFB8(v8, v7, v59);
        v9 = *v8;
        v10 = (int)v8[1];
        off_60C5CB30[3]();
        v11 = *v8;
        v41 = v8;
        v12 = v8[1];
        v48 = (int (**)())&v51;
        v49 = 0;
        v50 = 256;
        v13 = v11;
        v14 = v9 == v11;
        if ( v9 == v11 )
          v14 = v12 == 0;
        v51 = 0;
        if ( !v14 )
        {
          v15 = v9;
          v16 = 0;
          v17 = 0;
          v18 = v10 > 0;
          while ( 1 )
          {
            if ( v9 == v13 )
            {
              v26 = v17;
              while ( 1 )
              {
                v23 = *v15;
                if ( !v18 )
                  break;
                if ( v23 != 35 && v23 != 10 )
                  goto LABEL_39;
                while ( 1 )
                {
                  v24 = v9[v26];
                  v25 = v24 == 13;
                  if ( v24 != 13 )
                    v25 = v24 == 10;
                  if ( v25 )
                    break;
                  if ( ++v26 >= v10 )
                    goto LABEL_35;
                }
                ++v26;
LABEL_35:
                v15 = &v9[v26];
                v18 = v26 < v10;
                if ( (unsigned __int8 *)v26 == v12 )
                  goto LABEL_71;
              }
              if ( v23 == 35 )
              {
                while ( 1 )
                  ;
              }
              if ( v23 == 10 )
              {
                while ( 1 )
                  ;
              }
            }
            else
            {
              v19 = *v15;
              if ( v18 )
              {
                while ( 1 )
                {
                  v20 = (unsigned __int8)v19 == 35;
                  if ( (unsigned __int8)v19 != 35 )
                    v20 = (unsigned __int8)v19 == 10;
                  if ( !v20 )
                    break;
                  while ( 1 )
                  {
                    v21 = v9[v17];
                    v22 = v21 == 13;
                    if ( v21 != 13 )
                      v22 = v21 == 10;
                    if ( v22 )
                      break;
                    if ( ++v17 >= v10 )
                      goto LABEL_20;
                  }
                  ++v17;
LABEL_20:
                  v15 = &v9[v17];
                  v19 = v9[v17];
                  if ( v17 >= v10 )
                    goto LABEL_21;
                }
                v26 = v17;
              }
              else
              {
LABEL_21:
                if ( v19 == 35 )
                {
                  while ( 1 )
                    ;
                }
                v14 = v19 == 10;
                v26 = v17;
                if ( v14 )
                {
                  while ( 1 )
                    ;
                }
              }
            }
LABEL_39:
            v27 = v26;
            v17 = v10;
            if ( v26 < v10 )
            {
              v27 = v26;
              while ( 1 )
              {
                v28 = v9[v27];
                v29 = v28 == 13;
                if ( v28 != 13 )
                  v29 = v28 == 10;
                if ( v29 )
                  break;
                if ( ++v27 >= v10 )
                {
                  v17 = v10;
                  goto LABEL_47;
                }
              }
              v17 = v27 + 1;
            }
LABEL_47:
            v30 = v27 - v26;
            sub_608FDFB8(&v48, v15, v27 - v26);
            if ( v16 == 1 )
              break;
            memset(v47, 0, 64);
            v43 = (int (**)())v47;
            v46 = 0;
            v45 = 0;
            v44 = 16;
            v31 = sub_608FC5E0();
            if ( &v43 != a2 && v31 == 1 )
            {
              v32 = (int)a2[1];
              v33 = v46;
              v34 = v13;
              a2[2] = 0;
              a2[3] = 0;
              if ( v33 < v32 )
                v32 = v33;
              if ( v32 >= 1 )
              {
                for ( i = 0; i < v32; ++i )
                {
                  v36 = v45;
                  if ( i + v45 >= v44 )
                    v36 = v45 - v44;
                  (*a2)[i] = *(&v43[i] + v36);
                }
              }
              v13 = v34;
              a2[3] = (int (**)())v32;
            }
            v15 = &v9[v17];
            v16 = 1;
            v18 = v17 < v10;
            if ( v9 == v13 && (unsigned __int8 *)v17 == v12 )
              goto LABEL_71;
          }
          if ( v30 >= 1 )
          {
            v37 = operator_new_8DE2C8(v30 + 1, FIELD_U32(v39, 20), 4);
            FIELD_U32(v40, 28) = v37;
            v44 = v37;
            v43 = &BufferedSafeStringBase_char_vtable_probably;
            v45 = v30 + 1;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v43);
            v38 = v44;
            if ( (int (**)())v44 != v48 )
            {
              if ( v30 >= v45 )
                v30 = v45 - 1;
              qmemcpy((void *)v44, v48, v30);
              *(_BYTE *)(v38 + v30) = 0;
            }
            sead__SafeStringBase__operator_assign(v40 + 20, (int)&v43);
          }
        }
LABEL_71:
        if ( v41 )
          operator_delete(v41);
        sub_608E8A3C(dword_60CCEBD0, v42);
      }
    }
  }
}
