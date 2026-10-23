/* sub_609503B0
 * address: 0x609503B0   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609503B0(_DWORD *a1, _DWORD *a2, unsigned int a3, unsigned int a4, int a5, char a6)
{
  _DWORD *v6; // r10
  int result; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r11
  int v14; // r8
  int v15; // r3
  int v16; // r12
  unsigned int v17; // r0
  unsigned int v18; // lr
  __int16 v19; // r0
  _WORD *v20; // r6
  int v21; // r1
  unsigned int v22; // r5
  __int16 v23; // r4
  int v24; // r2
  int v25; // r12
  int v26; // r0
  int v27; // r11
  unsigned int v28; // r1
  int v29; // r3
  int v30; // r10
  unsigned int v31; // r1
  unsigned int v32; // r8
  __int16 v33; // lr
  int v34; // r1
  _WORD *v35; // r0
  int v36; // r6
  unsigned int v37; // r0
  int v38; // r2
  int v39; // r4
  unsigned int v40; // r0
  int v41; // r2
  _DWORD *v42; // [sp+4h] [bp-44h]
  int v43; // [sp+Ch] [bp-3Ch]
  unsigned int v44; // [sp+10h] [bp-38h]
  unsigned int v45; // [sp+14h] [bp-34h]
  int v46; // [sp+18h] [bp-30h] BYREF
  int v47; // [sp+1Ch] [bp-2Ch]
  int v48; // [sp+20h] [bp-28h]

  v6 = a2;
  if ( *a2 )
    result = dword_60CC73E8(*a2);
  else
    result = 0;
  v11 = v6[1];
  v45 = a4;
  if ( a5 )
  {
    if ( a5 != 1 )
      return result;
    if ( a4 )
    {
      v12 = 1 << a6;
      if ( a3 )
      {
        v13 = v12 * a3;
        v14 = 0;
        v15 = 0;
        v16 = result + v11 + 4;
        v17 = 0;
        do
        {
          v18 = v17 + v12;
          v19 = v17 * a3;
          v20 = (_WORD *)(v16 + 2 * v15);
          v21 = v14;
          v22 = 0;
          do
          {
            v22 += v12;
            *(v20 - 2) = v21;
            v15 += 4;
            *(v20 - 1) = v22 % a3 + v19;
            v23 = v13 + v21;
            *v20 = v21;
            v21 += v12;
            v20[1] = v23;
            v20 += 4;
          }
          while ( v22 < a3 );
          v14 += v13;
          v17 = v18;
        }
        while ( v18 < v45 );
        v11 = v6[1];
      }
      else
      {
        v15 = 0;
        v37 = 0;
        do
          v37 += v12;
        while ( v37 < a4 );
      }
    }
    else
    {
      v15 = 0;
    }
    v38 = v6[2];
    v39 = 1;
    v46 = *v6;
    v47 = v11;
    v48 = v38;
    result = sub_60919D48(a1, &v46, 1, v15);
  }
  else
  {
    if ( a4 )
    {
      v24 = 1 << a6;
      if ( a3 )
      {
        v25 = v24 * a3;
        v26 = result + v11;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v42 = v6;
        v43 = v26 + 6;
        do
        {
          v30 = v28 * a3;
          v31 = v28 + v24;
          v32 = 0;
          v33 = v31 * a3;
          v44 = v31;
          v34 = v27;
          v35 = (_WORD *)(v43 + 2 * v29);
          do
          {
            v32 += v24;
            v29 += 6;
            v36 = v32 % a3 + v30;
            *(v35 - 3) = v36;
            *(v35 - 2) = v34;
            *(v35 - 1) = v25 + v34;
            *v35 = v36;
            v35[1] = v25 + v34;
            v35[2] = v32 % a3 + v33;
            v34 += v24;
            v35 += 6;
          }
          while ( v32 < a3 );
          v28 = v44;
          v27 += v25;
        }
        while ( v44 < a4 );
        v6 = v42;
        v11 = v42[1];
      }
      else
      {
        v29 = 0;
        v40 = 0;
        do
          v40 += v24;
        while ( v40 < a4 );
      }
    }
    else
    {
      v29 = 0;
    }
    v41 = v6[2];
    v46 = *v6;
    v47 = v11;
    v48 = v41;
    result = sub_60919D48(a1, &v46, 1, v29);
    v39 = 4;
  }
  a1[2] = v39;
  return result;
}
