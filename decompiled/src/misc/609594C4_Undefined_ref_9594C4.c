/* Undefined_ref_9594C4
 * address: 0x609594C4   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Undefined_ref_9594C4(int a1, int a2, int a3, int a4)
{
  int result; // r0
  unsigned __int8 v5; // r8
  int v6; // r10
  const char *v7; // r9
  int v8; // r0
  int v9; // r6
  size_t v10; // r4
  int v11; // r0
  int v12; // r1
  int *v13; // r5
  int v14; // r2
  int v15; // r3
  unsigned __int16 *v16; // r0
  size_t v17; // r7
  size_t v18; // r2
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r4
  int v23; // r7
  int v24; // r5
  int v25; // r8
  size_t v26; // r4
  int v27; // r0
  int v28; // r1
  int *v29; // r6
  int v30; // r2
  int v31; // r3
  unsigned __int16 *v32; // r0
  size_t v33; // r8
  size_t v34; // r2
  int v35; // r0
  int v36; // r1
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r6
  bool v41; // zf
  int v42; // r0
  void *s2; // [sp+4h] [bp-54h]
  int v46; // [sp+18h] [bp-40h]
  _DWORD v48[2]; // [sp+20h] [bp-38h] BYREF
  int v49; // [sp+28h] [bp-30h] BYREF
  _DWORD v50[11]; // [sp+2Ch] [bp-2Ch] BYREF

  result = FIELD_U32(a2, 40);
  v46 = result;
  if ( result )
  {
    *(_DWORD *)a1 = a2;
    result = a3;
    v5 = FIELD_U8(a3, 221);
    if ( v5 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = 0;
        v8 = FIELD_U32(a3, 64);
        if ( v8 )
          v7 = (const char *)(*(_DWORD *)(v8 + 16 * v6 + 32) + 2);
        v9 = FIELD_U32(v46, 40);
        if ( !v9 )
          goto LABEL_55;
        if ( v7 )
          v10 = strlen(v7);
        else
          v10 = 0;
        v11 = FIELD_U16(v9, 12);
        v13 = (int *)(v9 + 8 + 16 * v11);
        v12 = *v13;
        if ( FIELD_U32(v9, 8) < *v13 )
        {
          do
          {
            v14 = 0;
            if ( v10 > v12 >> 3 )
              v14 = ((unsigned __int8)v7[v10 + ~(v12 >> 3)] >> (v12 & 7)) & 1;
            v15 = *(_DWORD *)(v9 + 8 + 16 * v11);
            v11 = *(unsigned __int16 *)(v9 + 8 + 16 * v11 + 2 * v14 + 4);
            v13 = (int *)(v9 + 8 + 16 * v11);
            v12 = *v13;
          }
          while ( v15 < *v13 );
        }
        v16 = (unsigned __int16 *)v13[2];
        v17 = *v16;
        v18 = v17;
        if ( v10 < v17 )
          v18 = v10;
        if ( !v18 )
          break;
        v19 = memcmp(v16 + 1, v7, v18);
        v20 = 1;
        if ( v19 )
          v20 = v19;
        if ( v10 >= v17 && !v19 )
          goto LABEL_23;
LABEL_25:
        if ( !v20 )
        {
          v21 = (int)v13 - v9 - 24;
          if ( v21 >> 4 != -1 )
          {
            v22 = a1;
            v23 = -1;
            v24 = *(_DWORD *)(*(_DWORD *)a1 + 80);
            if ( v24 )
            {
              v25 = *(_DWORD *)(FIELD_U32(v46, 32) + 8 * (v21 >> 4));
              s2 = (void *)(v25 + 2);
              v26 = strlen((const char *)(v25 + 2));
              v27 = FIELD_U16(v24, 12);
              v29 = (int *)(v24 + 8 + 16 * v27);
              v28 = *v29;
              if ( FIELD_U32(v24, 8) < *v29 )
              {
                do
                {
                  v30 = 0;
                  if ( v26 > v28 >> 3 )
                    v30 = (*(unsigned __int8 *)(v25 + v26 + ~(v28 >> 3) + 2) >> (v28 & 7)) & 1;
                  v31 = *(_DWORD *)(v24 + 8 + 16 * v27);
                  v27 = *(unsigned __int16 *)(v24 + 8 + 16 * v27 + 2 * v30 + 4);
                  v29 = (int *)(v24 + 8 + 16 * v27);
                  v28 = *v29;
                }
                while ( v31 < *v29 );
              }
              v32 = (unsigned __int16 *)v29[2];
              v33 = *v32;
              v34 = v33;
              if ( v26 < v33 )
                v34 = v26;
              if ( v34 )
              {
                v35 = memcmp(v32 + 1, s2, v34);
                v36 = 1;
                if ( v35 )
                  v36 = v35;
                if ( v26 < v33 || v35 )
                {
LABEL_44:
                  v22 = a1;
                  if ( !v36 )
                    v23 = ((int)v29 - v24 - 24) >> 4;
                  goto LABEL_46;
                }
LABEL_42:
                v36 = 0;
                if ( v33 < v26 )
                  v36 = -1;
                goto LABEL_44;
              }
              if ( v26 >= v33 )
                goto LABEL_42;
              v22 = a1;
            }
LABEL_46:
            v49 = -1;
            v50[0] = &sead__SafeStringBase__vtable;
            v50[1] = "Undefined";
            v48[0] = &sead__SafeStringBase__vtable;
            v48[1] = v7;
            sub_60918B10(&v49, a3, a4, (int)v48);
            if ( v49 != -1 )
            {
              v37 = FIELD_U32(v22, 260);
              if ( v37 < 1 )
              {
LABEL_53:
                *(_DWORD *)(v22 + 4 + 16 * v37) = v49;
                sead__SafeStringBase__operator_assign(v22 + 4 + 16 * v37 + 4, (int)v50);
                v42 = FIELD_U32(v22, 260);
                FIELD_U32(v22, 260) = v42 + 1;
                *(_BYTE *)(v22 + 4 + 16 * v42 + 12) = v23;
              }
              else
              {
                v38 = 0;
                while ( 1 )
                {
                  v39 = v22 + 16 * v38;
                  v40 = FIELD_U8(v39, 16);
                  v41 = v40 == v23;
                  if ( v40 == v23 )
                    v41 = FIELD_U32(v39, 4) == v49;
                  if ( v41 )
                    break;
                  if ( ++v38 >= v37 )
                    goto LABEL_53;
                }
              }
            }
            v5 = FIELD_U8(a3, 221);
          }
        }
LABEL_55:
        ++v6;
        result = v5;
        if ( v6 >= v5 )
          return result;
      }
      if ( v10 < v17 )
        goto LABEL_55;
LABEL_23:
      v20 = 0;
      if ( v17 < v10 )
        v20 = -1;
      goto LABEL_25;
    }
  }
  return result;
}
