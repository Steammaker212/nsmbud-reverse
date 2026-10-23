/* sub_6094E5B0
 * address: 0x6094E5B0   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094E5B0(_DWORD *a1, int *a2, unsigned int a3, int a4, int a5, char a6)
{
  int result; // r0
  int v11; // r7
  int v12; // r10
  unsigned int v13; // r4
  int v14; // r3
  unsigned int v15; // r2
  int v16; // r1
  unsigned int v17; // r9
  int v18; // r5
  _WORD *v19; // r8
  unsigned int v20; // r12
  unsigned int v21; // r0
  _WORD *v22; // r0
  __int16 v23; // r4
  unsigned int v24; // r7
  int v25; // r3
  __int16 v26; // r5
  unsigned int v27; // r5
  __int16 v28; // r2
  unsigned int v29; // r4
  __int16 v30; // r5
  int v31; // r7
  _WORD *v32; // r0
  unsigned int v33; // r5
  int v34; // r4
  int v35; // r7
  int v36; // r2
  int v37; // r1
  int v38; // r2
  int v39; // r4
  unsigned int v40; // r0
  int v41; // r1
  int *v42; // r9
  _WORD *v43; // r0
  __int16 v44; // r2
  int v45; // r1
  int v46; // r2
  int v47; // [sp+4h] [bp-44h]
  __int16 v48; // [sp+8h] [bp-40h]
  __int16 v49; // [sp+Ch] [bp-3Ch]
  int *v50; // [sp+10h] [bp-38h]
  _DWORD *v51; // [sp+14h] [bp-34h]
  int v52; // [sp+18h] [bp-30h] BYREF
  int v53; // [sp+1Ch] [bp-2Ch]
  int v54; // [sp+20h] [bp-28h]

  if ( *a2 )
    result = dword_60CC73E8(*a2);
  else
    result = 0;
  v11 = a2[1];
  v12 = (a4 + 3) * a3;
  if ( a5 )
  {
    if ( a5 != 1 )
      return result;
    v13 = a4 + 1;
    v14 = 0;
    v51 = a1;
    v50 = a2;
    v47 = result;
    v48 = a4;
    v49 = (a4 + 3) * a3;
    if ( a4 != -1 )
    {
      v15 = 1;
      v16 = 1 << a6;
      if ( a3 )
      {
        v17 = a3 + 1;
        v14 = 0;
        v18 = result + v11 + 2;
        do
        {
          v19 = (_WORD *)(v18 + 2 * v14);
          v20 = v17;
          v21 = 0;
          do
          {
            v21 += v16;
            *(v19 - 1) = v20;
            v20 += v16;
            v14 += 2;
            *v19 = v21 % a3 + v15 * a3 + 1;
            v19 += 2;
          }
          while ( v21 < a3 );
          v15 += v16;
          v17 += v16 * a3;
        }
        while ( v15 <= v13 );
      }
      else
      {
        v40 = 1;
        do
          v40 += v16;
        while ( v40 <= v13 );
      }
    }
    if ( a3 )
    {
      v41 = 1;
      a1 = v51;
      v42 = v50;
      v43 = (_WORD *)(v47 + v11 + 2 * v14);
      do
      {
        *v43 = 0;
        v43[1] = v41;
        v14 += 6;
        v43[2] = a3 + v41;
        v43[3] = v13 * a3 + v41;
        v44 = (v48 + 2) * a3 + v41;
        v41 += 1 << a6;
        v43[4] = v44;
        v43[5] = v49 + 1;
        v43 += 6;
      }
      while ( v41 - 1 < a3 );
    }
    else
    {
      a1 = v51;
      v42 = v50;
    }
    v45 = v42[1];
    v46 = v42[2];
    v39 = 1;
    v52 = *v42;
    v53 = v45;
    v54 = v46;
    result = sub_60919D48(a1, &v52, 1, v14);
  }
  else
  {
    if ( a3 )
    {
      v22 = (_WORD *)(result + v11);
      v23 = a4;
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = v24 + 1;
        v24 += 1 << a6;
        v25 += 3;
        *v22 = v26;
        v22[1] = 0;
        v22[2] = v24 % a3 + 1;
        v22 += 3;
      }
      while ( v24 < a3 );
      v27 = 0;
      v28 = (v23 + 1) * a3 + 1;
      do
      {
        v25 += 6;
        *v22 = a3 + v27 + 1;
        v29 = v27 + (1 << a6);
        v30 = v28 + v27;
        v31 = v29 % a3 + a3 + 1;
        v22[1] = v31;
        v22[2] = v30;
        v22[3] = v30;
        v22[4] = v31;
        v22[5] = v29 % a3 + v28;
        v22 += 6;
        v27 = v29;
      }
      while ( v29 < a3 );
      v32 = v22 + 1;
      v33 = 0;
      v34 = v12 + 1 - (1 << a6);
      v35 = 1 << a6;
      v36 = v34;
      do
      {
        v33 += v35;
        *(v32 - 1) = v36;
        *v32 = v12 + 1;
        v36 -= v35;
        v25 += 3;
        v32[1] = v34 - v33 % a3;
        v32 += 3;
      }
      while ( v33 < a3 );
    }
    else
    {
      v25 = 0;
    }
    v37 = a2[1];
    v38 = a2[2];
    v52 = *a2;
    v53 = v37;
    v54 = v38;
    result = sub_60919D48(a1, &v52, 1, v25);
    v39 = 4;
  }
  a1[2] = v39;
  return result;
}
