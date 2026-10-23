/* s_0x_08x_ref
 * address: 0x60951778   size: 1712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall s_0x_08x_ref(unsigned int **a1, int a2, _DWORD *a3)
{
  unsigned int v6; // r2
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  unsigned int v9; // r1
  unsigned int *result; // r0
  unsigned int v11; // r1
  unsigned int v12; // r5
  int v13; // r6
  char *v14; // r4
  unsigned int v15; // r1
  _DWORD *v16; // r6
  int v17; // r3
  unsigned int *v18; // r4
  int *v19; // r1
  int *v20; // r6
  signed int v21; // r5
  bool v22; // cc
  unsigned int v23; // r2
  _DWORD *v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r0
  unsigned int v27; // r11
  int v28; // r4
  char *v29; // r10
  char *v30; // r7
  int *v31; // r1
  int *v32; // r5
  signed int v33; // r6
  unsigned int v34; // r2
  _DWORD *v35; // r0
  unsigned int v36; // r1
  unsigned int v37; // r0
  int v38; // r1
  char *v39; // r0
  bool v40; // zf
  unsigned int v41; // r0
  int v42; // r1
  char *v43; // r0
  bool v44; // zf
  unsigned int v45; // r0
  int v46; // r1
  char *v47; // r0
  bool v48; // zf
  unsigned int v49; // r0
  int v50; // r1
  char *v51; // r0
  char *v52; // r2
  bool v53; // zf
  int *v54; // r1
  int *v55; // r10
  signed int v56; // r7
  unsigned int *v57; // [sp+4h] [bp-8Ch]
  int v58; // [sp+8h] [bp-88h]
  unsigned int *v59; // [sp+Ch] [bp-84h]
  _DWORD *v60; // [sp+10h] [bp-80h]
  unsigned int **v61; // [sp+24h] [bp-6Ch]
  _DWORD v62[4]; // [sp+28h] [bp-68h] BYREF
  int v63; // [sp+38h] [bp-58h]
  char v64; // [sp+3Ch] [bp-54h]
  int (**v65)(); // [sp+40h] [bp-50h] BYREF
  int *v66; // [sp+44h] [bp-4Ch]
  int v67; // [sp+48h] [bp-48h]
  int v68; // [sp+4Ch] [bp-44h] BYREF

  v66 = &v68;
  v65 = &BufferedSafeStringBase_char_vtable_probably;
  v67 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v65);
  *(_BYTE *)v66 = 0;
  v65 = &off_60BD4C20;
  v6 = **a1;
  v60 = a3;
  if ( a3 )
  {
    v7 = a3;
    while ( 1 )
    {
      v8 = (_DWORD *)*v7;
      if ( !v8 )
        break;
      v9 = v8[4];
      if ( v9 > v6 )
      {
        v7 = v8 + 1;
      }
      else
      {
        if ( v9 >= v6 )
        {
          v54 = (int *)v8[5];
          v55 = v66;
          if ( v66 != v54 )
          {
            v56 = 0;
            while ( *((_BYTE *)v54 + v56) )
            {
              if ( !*((_BYTE *)v54 + v56 + 1) )
              {
                ++v56;
                break;
              }
              if ( !*((_BYTE *)v54 + v56 + 2) )
              {
                v56 += 2;
                break;
              }
              v22 = v56 + 2 <= 0x7FFFF;
              v56 += 3;
              if ( !v22 )
              {
                v56 = 0;
                break;
              }
            }
            if ( v56 >= v67 )
              v56 = v67 - 1;
            qmemcpy(v66, v54, v56);
            *((_BYTE *)v55 + v56) = 0;
          }
          goto LABEL_9;
        }
        v7 = v8 + 2;
      }
    }
  }
  sub_608FDDF4((int)&v65, "0x%08x", v6);
LABEL_9:
  result = *a1;
  v11 = (*a1)[1];
  if ( HIWORD(v11) )
  {
    v61 = a1;
    v12 = HIWORD(v11);
    v13 = a2 + 1;
    v14 = (char *)result + ((4 * v11) & 0x3FFFC);
    do
    {
      v62[0] = v14;
      s_0x_08x_ref(v62, v13, v60);
      --v12;
      v14 += 12;
    }
    while ( v12 );
    result = *v61;
  }
  v15 = result[2];
  v16 = v60;
  if ( HIWORD(v15) )
  {
    v57 = (unsigned int *)HIWORD(v15);
    v17 = 0;
    v18 = (unsigned int *)((char *)result + ((4 * v15) & 0x3FFFC));
    do
    {
      v23 = *v18;
      v58 = v17;
      if ( v16 && (v24 = (_DWORD *)*v16) != 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v25 = v24[4];
            if ( v25 <= v23 )
              break;
            v24 = (_DWORD *)v24[1];
            if ( !v24 )
              goto LABEL_34;
          }
          if ( v25 >= v23 )
            break;
          v24 = (_DWORD *)v24[2];
          if ( !v24 )
            goto LABEL_34;
        }
        v19 = (int *)v24[5];
        v20 = v66;
        if ( v66 != v19 )
        {
          v21 = 0;
          while ( *((_BYTE *)v19 + v21) )
          {
            if ( !*((_BYTE *)v19 + v21 + 1) )
            {
              ++v21;
              break;
            }
            if ( !*((_BYTE *)v19 + v21 + 2) )
            {
              v21 += 2;
              break;
            }
            v22 = v21 + 2 <= 0x7FFFF;
            v21 += 3;
            if ( !v22 )
            {
              v21 = 0;
              break;
            }
          }
          if ( v21 >= v67 )
            v21 = v67 - 1;
          qmemcpy(v66, v19, v21);
          *((_BYTE *)v20 + v21) = 0;
        }
      }
      else
      {
LABEL_34:
        sub_608FDDF4((int)&v65, "0x%08x", v23);
      }
      v59 = v18;
      v16 = v60;
      v26 = v18[1];
      if ( HIWORD(v26) )
      {
        v27 = HIWORD(v26);
        v28 = 0;
        v29 = (char *)v59 + ((4 * v26) & 0x3FFFC);
        v30 = v29 + 1;
        do
        {
          v34 = *(_DWORD *)v29;
          if ( v16 && (v35 = (_DWORD *)*v16) != 0 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v36 = v35[4];
                if ( v36 <= v34 )
                  break;
                v35 = (_DWORD *)v35[1];
                if ( !v35 )
                  goto LABEL_56;
              }
              if ( v36 >= v34 )
                break;
              v35 = (_DWORD *)v35[2];
              if ( !v35 )
                goto LABEL_56;
            }
            v31 = (int *)v35[5];
            v32 = v66;
            if ( v66 != v31 )
            {
              v33 = 0;
              while ( *((_BYTE *)v31 + v33) )
              {
                if ( !*((_BYTE *)v31 + v33 + 1) )
                {
                  ++v33;
                  break;
                }
                if ( !*((_BYTE *)v31 + v33 + 2) )
                {
                  v33 += 2;
                  break;
                }
                v22 = v33 + 2 <= 0x7FFFF;
                v33 += 3;
                if ( !v22 )
                {
                  v33 = 0;
                  break;
                }
              }
              if ( v33 >= v67 )
                v33 = v67 - 1;
              qmemcpy(v66, v31, v33);
              *((_BYTE *)v32 + v33) = 0;
              v16 = v60;
            }
          }
          else
          {
LABEL_56:
            sub_608FDDF4((int)&v65, "0x%08x", v34);
          }
          switch ( v29[7] )
          {
            case 13:
              default_ref_9419C8(v62);
              v62[0] = &off_60C5E5A0;
              v63 = 0;
              v64 = 0;
              v37 = *((_DWORD *)v29 + 1);
              if ( HIBYTE(v37) <= 0x14u && ((1 << SHIBYTE(v37)) & 0x108180) != 0 )
              {
                v38 = -1;
                v39 = &v30[(4 * v37) & 0x3FFFFFC];
                do
                {
                  if ( !v39[v38] )
                    break;
                  v40 = v39[v38 + 1] == 0;
                  if ( v39[v38 + 1] )
                    v40 = v39[v38 + 2] == 0;
                  if ( v40 )
                    break;
                  v38 += 3;
                }
                while ( v38 <= 0x7FFFF );
              }
              break;
            case 14:
              default_ref_9419C8(v62);
              v62[0] = &off_60C5E640;
              v63 = 0;
              v64 = 0;
              v41 = *((_DWORD *)v29 + 1);
              if ( HIBYTE(v41) <= 0x14u && ((1 << SHIBYTE(v41)) & 0x108180) != 0 )
              {
                v42 = -1;
                v43 = &v30[(4 * v41) & 0x3FFFFFC];
                do
                {
                  if ( !v43[v42] )
                    break;
                  v44 = v43[v42 + 1] == 0;
                  if ( v43[v42 + 1] )
                    v44 = v43[v42 + 2] == 0;
                  if ( v44 )
                    break;
                  v42 += 3;
                }
                while ( v42 <= 0x7FFFF );
              }
              break;
            case 18:
              default_ref_9419C8(v62);
              v62[0] = &off_60C5E6E0;
              v63 = 0;
              v64 = 0;
              v45 = *((_DWORD *)v29 + 1);
              if ( HIBYTE(v45) <= 0x14u && ((1 << SHIBYTE(v45)) & 0x108180) != 0 )
              {
                v46 = -1;
                v47 = &v30[4 * (v45 & 0xFFFFFF)];
                do
                {
                  if ( !v47[v46] )
                    break;
                  v48 = v47[v46 + 1] == 0;
                  if ( v47[v46 + 1] )
                    v48 = v47[v46 + 2] == 0;
                  if ( v48 )
                    break;
                  v46 += 3;
                }
                while ( v46 <= 0x7FFFF );
              }
              break;
            case 19:
              default_ref_9419C8(v62);
              v62[0] = &off_60C5E780;
              v63 = 0;
              v64 = 0;
              v49 = *((_DWORD *)v29 + 1);
              if ( HIBYTE(v49) <= 0x14u && ((1 << SHIBYTE(v49)) & 0x108180) != 0 )
              {
                v50 = -1;
                v51 = &v30[(4 * v49) & 0x3FFFFFC];
                do
                {
                  v52 = (char *)(unsigned __int8)v51[v50];
                  v53 = v52 == 0;
                  if ( v51[v50] )
                  {
                    v52 = &v51[v50];
                    v53 = v51[v50 + 1] == 0;
                  }
                  if ( !v53 )
                    v53 = v52[2] == 0;
                  if ( v53 )
                    break;
                  v50 += 3;
                }
                while ( v50 <= 0x7FFFF );
              }
              break;
            default:
              break;
          }
          ++v28;
          v30 += 8;
          v29 += 8;
        }
        while ( v28 != v27 );
      }
      result = v57;
      v17 = v58 + 1;
      v18 = v59 + 2;
    }
    while ( (unsigned int *)(v58 + 1) != v57 );
  }
  return result;
}
