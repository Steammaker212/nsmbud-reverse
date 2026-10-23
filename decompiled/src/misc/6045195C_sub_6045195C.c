/* sub_6045195C
 * address: 0x6045195C   size: 1044   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall sub_6045195C(int a1, int a2, const char **a3)
{
  int v6; // r4
  int v7; // r11
  const char *v8; // r4
  size_t v9; // r6
  int v10; // r0
  int v11; // r3
  int *v12; // r5
  int v13; // r2
  int v14; // r5
  int v15; // r7
  unsigned __int16 *v16; // r0
  int v17; // r7
  size_t v18; // r8
  size_t v19; // r2
  int v20; // r0
  int v21; // r1
  int v22; // r4
  unsigned __int16 *result; // r0
  int v24; // r11
  const char *v25; // r4
  size_t v26; // r7
  int v27; // r0
  int v28; // r3
  int *v29; // r6
  int v30; // r2
  int v31; // r6
  int v32; // r5
  size_t v33; // r5
  size_t v34; // r2
  int v35; // r1
  int v36; // r0
  int v37; // r4
  int v38; // r5
  int v39; // r1
  int v40; // r1
  int v41; // r5
  int v42; // r1
  int v43; // r1
  int v44; // r0
  int v45; // [sp+0h] [bp-28h]

  v6 = FIELD_U32(a2, 20);
  (*((void (__fastcall **)(const char **))*a3 + 3))(a3);
  v7 = FIELD_U32(v6, 96);
  if ( !v7 )
  {
    v45 = -1;
    goto LABEL_24;
  }
  v45 = -1;
  v8 = a3[1];
  if ( v8 )
    v9 = strlen(a3[1]);
  else
    v9 = 0;
  v10 = FIELD_U16(v7, 12);
  v12 = (int *)(v7 + 8 + 16 * v10);
  v11 = *v12;
  if ( FIELD_U32(v7, 8) < *v12 )
  {
    v13 = v7 + 8;
    do
    {
      v14 = 0;
      if ( v9 > v11 >> 3 )
        v14 = ((unsigned __int8)v8[v9 + ~(v11 >> 3)] >> (v11 & 7)) & 1;
      v15 = *(_DWORD *)(v13 + 16 * v10);
      v10 = *(unsigned __int16 *)(v13 + 16 * v10 + 2 * v14 + 4);
      v12 = (int *)(v13 + 16 * v10);
      v11 = *v12;
    }
    while ( v15 < *v12 );
  }
  v16 = (unsigned __int16 *)v12[2];
  v17 = a1;
  v18 = *v16;
  v19 = v18;
  if ( v9 < v18 )
    v19 = v9;
  if ( !v19 )
  {
    if ( v9 < v18 )
    {
      a1 = v17;
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  v20 = memcmp(v16 + 1, v8, v19);
  v21 = v20;
  if ( !v20 )
    v21 = 1;
  if ( v9 >= v18 && !v20 )
  {
LABEL_21:
    v21 = 0;
    if ( v18 < v9 )
      v21 = -1;
  }
  a1 = v17;
  if ( v21 )
    goto LABEL_24;
  v36 = (int)v12 - v7 - 24;
  if ( v36 < 0 )
  {
    v45 = v36 >> 4;
LABEL_24:
    v22 = FIELD_U32(a2, 20);
    result = (unsigned __int16 *)(*((int (__fastcall **)(const char **))*a3 + 3))(a3);
    v24 = FIELD_U32(v22, 80);
    if ( !v24 )
      return result;
    v25 = a3[1];
    if ( v25 )
      v26 = strlen(a3[1]);
    else
      v26 = 0;
    v27 = FIELD_U16(v24, 12);
    v29 = (int *)(v24 + 8 + 16 * v27);
    v28 = *v29;
    if ( FIELD_U32(v24, 8) < *v29 )
    {
      v30 = v24 + 8;
      do
      {
        v31 = 0;
        if ( v26 > v28 >> 3 )
          v31 = ((unsigned __int8)v25[v26 + ~(v28 >> 3)] >> (v28 & 7)) & 1;
        v32 = *(_DWORD *)(v30 + 16 * v27);
        v27 = *(unsigned __int16 *)(v30 + 16 * v27 + 2 * v31 + 4);
        v29 = (int *)(v30 + 16 * v27);
        v28 = *v29;
      }
      while ( v32 < *v29 );
    }
    result = (unsigned __int16 *)v29[2];
    v33 = *result;
    v34 = v33;
    if ( v26 < v33 )
      v34 = v26;
    if ( v34 )
    {
      result = (unsigned __int16 *)memcmp(result + 1, v25, v34);
      v35 = (int)result;
      if ( !result )
        v35 = 1;
      if ( v26 < v33 || result )
        goto LABEL_44;
    }
    else if ( v26 < v33 )
    {
      return result;
    }
    v35 = 0;
    if ( v33 < v26 )
      v35 = -1;
LABEL_44:
    if ( !v35 )
    {
      result = (unsigned __int16 *)((char *)v29 - v24 - 24);
      if ( (int)result >= 0 )
      {
        v41 = *(_DWORD *)sub_6043AFA0(a2, 5, v45);
        sub_6086AF38(a1 + 120, v41);
        FIELD_U32(a1, 224) = v41;
        FIELD_U32(a1, 116) = 0;
        FIELD_U32(a1, 4) = 0;
        FIELD_F32(a1, 8) = (float)FIELD_S32(v41, 104);
        FIELD_F32(a1, 16) = (float)FIELD_S32(v41, 104);
        FIELD_U32(a1, 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(a1 + 4), 1);
        FIELD_U32(a1, 20) = 0;
        FIELD_U32(a1, 28) |= 2u;
        sub_6041838C((ModelAnimation *)(a1 + 4));
        result = *(unsigned __int16 **)(a1 + 228);
        if ( result )
        {
          v42 = FIELD_U32(a1, 232);
          FIELD_U32(a1, 228) = result;
          FIELD_U32(a1, 232) = v42;
          if ( FIELD_U32(a1, 116) )
          {
            v40 = *((_DWORD *)result + 10);
            v37 = a1 + 32;
            goto LABEL_54;
          }
          if ( FIELD_U32(a1, 224) )
          {
            v43 = *((_DWORD *)result + 10);
            v44 = a1 + 120;
            return (unsigned __int16 *)sub_6086B060(v44, v43);
          }
        }
      }
    }
    return result;
  }
  v37 = v17 + 32;
  v38 = *(_DWORD *)(FIELD_U32(a2, 20) + 88) + 104 * (v36 >> 4);
  sub_6086A634(v17 + 32, v38);
  FIELD_U32(v17, 116) = v38;
  FIELD_U32(v17, 224) = 0;
  FIELD_U32(v17, 4) = 0;
  FIELD_F32(v17, 8) = (float)FIELD_S32(v38, 92);
  FIELD_F32(v17, 16) = (float)FIELD_S32(v38, 92);
  FIELD_U32(v17, 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(v17 + 4), 1);
  FIELD_U32(v17, 20) = 0;
  FIELD_U32(v17, 28) |= 2u;
  sub_6041838C((ModelAnimation *)(v17 + 4));
  result = *(unsigned __int16 **)(v17 + 228);
  if ( result )
  {
    v39 = FIELD_U32(v17, 232);
    FIELD_U32(v17, 228) = result;
    FIELD_U32(v17, 232) = v39;
    if ( FIELD_U32(v17, 116) )
    {
      v40 = *((_DWORD *)result + 10);
LABEL_54:
      sub_6086A6E0(v37, v40);
      return (unsigned __int16 *)sub_6086A944(v37);
    }
    if ( FIELD_U32(v17, 224) )
    {
      v43 = *((_DWORD *)result + 10);
      v44 = v17 + 120;
      return (unsigned __int16 *)sub_6086B060(v44, v43);
    }
  }
  return result;
}
