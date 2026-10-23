/* sub_60654720
 * address: 0x60654720   size: 988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60654720(int a1, float a2, float a3, float a4, float a5)
{
  int v5; // r5
  float *v6; // r2
  float *v7; // r12
  float *v8; // r11
  float *v9; // r9
  float *v10; // r7
  float *v11; // r4
  float v12; // s0
  float v13; // s4
  int v14; // lr
  int v15; // r10
  float v16; // s4
  float v17; // s4
  float v18; // s4
  float v19; // s4
  float v20; // s4
  float v21; // s4
  float v22; // s0
  float v23; // s4
  float v24; // s2
  int v25; // r6
  int v26; // r2
  float *v27; // r7
  float v28; // s6
  float *v29; // r5
  float v30; // s6
  float v31; // s6
  int v32; // r5
  float *v33; // r7
  int v34; // r9
  _DWORD **v35; // r10
  int *v36; // r4
  int result; // r0
  int v38; // r6
  float v39; // s2
  float *v40; // [sp+0h] [bp-80h]
  float *v41; // [sp+4h] [bp-7Ch]
  float *v42; // [sp+8h] [bp-78h]
  float *v43; // [sp+Ch] [bp-74h]
  _BYTE v44[12]; // [sp+10h] [bp-70h] BYREF
  float v45; // [sp+1Ch] [bp-64h]
  float v46; // [sp+2Ch] [bp-54h]
  float v47; // [sp+3Ch] [bp-44h]
  _DWORD v48[2]; // [sp+40h] [bp-40h]
  char v49; // [sp+48h] [bp-38h]

  v5 = 0;
  v6 = (float *)(a1 + 6584);
  v49 = 0;
  v48[1] = 0;
  v48[0] = 0;
  v7 = (float *)(a1 + 6672);
  v8 = (float *)(a1 + 6684);
  v9 = (float *)(a1 + 6696);
  v43 = (float *)(a1 + 6708);
  v41 = (float *)(a1 + 6732);
  v40 = (float *)(a1 + 6744);
  v10 = (float *)(a1 + 6756);
  v11 = (float *)(a1 + 6660);
  v42 = (float *)(a1 + 6720);
  do
  {
    if ( !*(_BYTE *)(a1 + 6580 + v5) )
      goto LABEL_39;
    v12 = *v6;
    if ( *v6 < *v11 )
    {
      LOBYTE(v48[0]) = 1;
      goto LABEL_39;
    }
    if ( v12 > *v10 )
    {
      v49 = 1;
      goto LABEL_39;
    }
    if ( v12 <= *v11 )
    {
      v13 = *v7;
    }
    else
    {
      v13 = *v7;
      if ( v12 < *v7 )
      {
        v14 = 1;
        v15 = 0;
LABEL_38:
        *((_BYTE *)v48 + v15) = 1;
        *((_BYTE *)v48 + v14) = 1;
        goto LABEL_39;
      }
    }
    if ( v12 <= v13 )
    {
      v16 = *v8;
    }
    else
    {
      v16 = *v8;
      if ( v12 < *v8 )
      {
        v14 = 2;
        v15 = 1;
        goto LABEL_38;
      }
    }
    if ( v12 <= v16 )
    {
      v17 = *v9;
    }
    else
    {
      v17 = *v9;
      if ( v12 < *v9 )
      {
        v14 = 3;
        v15 = 2;
        goto LABEL_38;
      }
    }
    if ( v12 <= v17 )
    {
      v18 = *v43;
    }
    else
    {
      v18 = *v43;
      if ( v12 < *v43 )
      {
        v14 = 4;
        v15 = 3;
        goto LABEL_38;
      }
    }
    if ( v12 <= v18 )
    {
      v19 = *v42;
    }
    else
    {
      v19 = *v42;
      if ( v12 < *v42 )
      {
        v14 = 5;
        v15 = 4;
        goto LABEL_38;
      }
    }
    if ( v12 <= v19 )
    {
      v20 = *v41;
    }
    else
    {
      v20 = *v41;
      if ( v12 < *v41 )
      {
        v14 = 6;
        v15 = 5;
        goto LABEL_38;
      }
    }
    if ( v12 <= v20 )
    {
      v21 = *v40;
    }
    else
    {
      v21 = *v40;
      if ( v12 < *v40 )
      {
        v14 = 7;
        v15 = 6;
        goto LABEL_38;
      }
    }
    if ( v12 > v21 && v12 < *v10 )
    {
      v14 = 8;
      v15 = 7;
      goto LABEL_38;
    }
LABEL_39:
    ++v5;
    ++v6;
  }
  while ( v5 != 4 );
  v22 = -0.15;
  v23 = 0.1;
  v24 = -6.0;
  v25 = 0;
  v26 = a1 + 6600;
  v27 = (float *)(a1 + 6612);
  do
  {
    if ( !*(_BYTE *)(v26 + v25) )
    {
      if ( !*((_BYTE *)v48 + v25) )
        goto LABEL_51;
      *(_BYTE *)(v26 + v25) = 1;
      v29 = v27;
      v28 = *v27;
      goto LABEL_46;
    }
    v28 = *v27;
    if ( *((_BYTE *)v48 + v25) )
    {
      v29 = (float *)(a1 + 4 * v25 + 6612);
LABEL_46:
      v30 = v28 + -0.15;
      *v29 = v30;
      if ( v30 <= -6.0 )
        *v29 = -6.0;
      goto LABEL_51;
    }
    v31 = v28 + 0.1;
    *v27 = v31;
    if ( v31 >= 0.0 )
    {
      *v27 = 0.0;
      *(_BYTE *)(v26 + v25) = 0;
    }
LABEL_51:
    ++v25;
    ++v27;
  }
  while ( v25 != 9 );
  v32 = 0;
  v33 = (float *)(a1 + 6612);
  v34 = a1 + 6600;
  v35 = (_DWORD **)(a1 + 6576);
  v36 = dword_60CB631C;
  do
  {
    result = *(unsigned __int8 *)(v34 + v32);
    if ( *(_BYTE *)(v34 + v32) )
    {
      v38 = (*(int (__fastcall **)(_DWORD, int *, float, float, float, float, float))(*(_DWORD *)**v35 + 84))(
              **v35,
              v36,
              v22,
              a3,
              v24,
              a5,
              v23);
      (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)**v35 + 108))(**v35, v38, v44);
      v39 = *v33;
      v45 = v45 + 0.0;
      v46 = v39 + v46;
      v47 = v47 + 0.0;
      result = (*(int (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)**v35 + 104))(**v35, v38, v44);
    }
    ++v32;
    v36 += 2;
    ++v33;
  }
  while ( v32 != 9 );
  return result;
}
