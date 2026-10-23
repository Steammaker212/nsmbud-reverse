/* sub_601A3C64
 * address: 0x601A3C64   size: 1952   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A3C64(int a1)
{
  int v1; // r8
  int result; // r0
  int v3; // r1
  unsigned int v4; // r1
  unsigned int v5; // r0
  int v6; // r9
  int v7; // r11
  unsigned int v8; // r5
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  char *v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r9
  unsigned int v15; // r0
  int v16; // r11
  int v17; // r0
  int *v18; // r7
  int v19; // r6
  unsigned int v20; // r4
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  const char *v23; // r5
  const char *v24; // r1
  const char *v25; // r1
  char *v26; // r1
  int v27; // r0
  unsigned int v28; // r6
  const char *v29; // r0
  const char *v30; // r4
  int v31; // r1
  int v32; // r0
  _DWORD *v33; // r11
  int v34; // t1
  char *v35; // r1
  unsigned int v36; // r8
  int v37; // r2
  int v38; // r0
  float v39; // s20
  float v40; // s22
  float v41; // s18
  float v42; // s26
  float v43; // s24
  float v44; // s28
  float v45; // s20
  float v46; // s18
  float v47; // s26
  int v48; // r0
  float v49; // s0
  int v50; // r1
  int v51; // [sp+8h] [bp-140h]
  int v52; // [sp+30h] [bp-118h]
  int *v53; // [sp+34h] [bp-114h]
  int v54; // [sp+38h] [bp-110h]
  int v55; // [sp+40h] [bp-108h]
  unsigned int v56; // [sp+44h] [bp-104h]
  int v57; // [sp+50h] [bp-F8h]
  int *v59; // [sp+60h] [bp-E8h]
  int *v60; // [sp+64h] [bp-E4h]
  unsigned int v61; // [sp+68h] [bp-E0h]
  int v62; // [sp+6Ch] [bp-DCh]
  int *v63; // [sp+70h] [bp-D8h]
  int (**v64)(); // [sp+78h] [bp-D0h] BYREF
  void *v65; // [sp+7Ch] [bp-CCh]
  int (**v66)(); // [sp+80h] [bp-C8h] BYREF
  int *v67; // [sp+84h] [bp-C4h]
  int v68; // [sp+88h] [bp-C0h]
  int v69; // [sp+8Ch] [bp-BCh] BYREF
  int (**v70)(); // [sp+98h] [bp-B0h] BYREF
  char *v71; // [sp+9Ch] [bp-ACh]
  int v72; // [sp+A0h] [bp-A8h]
  int v73; // [sp+A4h] [bp-A4h] BYREF
  int (**v74)(); // [sp+ACh] [bp-9Ch] BYREF
  const char *v75; // [sp+B0h] [bp-98h]
  int v76; // [sp+B4h] [bp-94h]
  int v77; // [sp+B8h] [bp-90h] BYREF
  int (**v78)(); // [sp+C0h] [bp-88h] BYREF
  char *v79; // [sp+C4h] [bp-84h]
  int v80; // [sp+C8h] [bp-80h]
  int v81; // [sp+CCh] [bp-7Ch] BYREF
  int (**v82)(); // [sp+D4h] [bp-74h] BYREF
  char *v83; // [sp+D8h] [bp-70h]
  int v84; // [sp+DCh] [bp-6Ch]
  int v85; // [sp+E0h] [bp-68h] BYREF

  v1 = a1;
  result = 0;
  do
  {
    v51 = result;
    v53 = (int *)(v1 + 4 * result + 172);
    if ( *v53 >= 1 )
    {
      v3 = 0;
      v52 = 2 * result;
      do
      {
        v54 = v3;
        v4 = v3 + v52;
        v5 = 0;
        v61 = v4;
        if ( v4 < 0x12 )
          v5 = v4;
        v6 = v1 + 4 * v5;
        v59 = (int *)(v6 + 28);
        v7 = *(_DWORD *)(FIELD_U32(v6, 28) + 36);
        v83 = (char *)&v85;
        v82 = &BufferedSafeStringBase_char_vtable_probably;
        v84 = 5;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v82);
        *v83 = 0;
        v79 = (char *)&v81;
        v78 = &BufferedSafeStringBase_char_vtable_probably;
        v82 = &off_60BD4F38;
        v80 = 5;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v78);
        *v79 = 0;
        v78 = &off_60BD4F38;
        v75 = (const char *)&v77;
        v74 = &BufferedSafeStringBase_char_vtable_probably;
        v76 = 5;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v74);
        *v75 = 0;
        v74 = &off_60BD4F38;
        v71 = (char *)&v73;
        v70 = &BufferedSafeStringBase_char_vtable_probably;
        v72 = 5;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v70);
        *v71 = 0;
        v70 = &off_60BD4F38;
        v67 = &v69;
        v66 = &BufferedSafeStringBase_char_vtable_probably;
        v68 = 10;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v66);
        *(_BYTE *)v67 = 0;
        v55 = v7;
        v66 = &off_60BD4F50;
        if ( v7 >= 1 )
        {
          v8 = 0;
          v60 = (int *)(v6 + 100);
          do
          {
            v9 = (_DWORD *)sub_60183634(*v59, v8);
            sub_60199B6C(v9, (int)&v82, 0);
            v56 = v8;
            v10 = (_DWORD *)sub_60183634(*v59, v8);
            sub_60199C48(v10, (int)&v78, 0);
            v11 = v79;
            v12 = *v60;
            v64 = &sead__SafeStringBase__vtable;
            if ( v80 <= 0 )
              v11 = &byte_60B3BA34;
            v65 = v11;
            if ( sub_60178480(v12, &v64) < 0 )
            {
              v13 = 0;
              do
              {
                v57 = v13;
                v63 = (int *)(v1 + 4 * v13 + 172);
                if ( *v63 >= 1 )
                {
                  v14 = 0;
                  v62 = 2 * v13;
                  do
                  {
                    v15 = v14 + v62;
                    if ( v61 != v14 + v62 )
                    {
                      if ( v15 >= 0x12 )
                        v15 = 0;
                      v16 = v1 + 4 * v15;
                      v18 = (int *)(v16 + 28);
                      v17 = FIELD_U32(v16, 28);
                      v19 = FIELD_U32(v17, 36);
                      if ( v19 >= 1 )
                      {
                        v20 = 0;
                        while ( 1 )
                        {
                          v21 = (_DWORD *)sub_60183634(v17, v20);
                          sub_60199B6C(v21, (int)&v74, 0);
                          v22 = (_DWORD *)sub_60183634(*v18, v20);
                          sub_60199C48(v22, (int)&v70, 0);
                          v23 = v79;
                          v24 = v75;
                          if ( v80 <= 0 )
                            v23 = &byte_60B3BA34;
                          if ( v76 <= 0 )
                            v24 = &byte_60B3BA34;
                          if ( !strcmp(v23, v24) )
                            break;
                          v25 = v71;
                          if ( v72 <= 0 )
                            v25 = &byte_60B3BA34;
                          if ( !strcmp(v23, v25) && !strcmp(v23, "W9J0") )
                            break;
                          if ( (int)++v20 >= v19 )
                            goto LABEL_63;
                          v17 = *v18;
                        }
                        v26 = v83;
                        v27 = *v60;
                        v64 = &sead__SafeStringBase__vtable;
                        if ( v84 <= 0 )
                          v26 = &byte_60B3BA34;
                        v65 = v26;
                        v28 = sub_60178480(v27, &v64);
                        v29 = v79;
                        v30 = v75;
                        if ( v80 <= 0 )
                          v29 = &byte_60B3BA34;
                        if ( v76 <= 0 )
                          v30 = &byte_60B3BA34;
                        v31 = strcmp(v29, v30);
                        v34 = FIELD_U32(v16, 100);
                        v33 = (_DWORD *)(v16 + 100);
                        v32 = v34;
                        if ( v31 )
                        {
                          v35 = v71;
                          v64 = &sead__SafeStringBase__vtable;
                          if ( v72 <= 0 )
                            v35 = &byte_60B3BA34;
                          v65 = v35;
                        }
                        else
                        {
                          v64 = &sead__SafeStringBase__vtable;
                          v65 = (void *)v30;
                        }
                        v36 = sub_60178480(v32, &v64);
                        if ( v28 >= 0x100 )
                          v28 = 0;
                        if ( v36 >= 0x100 )
                          v36 = 0;
                        v37 = *v33 + 104 * v36;
                        v38 = *v60 + 104 * v28;
                        v39 = FIELD_F32(v37, 92);
                        v40 = FIELD_F32(v37, 96);
                        v41 = FIELD_F32(v37, 100);
                        v42 = FIELD_F32(v38, 92);
                        v43 = FIELD_F32(v38, 96);
                        v44 = FIELD_F32(v38, 100);
                        sub_60199D24(&v66, (const void **)(v38 + 24), (const void **)(v37 + 24));
                        v45 = v42 - v39;
                        v46 = v44 - v41;
                        v47 = fabsf(v45);
                        v48 = sub_6018194C(*v59, &v66);
                        if ( v48 == -1 )
                          v48 = sub_6018194C(*v18, &v66);
                        v49 = fabsf(v46);
                        if ( v47 >= 3.0 )
                        {
                          if ( v49 >= 3.0 && v47 < v49 )
                          {
                            if ( v46 <= 0.0 )
                            {
                              *(_DWORD *)(*v33 + 104 * v36 + 56) = *v60 + 104 * v28 + 20;
                              *(_DWORD *)(*v60 + 104 * v28 + 52) = *v33 + 104 * v36 + 20;
                              *(_DWORD *)(*v33 + 104 * v36 + 80) = v48;
                              *(_DWORD *)(*v60 + 104 * v28 + 76) = v48;
                            }
                            else
                            {
                              *(_DWORD *)(*v60 + 104 * v28 + 56) = *v33 + 104 * v36 + 20;
                              *(_DWORD *)(*v33 + 104 * v36 + 52) = *v60 + 104 * v28 + 20;
                              *(_DWORD *)(*v60 + 104 * v28 + 80) = v48;
                              *(_DWORD *)(*v33 + 104 * v36 + 76) = v48;
                            }
                          }
                          else
                          {
                            if ( v45 <= 0.0 )
                            {
                              *(_DWORD *)(*v33 + 104 * v36 + 60) = *v60 + 104 * v28 + 20;
                              *(_DWORD *)(*v60 + 104 * v28 + 64) = *v33 + 104 * v36 + 20;
                              *(_DWORD *)(*v33 + 104 * v36 + 84) = v48;
                              v50 = *v60 + 104 * v28;
                            }
                            else
                            {
                              *(_DWORD *)(*v60 + 104 * v28 + 60) = *v33 + 104 * v36 + 20;
                              *(_DWORD *)(*v33 + 104 * v36 + 64) = *v60 + 104 * v28 + 20;
                              *(_DWORD *)(*v60 + 104 * v28 + 84) = v48;
                              v50 = *v33 + 104 * v36;
                            }
                            FIELD_U32(v50, 88) = v48;
                          }
                        }
                        else if ( (float)(v43 - v40) <= 0.0 )
                        {
                          *(_DWORD *)(*v33 + 104 * v36 + 48) = *v60 + 104 * v28 + 20;
                          *(_DWORD *)(*v60 + 104 * v28 + 44) = *v33 + 104 * v36 + 20;
                          *(_DWORD *)(*v33 + 104 * v36 + 72) = v48;
                          *(_DWORD *)(*v60 + 104 * v28 + 68) = v48;
                        }
                        else
                        {
                          *(_DWORD *)(*v60 + 104 * v28 + 48) = *v33 + 104 * v36 + 20;
                          *(_DWORD *)(*v33 + 104 * v36 + 44) = *v60 + 104 * v28 + 20;
                          *(_DWORD *)(*v60 + 104 * v28 + 72) = v48;
                          *(_DWORD *)(*v33 + 104 * v36 + 68) = v48;
                        }
                        v1 = a1;
                      }
                    }
LABEL_63:
                    ++v14;
                  }
                  while ( v14 < *v63 );
                }
                v13 = v57 + 1;
              }
              while ( v57 != 8 );
            }
            v8 = v56 + 1;
          }
          while ( v56 + 1 != v55 );
        }
        v3 = v54 + 1;
      }
      while ( v54 + 1 < *v53 );
    }
    result = v51 + 1;
  }
  while ( v51 != 8 );
  return result;
}
