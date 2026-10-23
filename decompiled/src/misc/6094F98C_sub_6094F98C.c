/* sub_6094F98C
 * address: 0x6094F98C   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094F98C(_DWORD *a1, int *a2, unsigned int a3, unsigned int a4, int a5, char a6)
{
  int result; // r0
  int v11; // r12
  int v12; // r3
  unsigned int v13; // r2
  _WORD *v14; // r1
  int v15; // r3
  int v16; // r4
  unsigned int v17; // r9
  int v18; // r12
  int v19; // r8
  _WORD *v20; // r5
  int v21; // r1
  unsigned int v22; // r7
  int v23; // r2
  int v24; // r4
  unsigned int v25; // r5
  int v26; // lr
  unsigned int v27; // r11
  unsigned int v28; // r8
  _WORD *v29; // r1
  int v30; // r0
  __int16 v31; // r7
  __int16 v32; // r9
  __int16 v33; // r7
  __int16 v34; // r10
  __int16 v35; // r7
  int v36; // r5
  unsigned int v37; // r0
  _DWORD *v38; // r8
  unsigned int v39; // r7
  _WORD *v40; // r2
  __int16 v41; // r5
  int v42; // r1
  int v43; // r2
  int v44; // r4
  unsigned int v45; // r0
  int *v46; // r12
  unsigned int v47; // r7
  int v48; // r5
  int v49; // r1
  _WORD *v50; // r2
  int v51; // r0
  int v52; // r1
  int v53; // r2
  int *v54; // [sp+4h] [bp-5Ch]
  int v55; // [sp+8h] [bp-58h]
  int v56; // [sp+8h] [bp-58h]
  int v57; // [sp+Ch] [bp-54h]
  int v58; // [sp+Ch] [bp-54h]
  int v59; // [sp+10h] [bp-50h]
  _DWORD *v60; // [sp+14h] [bp-4Ch]
  _DWORD *v61; // [sp+14h] [bp-4Ch]
  int v62; // [sp+18h] [bp-48h]
  int v63; // [sp+1Ch] [bp-44h]
  unsigned int v64; // [sp+24h] [bp-3Ch]
  unsigned int v65; // [sp+28h] [bp-38h]
  int v66; // [sp+30h] [bp-30h] BYREF
  int v67; // [sp+34h] [bp-2Ch]
  int v68; // [sp+38h] [bp-28h]

  if ( *a2 )
    result = dword_60CC73E8(*a2);
  else
    result = 0;
  v11 = a2[1];
  if ( a5 == 1 )
  {
    v15 = 0;
    v61 = a1;
    v57 = result;
    v55 = a2[1];
    v16 = 1 << a6;
    if ( 1 << a6 <= a4 )
    {
      if ( a3 )
      {
        v15 = 0;
        v17 = 1 << a6;
        v18 = result + v11 + 2;
        v19 = v16 * a3;
        do
        {
          v20 = (_WORD *)(v18 + 2 * v15);
          v21 = v19;
          v22 = 0;
          do
          {
            v22 += v16;
            *(v20 - 1) = v21;
            v21 += v16;
            v15 += 2;
            *v20 = v22 % a3 + v17 * a3;
            v20 += 2;
          }
          while ( v22 < a3 );
          v17 += v16;
          v19 += v16 * a3;
        }
        while ( v17 <= a4 );
      }
      else
      {
        v37 = 1 << a6;
        do
          v37 += v16;
        while ( v37 <= a4 );
      }
    }
    if ( a3 )
    {
      v38 = v61;
      v39 = 0;
      v40 = (_WORD *)(v57 + v55 + 2 * v15 + 6);
      do
      {
        *(v40 - 3) = v39;
        v15 += 4;
        *(v40 - 2) = a4 * a3 + v39;
        v41 = (a4 + 1) * a3 + v39;
        v39 += v16;
        *(v40 - 1) = v41;
        *v40 = (a4 + 2) * a3;
        v40 += 4;
      }
      while ( v39 < a3 );
    }
    else
    {
      v38 = v61;
    }
    v42 = a2[1];
    v43 = a2[2];
    v44 = 1;
    v66 = *a2;
    v67 = v42;
    v68 = v43;
    result = sub_60919D48(v38, &v66, 1, v15);
  }
  else
  {
    if ( a5 )
      return result;
    v60 = a1;
    v59 = (a4 + 2) * a3;
    if ( a3 )
    {
      v12 = 0;
      v13 = 0;
      v14 = (_WORD *)(result + v11 + 2);
      do
      {
        v12 += 3;
        *(v14 - 1) = a3 + v13;
        *v14 = v13;
        v13 += 1 << a6;
        v14[1] = v13 % a3 + a3;
        v14 += 3;
      }
      while ( v13 < a3 );
    }
    else
    {
      v12 = 0;
    }
    v54 = a2;
    v58 = result;
    v56 = v11;
    if ( a4 >= 2 )
    {
      v23 = 1;
      v24 = 1 << a6;
      if ( a3 )
      {
        v25 = a3;
        v64 = a4;
        v26 = -2 - v24;
        v63 = result + v11 + 6;
        v62 = ~a4;
        do
        {
          v27 = 0;
          v28 = v25;
          v65 = v25;
          v29 = (_WORD *)(v63 + 2 * v12);
          v30 = v23 * a3;
          v23 += v24;
          v31 = v23;
          if ( v23 > (int)a4 )
            v31 = a4;
          v32 = v31 * a3;
          v33 = v62;
          if ( v26 > v62 )
            v33 = v26;
          v34 = a3 * ~v33;
          do
          {
            v35 = v34 + v27;
            v27 += v24;
            v12 += 6;
            *(v29 - 3) = v35;
            *(v29 - 2) = v28;
            v28 += v24;
            v36 = v27 % a3 + v30;
            *(v29 - 1) = v36;
            *v29 = v35;
            v29[1] = v36;
            v29[2] = v27 % a3 + v32;
            v29 += 6;
          }
          while ( v27 < a3 );
          a4 = v64;
          v26 -= v24;
          v25 = v65 + v24 * a3;
        }
        while ( v23 < v64 );
      }
      else
      {
        v45 = 1;
        do
          v45 += v24;
        while ( v45 < a4 );
      }
    }
    if ( a3 )
    {
      v38 = v60;
      v46 = v54;
      v47 = 0;
      v48 = v59 - (1 << a6);
      v49 = 1 << a6;
      v50 = (_WORD *)(v58 + v56 + 2 * v12 + 4);
      v51 = v48;
      do
      {
        v47 += v49;
        *(v50 - 2) = v51;
        *(v50 - 1) = v59;
        v51 -= v49;
        v12 += 3;
        *v50 = v48 - v47 % a3;
        v50 += 3;
      }
      while ( v47 < a3 );
    }
    else
    {
      v38 = v60;
      v46 = v54;
    }
    v52 = v46[1];
    v53 = v46[2];
    v66 = *v46;
    v67 = v52;
    v68 = v53;
    result = sub_60919D48(v38, &v66, 1, v12);
    v44 = 4;
  }
  v38[2] = v44;
  return result;
}
