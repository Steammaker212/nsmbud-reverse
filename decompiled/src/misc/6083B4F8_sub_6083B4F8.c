/* sub_6083B4F8
 * address: 0x6083B4F8   size: 2012   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083B4F8(int a1, _DWORD *a2, int a3)
{
  int v3; // r4
  char v7; // r12
  int v8; // r7
  __guard *v9; // r0
  __guard *v10; // r0
  int v11; // r7
  _DWORD *v12; // r0
  void **v13; // r1
  char *v14; // r1
  int v15; // r0
  unsigned __int8 v16; // r1
  __guard *v17; // r0
  int v18; // r4
  _DWORD *v19; // r5
  int v20; // r8
  unsigned int *v21; // r4
  unsigned int *v22; // r0
  unsigned int *v23; // r9
  int v24; // r0
  unsigned int v25; // r5
  int v26; // r0
  unsigned int v27; // lr
  signed int v28; // r1
  unsigned int *v29; // r2
  unsigned int v30; // r12
  unsigned int v31; // r12
  unsigned int v32; // r4
  char *v33; // r4
  char *v34; // r5
  _DWORD *v35; // r4
  unsigned int v36; // r2
  unsigned int v37; // r5
  int v38; // r0
  void *v39; // r4
  int v40; // r7
  size_t v41; // r5
  __int64 v42; // r0
  _QWORD *v43; // r2
  int v44; // r3
  signed int v45; // r6
  int v46; // r5
  __guard *v47; // r0
  int v48; // r6
  int i; // r7
  _DWORD *v50; // r0
  int v51; // r2
  int v52; // r3
  int v53; // r5
  _DWORD *v54; // r1
  bool v55; // zf
  _DWORD *v56; // r5
  char *v57; // r9
  const void *v58; // r1
  const void *v59; // r1
  const void *v60; // r1
  const void *v61; // r1
  const void *v62; // r1
  int v63; // r0
  int v64; // r1
  unsigned int v66; // [sp+4h] [bp-254h]
  unsigned int v67; // [sp+4h] [bp-254h]
  _DWORD *v68; // [sp+8h] [bp-250h]
  int v69; // [sp+Ch] [bp-24Ch] BYREF
  int v70; // [sp+10h] [bp-248h] BYREF
  int v71; // [sp+14h] [bp-244h] BYREF
  int v72; // [sp+18h] [bp-240h] BYREF
  char v73[8]; // [sp+1Ch] [bp-23Ch] BYREF
  int v74; // [sp+24h] [bp-234h]
  int v75; // [sp+28h] [bp-230h]
  _DWORD v76[6]; // [sp+50h] [bp-208h] BYREF
  _DWORD v77[6]; // [sp+68h] [bp-1F0h] BYREF
  void *v78[18]; // [sp+80h] [bp-1D8h] BYREF
  _DWORD v79[8]; // [sp+C8h] [bp-190h] BYREF
  unsigned int v80; // [sp+E8h] [bp-170h]
  int v81; // [sp+F0h] [bp-168h]
  int v82; // [sp+F8h] [bp-160h]
  int v83; // [sp+120h] [bp-138h]
  int v84; // [sp+128h] [bp-130h]
  _DWORD *v85; // [sp+170h] [bp-E8h]
  _DWORD *v86; // [sp+178h] [bp-E0h]
  unsigned __int8 v87; // [sp+180h] [bp-D8h]
  int v88; // [sp+1A0h] [bp-B8h]
  _BYTE v89[64]; // [sp+1C0h] [bp-98h] BYREF
  _DWORD v90[6]; // [sp+200h] [bp-58h] BYREF
  _DWORD v91[16]; // [sp+218h] [bp-40h] BYREF

  FIELD_U32(a1, 8) = a1 + 16;
  FIELD_U8(a1, 1) = *(_BYTE *)a3;
  dword_60CC73B0();
  if ( !FIELD_U8(a3, 1) )
  {
    v48 = 0;
    for ( i = 0; i != 6; ++i )
    {
      v50 = (_DWORD *)sub_6083D5FC(a3, i);
      if ( v50 )
      {
        v51 = v50[1];
        v52 = v50[2];
        v53 = v50[3];
        v79[4 * v48] = *v50;
        v54 = &v79[4 * v48++];
        v54[1] = v51;
        v54[2] = v52;
        v54[3] = v53;
        v55 = (*(_BYTE *)a3 & 2) == 0;
        if ( (*(_BYTE *)a3 & 2) != 0 )
        {
          v3 = v50[8];
          v55 = v3 == 0;
        }
        if ( !v55 )
        {
          v56 = *(_DWORD **)v3;
          v57 = (char *)v50[2];
          qmemcpy(v57, *(const void **)v3, *(_DWORD *)(*(_DWORD *)v3 + 20));
          v58 = *(const void **)(v3 + 8);
          if ( v58 )
            qmemcpy(&v57[v56[5]], v58, v56[6]);
          v59 = *(const void **)(v3 + 32);
          if ( v59 )
            qmemcpy(&v57[v56[8]], v59, v56[7]);
          v60 = *(const void **)(v3 + 16);
          if ( v60 )
            qmemcpy(&v57[v56[444]], v60, v56[445]);
          v61 = *(const void **)(v3 + 24);
          if ( v61 )
            qmemcpy(&v57[v56[498]], v61, v56[499]);
          v62 = *(const void **)(v3 + 40);
          if ( v62 )
            qmemcpy(&v57[v56[506]], v62, v56[507]);
        }
      }
    }
    if ( !dword_60CC73BC(FIELD_U32(a1, 8), v48, v79) )
      return 3;
    if ( (*(_BYTE *)a3 & 2) != 0 )
      FIELD_U32(a1, 208) = FIELD_U32(a3, 120);
    goto LABEL_78;
  }
  v8 = 1;
  if ( FIELD_U8(a3, 1) == 2 )
  {
    if ( ((unsigned int)dword_60CC7A50 & ~(1619244376 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60CC7A50) )
    {
      nn__os__InitializeMutex(&dword_60CC7A50[1], 0, 0);
      sub_60000288();
      _cxa_guard_release(dword_60CC7A50);
    }
    nn__os__LockMutex(&dword_60CC7A50[1]);
    v9 = sub_6083AFB8();
    ((void (__fastcall *)(char *))v9[5])(v73);
    dword_60CC72BC(*a2, 47, &v72);
    dword_60CC72BC(*a2, 46, &v71);
    dword_60CC72BC(*a2, 49, &v70);
    dword_60CC72BC(*a2, 48, &v69);
    v8 = 3;
    if ( v74 >= v72 && v74 <= v71 && v75 >= v70 && v75 <= v69 )
    {
      v10 = sub_6083AFB8();
      if ( ((int (__fastcall *)(_DWORD *))v10[2])(v79) )
      {
        if ( v88 == 1 )
        {
          v80 = *(_BYTE *)a3 & 1 | v80 & 0xFFFE0000 | 0x2214;
          v11 = 0;
          v80 = v80 & 0xFFF9FFFF | (sub_6083D8F4() << 17);
          v82 = 0;
          v81 = 0;
          v84 = 0;
          v83 = 0;
          v79[6] = 0;
          memset(v78, 0, sizeof(v78));
          v85 = v77;
          v86 = v76;
          v87 = 0;
          do
          {
            v12 = (_DWORD *)sub_6083D5FC(a3, v11);
            if ( v12 )
            {
              std___1__basic_string_char_std___1__char_traits_std___1__allocator___assign(&v78[3 * v87], v12[2], *v12);
              v13 = &v78[3 * v87];
              if ( (*(_BYTE *)v13 & 1) != 0 )
                v14 = (char *)v13[2];
              else
                v14 = (char *)v13 + 1;
              v77[v87] = v14;
              v15 = sub_6083AC24(v11);
              v16 = v87;
              v76[v87] = v15;
              v87 = v16 + 1;
            }
            ++v11;
          }
          while ( v11 != 6 );
          v17 = sub_6083AFB8();
          v8 = 3;
          if ( ((int (__fastcall *)(_DWORD *))v17[4])(v79) )
          {
            v18 = v79[0];
            if ( !*(_BYTE *)(*(_DWORD *)v79[0] + 13) )
            {
              if ( *(_BYTE *)(*(_DWORD *)v79[0] + 12) )
              {
                v19 = (_DWORD *)malloc(0x180u);
                v20 = 0;
                FIELD_U32(a1, 216) = v19;
                v19[65] = 0;
                v19[66] = 0;
                v21 = *(unsigned int **)(v18 + 8);
                v22 = (unsigned int *)malloc(v21[17]);
                v23 = v22;
                v19[66] = v22;
                if ( v22 )
                {
                  qmemcpy(v22, v21, v21[17]);
                  v24 = v23[19];
                  v19[92] = 0;
                  v68 = v19;
                  v19[93] = 0;
                  v25 = 0;
                  memset(v91, 0, 24);
                  memset(v90, 0, sizeof(v90));
                  if ( v24 >= 1 )
                  {
                    v26 = 0;
                    v27 = 0;
                    v20 = 0;
                    v25 = 0;
                    v28 = 0;
                    do
                    {
                      v29 = &v23[v26];
                      v30 = v23[v26 + 38];
                      if ( v30 == 3 )
                      {
                        v68[94] = v29 + 36;
                      }
                      else if ( !v30 )
                      {
                        v66 = v25;
                        v31 = v29[50];
                        v32 = v29[37];
                        v91[v20] = v31;
                        v33 = (char *)v23 + v32;
                        v90[v20] = &v33[v29[49]];
                        v34 = &v33[v29[48]];
                        v35 = &v68[4 * v20++];
                        v35[70] = v34;
                        v68[92] = v20;
                        v36 = v29[52];
                        if ( v27 < v36 )
                          v27 = v36;
                        v68[93] = v27;
                        v23 = (unsigned int *)v68[66];
                        v25 = (v66 + v31 + 255) & 0xFFFFFF00;
                      }
                      ++v28;
                      v26 += 36;
                    }
                    while ( v28 < (int)v23[19] );
                  }
                  v37 = (v25 + 4095) & 0xFFFFF000;
                  v38 = malloc(v37 + 4096);
                  v68[64] = v38;
                  if ( v38 )
                  {
                    v67 = v37;
                    v39 = (void *)((v38 + 4095) & 0xFFFFF000);
                    v68[65] = v39;
                    if ( v20 >= 1 )
                    {
                      v40 = 0;
                      do
                      {
                        v41 = v91[v40];
                        qmemcpy(v39, (const void *)v90[v40++], v41);
                        v39 = (void *)(((unsigned int)v39 + v41 + 255) & 0xFFFFFF00);
                      }
                      while ( v40 < v68[92] );
                    }
                    dword_60CC73C0(v89, *a2);
                    dword_60CC73C4(v89);
                    dword_60CC73CC(v89, 97);
                    dword_60CC73C8(v89, v68[65], v67);
                    dword_60CC73DC(v68, v89);
                    v42 = dword_60CC73F4(v68);
                    if ( (int)v68[92] >= 1 )
                    {
                      v43 = v68 + 68;
                      v44 = 0;
                      v45 = 0;
                      do
                      {
                        *v43 = v45 + v42;
                        v46 = v91[v44++];
                        v43 += 2;
                        v45 = (v46 + (v45 | 0xFF)) & 0xFFFFFF00;
                      }
                      while ( v44 < v68[92] );
                    }
                    v8 = 0;
                  }
                }
              }
            }
          }
          if ( ((int)v78[15] & 1) != 0 )
            operator_delete(v78[17]);
          if ( ((int)v78[12] & 1) != 0 )
            operator_delete(v78[14]);
          if ( ((int)v78[9] & 1) != 0 )
            operator_delete(v78[11]);
          if ( ((int)v78[6] & 1) != 0 )
            operator_delete(v78[8]);
          if ( ((int)v78[3] & 1) != 0 )
            operator_delete(v78[5]);
          if ( ((int)v78[0] & 1) != 0 )
            operator_delete(v78[2]);
          v47 = sub_6083AFB8();
          ((void (__fastcall *)(_DWORD *))v47[3])(v79);
          if ( !v8 )
          {
            v8 = 3;
            if ( dword_60CC73BC(
                   FIELD_U32(a1, 8),
                   *(_DWORD *)(FIELD_U32(a1, 216) + 368),
                   FIELD_U32(a1, 216) + 272) == 1 )
              v8 = 0;
          }
        }
      }
    }
    nn__os__UnlockMutex(&dword_60CC7A50[1]);
    if ( !v8 )
    {
LABEL_78:
      if ( (*(_BYTE *)a3 & 1) == 0 )
      {
        v63 = sub_6083D5FC(a3, 5);
        v64 = 31;
        if ( v63 )
          v64 = 32;
        FIELD_U32(a1, 4) = v64;
      }
      v8 = 0;
      FIELD_U8(a1, 1) &= ~4u;
      *(_BYTE *)a1 = 1;
    }
  }
  return v8;
}
