/* RW9M0W909_ref_22AE5C
 * address: 0x6022AE5C   size: 1968   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RW9M0W909_ref_22AE5C(int a1, int (***a2)(), unsigned int a3, int a4)
{
  unsigned int v4; // r7
  _DWORD *v8; // r10
  _DWORD *v9; // r6
  int v10; // r1
  char *v11; // r0
  bool v12; // cc
  int v13; // r6
  _DWORD *v14; // r0
  int v15; // r0
  int v16; // r0
  int (**v17)(); // r0
  int v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r6
  int v21; // r6
  int (**v22)(); // r4
  bool v23; // zf
  int v24; // r4
  int v25; // r11
  int v26; // r11
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r4
  int v31; // r0
  char *v32; // r2
  char *v33; // r2
  int i; // r1
  int v35; // r0
  int v36; // r4
  unsigned int v37; // r7
  unsigned int v38; // r0
  int v39; // r6
  int v40; // r0
  unsigned __int8 v41; // r1
  int v42; // r0
  int v44; // [sp+8h] [bp-70h]
  _DWORD v45[2]; // [sp+18h] [bp-60h] BYREF
  int (**v46)(); // [sp+20h] [bp-58h] BYREF
  char *v47; // [sp+24h] [bp-54h]
  signed int v48; // [sp+28h] [bp-50h]
  int v49; // [sp+2Ch] [bp-4Ch] BYREF
  _DWORD v50[3]; // [sp+38h] [bp-40h] BYREF
  int v51[3]; // [sp+44h] [bp-34h] BYREF
  _DWORD *v52; // [sp+50h] [bp-28h] BYREF

  v4 = a3;
  v8 = (_DWORD *)sub_601E039C((int)a2, a3);
  if ( v8 )
  {
    v9 = (_DWORD *)(sub_601DFFE4((int)a2) + 4);
    (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
    v10 = 0;
    v11 = (char *)v9[1];
    while ( v11[v10] )
    {
      if ( !v11[v10 + 1] )
      {
        ++v10;
        break;
      }
      if ( !v11[v10 + 2] )
      {
        v10 += 2;
        break;
      }
      v12 = v10 + 2 <= 0x7FFFF;
      v10 += 3;
      if ( !v12 )
      {
        v10 = 0;
        break;
      }
    }
    v13 = 1;
    if ( v10 < 0 )
      v11 = &byte_60B3BA34;
    if ( *v11 != 75 )
    {
      v14 = sub_601E119C((int)a2, v4);
      if ( !v14
        || (v46 = (int (**)())v14[21], v47 = (char *)v14[22], v48 = v14[24], v13 = 0, !sub_601DA6F0((int *)a2, &v46)) )
      {
        v52 = 0;
        sub_601E14F8((int)a2, v4, (int *)&v52);
        if ( v52 )
        {
          v46 = (int (**)())v52[21];
          v47 = (char *)v52[22];
          v48 = v52[24];
          if ( sub_601D9E90((int)&v46) )
          {
            v15 = sub_601E08C8((int *)&v46);
            v16 = sub_6022DD38(v15, v15);
LABEL_101:
            LOBYTE(v13) = (v16 | 2) == 3;
            return v13 & 1;
          }
        }
        if ( a4 == 1 )
        {
          v51[0] = 0;
          v17 = *a2;
          if ( *a2 == (int (**)())6 )
          {
            sub_601E14F8((int)a2, v4, v51);
            if ( v51[0] )
            {
              v46 = *(int (***)())(v51[0] + 84);
              v47 = *(char **)(v51[0] + 88);
              v48 = *(_DWORD *)(v51[0] + 96);
              if ( sub_601DA114((int)&v46) && (sub_6081F070(dword_60CC6D78, &v46) < 0 || !sub_6081F058(dword_60CC6D78)) )
              {
                LOBYTE(v13) = 0;
                return v13 & 1;
              }
            }
          }
          else if ( v17 == (int (**)())5 )
          {
            v44 = a1;
            v24 = sub_601A443C(dword_60C89E18, 5, (int)a2[1]);
            v46 = *a2;
            v47 = (char *)a2[1];
            v48 = (signed int)a2[2];
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v25 = sub_601E14F8((int)&v46, v4, v51);
                  if ( !v51[0] )
                  {
                    v26 = 3;
                    v28 = 3;
                    goto LABEL_70;
                  }
                  v46 = *(int (***)())(v51[0] + 84);
                  v47 = *(char **)(v51[0] + 88);
                  v48 = *(_DWORD *)(v51[0] + 96);
                  if ( !sub_60183054(v24, v48, 16) )
                    break;
                  v26 = 3;
                  v27 = 0;
                  if ( FIELD_U8(dword_60CC6D78, 120) )
                    v26 = 1;
                  else
                    v27 = 1;
                  v13 &= v27;
                  v28 = v26 & 3;
                  if ( (v26 & 3) != 0 )
                    goto LABEL_70;
                }
                if ( !sub_60183054(v24, v48, 32) )
                  break;
                v26 = 1;
                v29 = FIELD_U8(dword_60CC6D78, 120);
                if ( FIELD_U8(dword_60CC6D78, 120) )
                {
                  v29 = 1;
                  v26 = 3;
                }
                v13 &= v29;
                v28 = v26 & 3;
                if ( (v26 & 3) != 0 )
                  goto LABEL_70;
              }
              if ( sub_601E0194((int)&v46) != 2 )
                break;
              if ( sub_60178694(v51[0], 0) )
              {
                v4 = 0;
                if ( v25 != sub_601E131C(0) )
                  continue;
              }
              if ( sub_60178694(v51[0], 1u) )
              {
                v4 = 1;
                if ( v25 != sub_601E131C(1) )
                  continue;
              }
              if ( sub_60178694(v51[0], 2u) )
              {
                v4 = 2;
                if ( v25 != sub_601E131C(2) )
                  continue;
              }
              if ( sub_60178694(v51[0], 3u) )
              {
                v4 = 3;
                if ( v25 != sub_601E131C(3) )
                  continue;
              }
              if ( sub_60178694(v51[0], 4u) )
              {
                v4 = 4;
                if ( v25 != sub_601E131C(4) )
                  continue;
              }
              if ( sub_60178694(v51[0], 5u) )
              {
                v4 = 5;
                sub_601E131C(5);
              }
            }
            v26 = 3;
            v28 = 3;
LABEL_70:
            if ( v28 == 3 )
            {
              a1 = v44;
            }
            else
            {
              v23 = v26 == 0;
              a1 = v44;
              if ( !v23 )
                return v13 & 1;
            }
          }
          else if ( v17 == (int (**)())2 )
          {
            sub_601E14F8((int)a2, v4, v51);
            if ( v51[0] )
            {
              v46 = *(int (***)())(v51[0] + 84);
              v47 = *(char **)(v51[0] + 88);
              v48 = *(_DWORD *)(v51[0] + 96);
              if ( sub_601DA52C((int)&v46) )
              {
                v18 = FIELD_U32(a1, 340);
                if ( v18 < 1 )
                  goto LABEL_35;
                v19 = 0;
                while ( 1 )
                {
                  v20 = 0;
                  if ( v19 < 0x10 )
                    v20 = v19;
                  v21 = a1 + 16 * v20;
                  v22 = *(int (***)())(v21 + 84);
                  v23 = v46 == v22;
                  if ( v46 == v22 )
                    v23 = v47 == *(char **)(v21 + 88);
                  if ( v23 && v48 == FIELD_U32(v21, 92) )
                    break;
                  if ( (int)++v19 >= v18 )
                    goto LABEL_35;
                }
                if ( !FIELD_U8(v21, 96) )
                {
LABEL_35:
                  LOBYTE(v13) = 0;
                  return v13 & 1;
                }
              }
            }
          }
        }
        v30 = -1;
        v51[0] = v8[21];
        v51[1] = v8[22];
        v31 = v8[24];
        memset(v50, 255, sizeof(v50));
        v51[2] = v31;
        v47 = (char *)&v49;
        v46 = &BufferedSafeStringBase_char_vtable_probably;
        v48 = 10;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v46);
        *v47 = 0;
        v46 = &off_60BD4F50;
        LOBYTE(v13) = 0;
        if ( sub_6022B68C((int)&off_60BD4F50, a2, v51, v50, (int)&v46) == 1 )
        {
          v32 = &byte_60B3BA34;
          if ( v48 > 1 )
            v32 = v47 + 1;
          if ( *v32 == 70 )
          {
            v33 = &byte_60B3BA34;
            if ( v48 > 5 )
              v33 = v47 + 5;
            if ( *v33 == 70 )
              v30 = (int)*a2;
          }
          ((void (__fastcall *)(int (***)()))v46[3])(&v46);
          ((void (__fastcall *)(int (***)()))v46[3])(&v46);
          if ( v47 == "RW9M0W909" )
          {
LABEL_100:
            v45[0] = &sead__SafeStringBase__vtable;
            v45[1] = "W909";
            v16 = sub_6022C144(a1, v45);
            goto LABEL_101;
          }
          for ( i = 0; i < 524289; ++i )
          {
            if ( v47[i] != aRw9m0w909[i] )
              break;
            if ( !v47[i] )
              goto LABEL_100;
          }
          v35 = sub_6022C228(a1, &v46, v30, 524289);
          v36 = v35;
          if ( v35 )
          {
            if ( v35 >= 1 )
            {
              v37 = 0;
              while ( 1 )
              {
                v38 = 0;
                if ( v37 < 4 )
                  v38 = v37;
                v39 = a1 + 16 * v38;
                v40 = sub_601E028C(v39 + 16);
                v41 = v40;
                if ( v40 == -1 )
                {
LABEL_105:
                  LOBYTE(v13) = 1;
                  return v13 & 1;
                }
                if ( v40 == 37 )
                  goto LABEL_106;
                v42 = FIELD_U32(v39, 16);
                if ( FIELD_U8(v39, 28) )
                {
                  if ( sub_6019AE00(v42, v41) )
                    goto LABEL_105;
                }
                else if ( sub_6019AE80(v42, v41) )
                {
LABEL_106:
                  LOBYTE(v13) = 1;
                  return v13 & 1;
                }
                ++v37;
                LOBYTE(v13) = 0;
                if ( (int)v37 >= v36 )
                  return v13 & 1;
              }
            }
            LOBYTE(v13) = 0;
          }
          else
          {
            LOBYTE(v13) = 1;
          }
        }
      }
    }
  }
  else
  {
    LOBYTE(v13) = 0;
  }
  return v13 & 1;
}
