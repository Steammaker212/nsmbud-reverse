/* sub_6099B590
 * address: 0x6099B590   size: 1464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099B590(
        _DWORD *a1,
        _WORD *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        int a5,
        int (__fastcall ***a6)(_DWORD, unsigned __int16 *, unsigned int),
        int a7)
{
  unsigned __int16 *v8; // r8
  int result; // r0
  bool v10; // zf
  bool v11; // zf
  unsigned int v12; // r1
  int v13; // lr
  int v14; // r4
  unsigned __int16 *v15; // r9
  int v16; // r2
  int v17; // r3
  int v18; // r5
  int v19; // r6
  unsigned int v20; // r1
  int v21; // r0
  unsigned int v22; // r7
  int v23; // r3
  int v24; // r2
  int v25; // r2
  int v26; // r3
  int v27; // r9
  int v28; // r5
  unsigned int v29; // r1
  int v30; // r6
  unsigned int v31; // r0
  int v32; // r2
  int v33; // r7
  unsigned int v34; // r0
  int v35; // r5
  int v36; // r2
  int v37; // r3
  unsigned int v38; // r7
  int v39; // r7
  int v40; // r0
  unsigned int v41; // r2
  int v42; // r0
  bool v43; // zf
  unsigned int v44; // r0
  int v45; // r5
  int v46; // r2
  int v47; // r3
  unsigned int v48; // r7
  unsigned int v49; // r2
  int v50; // r0
  bool v51; // zf
  _WORD *v52; // r0
  _DWORD *v53; // r2
  _DWORD *v54; // [sp+24h] [bp-44h]
  int v55; // [sp+2Ch] [bp-3Ch]
  unsigned __int16 *v56; // [sp+2Ch] [bp-3Ch]
  int v57; // [sp+30h] [bp-38h]
  unsigned __int16 *v58; // [sp+34h] [bp-34h]
  int v59; // [sp+38h] [bp-30h]

  v8 = a4;
  if ( a1 )
    *a1 = 0;
  result = 0;
  if ( a3 )
  {
    v10 = a2 == 0;
    if ( a2 )
    {
      v54 = a1;
      v10 = a4 == 0;
    }
    if ( !v10 )
    {
      *a2 = 0;
      v11 = a5 == 0;
      result = 1;
      if ( a5 )
        v11 = *a4 == 0;
      if ( !v11 )
      {
        v12 = (unsigned int)&a4[a5];
        v13 = *(_DWORD *)a7;
        v58 = (unsigned __int16 *)v12;
        v57 = *(_DWORD *)a7;
        v59 = 0;
        v55 = 0;
LABEL_11:
        if ( v13 < 1 )
        {
          v14 = v55;
          while ( 1 )
          {
            v56 = sub_6099B24C(v8, v12, a6);
            v25 = 1986;
            v26 = 0;
            v27 = v56 - v8 + 1;
            v28 = a3 - v14 - 1;
            if ( v28 >= v27 )
              v28 = v56 - v8 + 1;
            v29 = v8[v28 - 1];
            while ( 1 )
            {
              v30 = v26 + (v25 - v26) / 2;
              v31 = *((unsigned __int16 *)&unk_60B73450 + 2 * v30);
              if ( (unsigned int)(v25 - v26 + 1) < 3 )
                break;
              if ( v31 > v29 )
                v25 = v26 + (v25 - v26) / 2;
              else
                v26 += (v25 - v26) / 2;
              if ( v25 <= v26 )
                goto LABEL_47;
            }
            if ( *((unsigned __int8 *)&unk_60B73450 + 4 * v30 + 2) + v31 >= v29
              && *((_BYTE *)&unk_60B73450 + 4 * v30 + 3) == 38 )
            {
              --v28;
              v27 = v56 - v8;
            }
LABEL_47:
            qmemcpy(&a2[v14], v8, 2 * v28);
            v23 = v28 + v14;
            v32 = v28 + v14;
            a2[v32] = 0;
            if ( v27 != v28 )
              break;
            v12 = (unsigned int)v58;
            v8 = v56 + 1;
            if ( v56 + 1 == v58 )
            {
LABEL_88:
              v53 = v54;
              result = 1;
              goto LABEL_89;
            }
            if ( *v56 == 10 )
            {
              v13 = v57;
              v33 = v59;
              v14 += v28;
            }
            else
            {
              v33 = v59;
              v14 = v23 + 1;
              if ( v23 + 1 >= a3 )
                break;
              a2[v32] = 10;
              a2[v14] = 0;
              v13 = v57;
            }
            v59 = v33 + 1;
            if ( FIELD_U8(a7, 4) )
            {
LABEL_54:
              v55 = v14;
              if ( v54 )
              {
                do
                {
                  v34 = *v8;
                  v35 = 1986;
                  v36 = 0;
                  while ( 1 )
                  {
                    v37 = v36 + (v35 - v36) / 2;
                    v38 = *((unsigned __int16 *)&unk_60B73450 + 2 * v37);
                    if ( (unsigned int)(v35 - v36 + 1) < 3 )
                      break;
                    if ( v38 > v34 )
                      v35 = v36 + (v35 - v36) / 2;
                    else
                      v36 += (v35 - v36) / 2;
                    if ( v35 <= v36 )
                    {
                      v39 = 4;
                      v40 = 4;
                      goto LABEL_84;
                    }
                  }
                  v41 = *((unsigned __int8 *)&unk_60B73450 + 4 * v37 + 2) + v38;
                  v39 = 4;
                  if ( v41 >= v34 )
                  {
                    v42 = *((unsigned __int8 *)&unk_60B73450 + 4 * v37 + 3);
                    v43 = v42 == 38;
                    if ( v42 == 38 )
                    {
                      ++v8;
                      v39 = 0;
                      v43 = v8 == (unsigned __int16 *)v12;
                    }
                    if ( v43 )
                    {
                      v39 = 1;
                      v8 = (unsigned __int16 *)v12;
                      a2[--v55] = 0;
                      *v54 = v55;
                    }
                  }
                  v40 = v39;
                }
                while ( (v39 & 7) == 0 );
              }
              else
              {
                do
                {
                  v44 = *v8;
                  v45 = 1986;
                  v46 = 0;
                  while ( 1 )
                  {
                    v47 = v46 + (v45 - v46) / 2;
                    v48 = *((unsigned __int16 *)&unk_60B73450 + 2 * v47);
                    if ( (unsigned int)(v45 - v46 + 1) <= 2 )
                      break;
                    if ( v48 > v44 )
                      v45 = v46 + (v45 - v46) / 2;
                    else
                      v46 += (v45 - v46) / 2;
                    if ( v45 <= v46 )
                    {
                      v39 = 4;
                      v40 = 4;
                      goto LABEL_84;
                    }
                  }
                  v49 = *((unsigned __int8 *)&unk_60B73450 + 4 * v47 + 2) + v48;
                  v39 = 4;
                  if ( v49 >= v44 )
                  {
                    v50 = *((unsigned __int8 *)&unk_60B73450 + 4 * v47 + 3);
                    v51 = v50 == 38;
                    if ( v50 == 38 )
                    {
                      ++v8;
                      v39 = 0;
                      v51 = v8 == (unsigned __int16 *)v12;
                    }
                    if ( v51 )
                    {
                      v39 = 1;
                      v8 = (unsigned __int16 *)v12;
                      v52 = &a2[--v55];
                      *v52 = 0;
                    }
                  }
                  v40 = v39;
                }
                while ( (v39 & 7) == 0 );
              }
LABEL_84:
              if ( v40 == 4 )
                goto LABEL_11;
              result = 1;
              if ( !v39 )
                goto LABEL_11;
              return result;
            }
          }
        }
        else
        {
          v14 = v55;
          while ( 1 )
          {
            v15 = sub_6099B24C(v8, v12, a6);
            v16 = 1986;
            v17 = 0;
            v18 = v15 - v8 + 1;
            v19 = a3 - v14 - 1;
            if ( v19 >= v18 )
              v19 = v15 - v8 + 1;
            v20 = v8[v19 - 1];
            while ( 1 )
            {
              v21 = v17 + (v16 - v17) / 2;
              v22 = *((unsigned __int16 *)&unk_60B73450 + 2 * v21);
              if ( (unsigned int)(v16 - v17 + 1) <= 2 )
                break;
              if ( v22 > v20 )
                v16 = v17 + (v16 - v17) / 2;
              else
                v17 += (v16 - v17) / 2;
              if ( v16 <= v17 )
                goto LABEL_25;
            }
            if ( *((unsigned __int8 *)&unk_60B73450 + 4 * v21 + 2) + v22 >= v20
              && *((_BYTE *)&unk_60B73450 + 4 * v21 + 3) == 38 )
            {
              --v19;
              v18 = v15 - v8;
            }
LABEL_25:
            qmemcpy(&a2[v14], v8, 2 * v19);
            v23 = v19 + v14;
            v24 = v19 + v14;
            a2[v24] = 0;
            if ( v18 != v19 )
              break;
            v12 = (unsigned int)v58;
            v8 = v15 + 1;
            if ( v15 + 1 == v58 )
              goto LABEL_88;
            if ( v59 + 1 >= *(_DWORD *)a7 )
              break;
            ++v59;
            if ( *v15 == 10 )
            {
              v14 += v19;
            }
            else
            {
              v14 = v23 + 1;
              if ( v23 + 1 >= a3 )
                break;
              a2[v24] = 10;
              a2[v14] = 0;
            }
            v13 = v57;
            if ( FIELD_U8(a7, 4) )
              goto LABEL_54;
          }
        }
        v53 = v54;
        result = 0;
LABEL_89:
        if ( v53 )
          *v53 = v23;
      }
    }
  }
  return result;
}
