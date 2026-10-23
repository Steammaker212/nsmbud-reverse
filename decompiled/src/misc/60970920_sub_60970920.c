/* sub_60970920
 * address: 0x60970920   size: 2068   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60970920(int a1, int a2, int a3, signed int a4, void *a5, void *heap)
{
  _DWORD *v10; // r8
  int v11; // r0
  int v12; // r7
  bool v13; // cc
  _BYTE *v14; // r4
  char v15; // r1
  char *v16; // r12
  int (**v17)(); // lr
  int v18; // r1
  bool v19; // zf
  int v20; // r1
  bool v21; // zf
  unsigned __int8 v22; // r1
  _BYTE *v23; // r6
  char *v24; // r2
  int v25; // t1
  char v26; // r0
  unsigned __int8 *v27; // r1
  int v28; // t1
  char *v29; // r4
  const void *v30; // r1
  signed int v31; // r3
  char *v32; // r4
  signed int v33; // r6
  int v34; // r6
  char *v35; // r0
  char *v36; // r4
  int i; // r1
  unsigned __int8 *v38; // r3
  int v39; // r0
  bool v40; // zf
  int v41; // r4
  int v42; // r1
  _DWORD *v43; // r6
  int v44; // r0
  unsigned int v45; // r4
  _BYTE *v46; // r0
  void *v47; // r6
  int v48; // r0
  signed int v49; // r2
  signed int v50; // r0
  signed int v51; // r4
  int v52; // r4
  unsigned __int8 *v53; // r6
  _BYTE *v54; // r12
  unsigned __int8 *v55; // r3
  unsigned __int8 *v56; // r4
  int v57; // r1
  unsigned __int8 v58; // r2
  unsigned __int8 *v59; // r4
  int v60; // t1
  unsigned __int8 *v61; // r3
  unsigned __int8 v62; // r1
  void *v63; // r4
  unsigned __int8 *v64; // r2
  int v65; // t1
  unsigned __int8 v66; // r1
  unsigned __int8 *v67; // r2
  int v68; // t1
  int v69; // r0
  int v70; // r2
  unsigned __int8 *v71; // r0
  _BYTE *v72; // r11
  int v73; // t1
  int v74; // r1
  int v75; // r1
  bool v76; // zf
  int v78; // [sp+4h] [bp-46Ch]
  const void *v79; // [sp+4h] [bp-46Ch]
  unsigned __int8 *v80; // [sp+8h] [bp-468h]
  int (**v81)(); // [sp+Ch] [bp-464h]
  char *v82; // [sp+10h] [bp-460h]
  unsigned __int8 *v83; // [sp+14h] [bp-45Ch]
  unsigned __int8 *v84; // [sp+18h] [bp-458h]
  void *v85; // [sp+18h] [bp-458h]
  _DWORD *v86; // [sp+18h] [bp-458h]
  int v87; // [sp+34h] [bp-43Ch]
  int (**v88)(); // [sp+38h] [bp-438h] BYREF
  char *v89; // [sp+3Ch] [bp-434h]
  int (**v90)(); // [sp+40h] [bp-430h] BYREF
  char *v91; // [sp+44h] [bp-42Ch]
  int v92; // [sp+48h] [bp-428h]
  int v93; // [sp+4Ch] [bp-424h] BYREF

  if ( a4 >= 1 && a5 )
    memset(a5, 0, a4);
  v10 = (_DWORD *)operator_new_8DE25C(0xCu, heap, 4);
  sub_6097114C(v10, heap, a1, 4);
  (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
  v11 = v10[1];
  v12 = 0;
  while ( *(_BYTE *)(v11 + v12) )
  {
    if ( !*(_BYTE *)(v11 + v12 + 1) )
    {
      ++v12;
      break;
    }
    if ( !*(_BYTE *)(v11 + v12 + 2) )
    {
      v12 += 2;
      break;
    }
    v13 = v12 + 2 <= 0x7FFFF;
    v12 += 3;
    if ( !v13 )
    {
      v12 = 0;
      break;
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
  v14 = (_BYTE *)v10[1];
  v15 = *v14;
  if ( *v14 )
  {
    v87 = a4;
    v16 = (char *)&v93;
    v17 = &BufferedSafeStringBase_char_vtable_probably;
    do
    {
      v71 = v14 + 1;
      v72 = v14;
      while ( v15 != 35 )
      {
        v73 = (unsigned __int8)*++v72;
        v15 = v73;
        ++v71;
        if ( !v73 )
          return v10;
      }
      while ( 1 )
      {
        v74 = *v71;
        if ( (unsigned int)(v74 - 9) > 0x17 || ((1 << (v74 - 9)) & 0x800013) == 0 )
          break;
        ++v71;
      }
      if ( !*v71 )
        v71 = 0;
      v75 = *v71;
      v76 = v75 == 105;
      if ( v75 == 105 )
        v76 = v71[1] == 110;
      if ( !v76 || v71[2] != 99 )
        goto LABEL_128;
      v18 = v71[3];
      v19 = v18 == 108;
      if ( v18 == 108 )
        v19 = v71[4] == 117;
      if ( !v19 )
        goto LABEL_128;
      v20 = v71[5];
      v21 = v20 == 100;
      if ( v20 == 100 )
        v21 = v71[6] == 101;
      if ( v21 )
      {
        v22 = v71[7];
        if ( v22 )
        {
          v23 = v71 + 10;
          v84 = v71 + 9;
          v24 = (char *)(v71 + 8);
          while ( v22 != 34 )
          {
            ++v23;
            ++v84;
            v25 = (unsigned __int8)*v24++;
            v22 = v25;
            if ( !v25 )
              goto LABEL_129;
          }
          v26 = *v24;
          v27 = v84;
          if ( *v24 )
          {
            while ( v26 != 34 )
            {
              v28 = *v27++;
              v26 = v28;
              if ( !v28 )
                goto LABEL_129;
            }
            v91 = v16;
            v90 = v17;
            v83 = v27;
            v82 = v16;
            v81 = v17;
            v29 = v24;
            v92 = 1024;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v90);
            v30 = v29;
            *v91 = 0;
            v90 = &off_60BFA9DC;
            if ( v91 != v29 )
            {
              if ( v83 - (unsigned __int8 *)v29 <= 0 )
              {
                v31 = 0;
                while ( v29[v31] )
                {
                  if ( !v84[v31] )
                  {
                    ++v31;
                    break;
                  }
                  if ( !*v23 )
                  {
                    v31 += 2;
                    break;
                  }
                  v23 += 3;
                  v13 = v31 + 2 <= 0x7FFFF;
                  v31 += 3;
                  if ( !v13 )
                  {
                    v31 = 0;
                    break;
                  }
                }
                v30 = v29;
              }
              else
              {
                v31 = v83 - (unsigned __int8 *)v29 - 1;
              }
              v32 = v91;
              if ( v31 >= v92 )
                v31 = v92 - 1;
              v33 = v31;
              qmemcpy(v91, v30, v31);
              v32[v33] = 0;
            }
            if ( v87 < 1 )
              return v10;
            v34 = 0;
            while ( 1 )
            {
              v35 = *(char **)(a2 + 4 * v34);
              v88 = &sead__SafeStringBase__vtable;
              v89 = v35;
              ((void (__fastcall *)(int (***)()))v90[3])(&v90);
              ((void (__fastcall *)(int (***)()))v90[3])(&v90);
              v36 = v91;
              ((void (__fastcall *)(int (***)()))v88[3])(&v88);
              if ( v36 == v89 )
                break;
              for ( i = 1; v91[i - 1] == v89[i - 1]; i += 2 )
              {
                if ( !v91[i - 1] )
                  goto LABEL_60;
                if ( i >= 524289 || v91[i] != v89[i] )
                  break;
                if ( !v91[i] )
                  goto LABEL_60;
              }
              if ( ++v34 >= v87 )
                return v10;
            }
LABEL_60:
            v38 = *(unsigned __int8 **)(a3 + 4 * v34);
            if ( a5 )
              *((_BYTE *)a5 + v34) = 1;
            if ( !v38 )
              return v10;
            v39 = *v38;
            v40 = v39 == 239;
            if ( v39 == 239 )
              v40 = v38[1] == 187;
            if ( v40 && v38[2] == 191 )
              v38 += 3;
            v41 = 0;
            v80 = v38;
            while ( v38[v41] )
            {
              if ( !v38[v41 + 1] )
              {
                ++v41;
                break;
              }
              if ( !v38[v41 + 2] )
              {
                v41 += 2;
                break;
              }
              v42 = v41 + 2;
              v41 += 3;
              if ( v42 > 0x7FFFF )
              {
                v41 = 0;
                break;
              }
            }
            v43 = (_DWORD *)operator_new_8DE25C(0xCu, heap, 4);
            v44 = v41 + v12;
            v45 = v41 + v12 + 1;
            v78 = v44;
            v85 = (void *)operator_new_8DE2C8(v45, (int)heap, 4);
            memset(v85, 0, v45);
            *v43 = &BufferedSafeStringBase_char_vtable_probably;
            v43[1] = v85;
            v86 = v43;
            v43[2] = v45;
            if ( v78 < 0 )
            {
              v46 = 0;
              v43[1] = 0;
              v43[2] = 0;
            }
            else
            {
              sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v43);
              v46 = (_BYTE *)v43[1];
            }
            *v43 = &off_60BFA9C4;
            *v46 = 0;
            v47 = (void *)v43[1];
            (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
            if ( v47 != (void *)v10[1] )
            {
              v79 = (const void *)v10[1];
              (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
              v48 = v10[1];
              v49 = 0;
              while ( *(_BYTE *)(v48 + v49) )
              {
                if ( !*(_BYTE *)(v48 + v49 + 1) )
                {
                  ++v49;
                  break;
                }
                if ( !*(_BYTE *)(v48 + v49 + 2) )
                {
                  v49 += 2;
                  break;
                }
                v13 = v49 + 2 <= 0x7FFFF;
                v49 += 3;
                if ( !v13 )
                {
                  v49 = 0;
                  break;
                }
              }
              v50 = v86[2];
              if ( v49 >= v50 )
                v49 = v50 - 1;
              v51 = v49;
              qmemcpy(v47, v79, v49);
              *((_BYTE *)v47 + v51) = 0;
            }
            (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
            v52 = v10[1];
            v53 = (unsigned __int8 *)operator_new_8DE2C8(v12 + 1, (int)heap, 4);
            (*(void (__fastcall **)(_DWORD *))(*v86 + 12))(v86);
            v54 = &v72[-v52];
            v55 = v53;
            v56 = &v83[-v52];
            v57 = v86[1];
            v58 = v56[v57];
            if ( v58 )
            {
              v59 = &v56[v57 + 1];
              v55 = v53;
              do
              {
                *v55++ = v58;
                v60 = *v59++;
                v58 = v60;
              }
              while ( v60 );
            }
            *v55 = 0;
            v61 = &v54[v57];
            v62 = *v80;
            if ( *v80 )
            {
              v63 = heap;
              v64 = v80 + 1;
              do
              {
                *v61++ = v62;
                v65 = *v64++;
                v62 = v65;
              }
              while ( v65 );
            }
            else
            {
              v63 = heap;
            }
            v66 = *v53;
            if ( *v53 )
            {
              v67 = v53 + 1;
              do
              {
                *v61++ = v66;
                v68 = *v67++;
                v66 = v68;
              }
              while ( v68 );
            }
            *v61 = 0;
            operator_delete_8DE3FC(v53);
            if ( v10 )
              (*(void (__fastcall **)(_DWORD *))(*v10 + 4))(v10);
            v10 = (_DWORD *)operator_new_8DE25C(0xCu, v63, 4);
            sub_6097114C(v10, v63, v86, 4);
            if ( v86 )
              (*(void (__fastcall **)(_DWORD *))(*v86 + 4))(v86);
            (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
            v14 = (_BYTE *)v10[1];
            (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
            v69 = v10[1];
            v12 = 0;
            while ( *(_BYTE *)(v69 + v12) )
            {
              if ( !*(_BYTE *)(v69 + v12 + 1) )
              {
                ++v12;
                break;
              }
              if ( !*(_BYTE *)(v69 + v12 + 2) )
              {
                v12 += 2;
                break;
              }
              v70 = v12 + 2;
              v12 += 3;
              if ( v70 > 0x7FFFF )
              {
                v12 = 0;
                break;
              }
            }
            v16 = v82;
            v17 = v81;
          }
        }
      }
      else
      {
LABEL_128:
        v14 = v71;
      }
LABEL_129:
      v15 = *v14;
    }
    while ( *v14 );
  }
  return v10;
}
