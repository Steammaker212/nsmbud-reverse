/* sub_608CA4A0
 * address: 0x608CA4A0   size: 1300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608CA4A0(int a1, float *a2, int a3, int a4, int a5, int a6)
{
  unsigned int v10; // r9
  float *v11; // r0
  float v12; // s20
  float v13; // s18
  float v14; // s26
  float v15; // s24
  float v16; // s16
  float v17; // s22
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  float v22; // s18
  float v23; // s16
  bool v24; // zf
  float v25; // s20
  float v26; // s0
  float v27; // s18
  float v28; // s0
  float v29; // s0
  int v30; // r0
  float v31; // s2
  float v32; // s0
  int j; // r7
  int v34; // r6
  int v35; // r0
  float v36; // s0
  int v37; // r0
  int i; // r6
  int v39; // r7
  int v40; // r0
  float v41; // s0
  int v42; // r0
  float v43; // s0
  int v44; // [sp+0h] [bp-68h] BYREF
  __int16 v45; // [sp+4h] [bp-64h]
  char v46; // [sp+6h] [bp-62h]

  v10 = *((_DWORD *)sub_608065A0() + a6 + 32);
  if ( FIELD_U32(a3, 4) )
  {
    v11 = (float *)(a3 + 24 * a5);
    v12 = v11[2];
    v13 = v11[3];
    v14 = v11[4];
    v15 = v11[5];
    v16 = v11[6];
    v17 = v11[7];
    goto LABEL_31;
  }
  v18 = 0;
  v46 = 0;
  v45 = 0;
  v44 = 0;
  switch ( FIELD_U32(a1, 440) )
  {
    case 0:
      v18 = 0;
      goto LABEL_11;
    case 1:
      v19 = 0;
      goto LABEL_13;
    case 2:
      v20 = 0;
      goto LABEL_15;
    case 3:
      v18 = 1;
      goto LABEL_11;
    case 4:
      v44 = 1;
      LOBYTE(v45) = 1;
      break;
    case 5:
      v20 = 1;
      goto LABEL_15;
    case 6:
      v18 = 2;
      goto LABEL_11;
    case 7:
      v19 = 2;
LABEL_13:
      v44 = v19;
      LOBYTE(v45) = 1;
      break;
    case 8:
      v20 = 2;
LABEL_15:
      v44 = v20;
      v45 = 257;
      break;
    default:
LABEL_11:
      v44 = v18;
      break;
  }
  v17 = 0.0;
  if ( v10 - 1 < 2 )
  {
    v21 = FIELD_U32(a1, 400);
    if ( v21 <= 1 )
    {
      v27 = FIELD_F32(a3, 56);
    }
    else
    {
      if ( FIELD_U32(a1, 436) == 1 )
      {
        if ( a5 != 1 )
        {
          v22 = 0.0;
          if ( !a5 )
          {
            v23 = ((float (__fastcall *)(int *, unsigned int, float))loc_608C6A70)(&v44, v10, FIELD_F32(a3, 56));
            v24 = v10 == 2;
            if ( v10 >= 2 )
              goto LABEL_74;
LABEL_28:
            v25 = ((float (__fastcall *)(int *, float))loc_608C6B24)(&v44, 0.0);
            v29 = 2.0;
LABEL_29:
            v26 = ((float (__fastcall *)(int *, float))loc_608C6B24)(&v44, v29);
            goto LABEL_30;
          }
          v23 = 0.0;
          v24 = v10 == 2;
          if ( v10 < 2 )
            goto LABEL_28;
LABEL_74:
          if ( !v24 )
          {
            v25 = 0.0;
            v26 = 0.0;
            goto LABEL_30;
          }
          v25 = ((float (__fastcall *)(int *, float))loc_608C6B24)(&v44, FIELD_F32(a3, 60));
          v29 = 2.0 - FIELD_F32(a3, 60);
          goto LABEL_29;
        }
        v23 = 0.0;
        v28 = 0.0 - FIELD_F32(a3, 56);
LABEL_27:
        v22 = ((float (__fastcall *)(int *, unsigned int, float))loc_608C6A70)(&v44, v10, v28);
        v24 = v10 == 2;
        if ( v10 < 2 )
          goto LABEL_28;
        goto LABEL_74;
      }
      v27 = FIELD_F32(a3, 56);
      if ( v21 == 2 )
      {
        if ( a5 == 1 )
        {
          v43 = 1.0;
          goto LABEL_78;
        }
        if ( !a5 )
        {
          v43 = -1.0;
LABEL_78:
          v27 = v27 + v43;
        }
      }
    }
    v23 = ((float (__fastcall *)(int *, unsigned int, float))loc_608C6A70)(&v44, v10, v27);
    v28 = 0.0 - v27;
    goto LABEL_27;
  }
  v23 = 0.0;
  v22 = 0.0;
  v25 = 0.0;
  v26 = 0.0;
  if ( !v10 )
  {
    v22 = ((float (__fastcall *)(int *, _DWORD, float))loc_608C6A70)(&v44, 0, 0.0);
    v23 = v22;
    goto LABEL_28;
  }
LABEL_30:
  v15 = v22 * v26;
  v13 = v22 * v25;
  v14 = v23 * v26;
  v12 = v23 * v25;
  v16 = 0.0;
LABEL_31:
  v30 = *((_DWORD *)sub_608065A0() + a6 + 33);
  if ( v30 != 1 )
  {
    if ( !v30 )
    {
      if ( v10 == 2 )
      {
        v31 = v15 + v13;
        v15 = 0.0;
        v32 = v31 + (float)(v14 + v12);
        v14 = 0.0;
        v13 = v32 * 0.5;
        v12 = v32 * 0.5;
      }
      else if ( v10 == 1 )
      {
        v13 = (float)(v13 + v12) * 0.5;
        v12 = v13;
        if ( !a4 )
          goto LABEL_57;
        goto LABEL_42;
      }
    }
LABEL_41:
    if ( !a4 )
      goto LABEL_57;
    goto LABEL_42;
  }
  if ( v10 != 2 )
    goto LABEL_41;
  v13 = v15 + v13;
  v12 = v14 + v12;
  v15 = 0.0;
  v14 = 0.0;
  if ( !a4 )
  {
LABEL_57:
    for ( i = 0; i != 24; ++i )
    {
      v39 = i / (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 556) + 4))(FIELD_U32(a1, 556));
      v40 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 556) + 8))(FIELD_U32(a1, 556));
      v41 = 0.0;
      if ( v39 < v40 )
      {
        v42 = (*(int (__fastcall **)(_DWORD, float))(**(_DWORD **)(a1 + 556) + 4))(FIELD_U32(a1, 556), 0.0);
        v41 = v12;
        switch ( i % v42 )
        {
          case 0:
            break;
          case 1:
            v41 = v13;
            break;
          case 2:
            v41 = v14;
            break;
          case 3:
            v41 = v15;
            break;
          case 4:
            v41 = v16;
            break;
          case 5:
            v41 = v17;
            break;
          default:
            v41 = 0.0;
            break;
        }
      }
      *a2++ = v41;
    }
    return;
  }
LABEL_42:
  for ( j = 0; j != 24; ++j )
  {
    v34 = j / (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 556) + 4))(FIELD_U32(a1, 556));
    v35 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 556) + 8))(FIELD_U32(a1, 556));
    v36 = 0.0;
    if ( v34 < v35 )
    {
      if ( sub_608B0FF8(a4) && sub_608B0FC0(a4) == 1 && sub_608B0FD8(a4, v34) == 1 )
      {
        v36 = sub_608B0F74(a4, a5, j);
      }
      else
      {
        v37 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 556) + 4))(FIELD_U32(a1, 556));
        v36 = v12;
        switch ( j % v37 )
        {
          case 0:
            break;
          case 1:
            v36 = v13;
            break;
          case 2:
            v36 = v14;
            break;
          case 3:
            v36 = v15;
            break;
          case 4:
            v36 = v16;
            break;
          case 5:
            v36 = v17;
            break;
          default:
            v36 = 0.0;
            break;
        }
      }
    }
    *a2++ = v36;
  }
}
