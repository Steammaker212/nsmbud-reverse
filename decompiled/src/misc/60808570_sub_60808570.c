/* sub_60808570
 * address: 0x60808570   size: 1036   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60808570(int a1, _DWORD *a2, float *a3)
{
  bool v4; // zf
  float v5; // s16
  int v6; // r0
  float v7; // r7
  int v8; // r5
  int *v9; // r5
  int v10; // r0
  int v11; // r1
  int *v12; // r2
  _DWORD *v13; // r3
  int v14; // t1
  int v15; // r0
  int v16; // r1
  _DWORD *v17; // r2
  int v18; // t1
  int v19; // r0
  int *v20; // r5
  int v21; // r1
  _DWORD *v22; // r3
  int *v23; // r2
  int v24; // t1
  int v25; // r0
  int v26; // r1
  _DWORD *v27; // r2
  int v28; // t1
  int v29; // r0
  int *v30; // r5
  int v31; // r1
  _DWORD *v32; // r3
  int *v33; // r2
  int v34; // t1
  int v35; // r0
  int v36; // r1
  _DWORD *v37; // r2
  int v38; // t1
  int v39; // r0
  int *v40; // r5
  int v41; // r1
  _DWORD *v42; // r3
  int *v43; // r2
  int v44; // t1
  int v45; // r0
  int v46; // r1
  _DWORD *v47; // r2
  int v48; // t1
  float v49; // s0
  int v50; // r0
  int v51; // r0
  float v52; // s0
  int v53; // r0
  float v54; // s0
  int v55; // r0
  float v56; // s0
  _BYTE v57[100]; // [sp+0h] [bp-F0h] BYREF
  _BYTE v58[140]; // [sp+64h] [bp-8Ch] BYREF

  v4 = a2 == 0;
  if ( a2 )
    v4 = a3 == 0;
  if ( v4 )
    return;
  v5 = a3[1];
  v6 = *a2;
  v7 = *a3;
  if ( !*((_BYTE *)a3 + 8) )
  {
    if ( v6 )
    {
      sub_608B0510(v6, 0, 3, 1);
      if ( *a2 )
      {
        sub_608B0510(*a2, 0, 4, 1);
        if ( *a2 )
        {
          sub_608B0510(*a2, 0, 5, 1);
          if ( *a2 )
            sub_608B0510(*a2, 0, 6, 1);
        }
      }
    }
    v9 = (int *)v58;
    v10 = sub_608D09C4(v58);
    sub_608D09D0(v10, 0, 0.707);
    sub_608D09D0(v58, 1, 0.707);
    sub_608D09D0(v58, 2, 0.0);
    sub_608D09D0(v58, 3, 0.0);
    sub_608D09D0(v58, 4, 0.0);
    sub_608D09D0(v58, 5, 0.0);
    if ( *a2 )
    {
      v11 = 100;
      v12 = (int *)v58;
      v13 = v57;
      do
      {
        v14 = *v12++;
        v11 -= 4;
        *v13++ = v14;
      }
      while ( v11 );
      ((void (*)(void))sub_608B0454)();
      v15 = *a2;
      v16 = 100;
      v17 = v57;
      do
      {
        v18 = *v9++;
        v16 -= 4;
        *v17++ = v18;
      }
      while ( v16 );
      sub_608B0454(v15, 0, 1, 3);
      v19 = *a2;
      if ( *a2 )
      {
        v20 = (int *)v58;
        v21 = 100;
        v22 = v57;
        v23 = (int *)v58;
        do
        {
          v24 = *v23++;
          v21 -= 4;
          *v22++ = v24;
        }
        while ( v21 );
        sub_608B0454(v19, 0, 0, 4);
        v25 = *a2;
        v26 = 100;
        v27 = v57;
        do
        {
          v28 = *v20++;
          v26 -= 4;
          *v27++ = v28;
        }
        while ( v26 );
        sub_608B0454(v25, 0, 1, 4);
        v29 = *a2;
        if ( *a2 )
        {
          v30 = (int *)v58;
          v31 = 100;
          v32 = v57;
          v33 = (int *)v58;
          do
          {
            v34 = *v33++;
            v31 -= 4;
            *v32++ = v34;
          }
          while ( v31 );
          sub_608B0454(v29, 0, 0, 5);
          v35 = *a2;
          v36 = 100;
          v37 = v57;
          do
          {
            v38 = *v30++;
            v36 -= 4;
            *v37++ = v38;
          }
          while ( v36 );
          sub_608B0454(v35, 0, 1, 5);
          v39 = *a2;
          if ( *a2 )
          {
            v40 = (int *)v58;
            v41 = 100;
            v42 = v57;
            v43 = (int *)v58;
            do
            {
              v44 = *v43++;
              v41 -= 4;
              *v42++ = v44;
            }
            while ( v41 );
            sub_608B0454(v39, 0, 0, 6);
            v45 = *a2;
            v46 = 100;
            v47 = v57;
            do
            {
              v48 = *v40++;
              v46 -= 4;
              *v47++ = v48;
            }
            while ( v46 );
            sub_608B0454(v45, 0, 1, 6);
          }
        }
      }
    }
    goto LABEL_36;
  }
  if ( !v6 )
  {
LABEL_36:
    v8 = *a2;
    goto LABEL_37;
  }
  v8 = 0;
  sub_608B0510(v6, 0, 3, 0);
  if ( *a2 )
  {
    v8 = 0;
    sub_608B0510(*a2, 0, 4, 0);
    if ( *a2 )
    {
      v8 = 0;
      sub_608B0510(*a2, 0, 5, 0);
      if ( *a2 )
      {
        sub_608B0510(*a2, 0, 6, 0);
        goto LABEL_36;
      }
    }
  }
LABEL_37:
  if ( (LOBYTE(v7) & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_43;
    v50 = v8;
    v49 = v5;
  }
  else
  {
    if ( !v8 )
      goto LABEL_43;
    v49 = 0.0;
    v50 = v8;
  }
  sub_608B03B0(v50, 3, v49);
LABEL_43:
  v51 = *a2;
  if ( (LOBYTE(v7) & 2) != 0 )
  {
    if ( !v51 )
      goto LABEL_49;
    v52 = v5;
  }
  else
  {
    if ( !v51 )
      goto LABEL_49;
    v52 = 0.0;
  }
  sub_608B03B0(v51, 4, v52);
LABEL_49:
  v53 = *a2;
  if ( (LOBYTE(v7) & 4) != 0 )
  {
    if ( v53 )
    {
      v54 = v5;
      goto LABEL_54;
    }
  }
  else if ( v53 )
  {
    v54 = 0.0;
LABEL_54:
    sub_608B03B0(v53, 5, v54);
  }
  v55 = *a2;
  if ( (LOBYTE(v7) & 8) != 0 )
  {
    if ( !v55 )
      return;
    v56 = v5;
  }
  else
  {
    if ( !v55 )
      return;
    v56 = 0.0;
  }
  sub_608B03B0(v55, 6, v56);
}
