/* Undefined_ref_958A10
 * address: 0x60958A10   size: 1176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Undefined_ref_958A10(int result, int a2, int a3, int a4, int a5)
{
  int v5; // r9
  int v6; // r10
  int v7; // r1
  int v8; // r2
  int v9; // r0
  char *v10; // r0
  int v11; // t1
  int v12; // r7
  _DWORD *v13; // r0
  int v14; // r2
  int v15; // r5
  size_t v16; // r4
  int v17; // r0
  int v18; // r1
  int *v19; // r8
  int v20; // r2
  int v21; // r3
  unsigned __int16 *v22; // r0
  size_t v23; // r6
  size_t v24; // r2
  int v25; // r0
  int v26; // r1
  int v27; // r0
  const char *v28; // r4
  int v29; // r5
  size_t v30; // r7
  int v31; // r0
  int v32; // r1
  int *v33; // r6
  int v34; // r2
  int v35; // r3
  unsigned __int16 *v36; // r0
  int v37; // r8
  size_t v38; // r9
  size_t v39; // r2
  int v40; // r0
  int v41; // r1
  int v42; // r3
  _DWORD *v43; // r1
  int v44; // [sp+4h] [bp-154h]
  _DWORD *v45; // [sp+10h] [bp-148h]
  int v46; // [sp+14h] [bp-144h]
  unsigned __int8 s2; // [sp+18h] [bp-140h]
  int v48; // [sp+1Ch] [bp-13Ch]
  _DWORD v49[2]; // [sp+20h] [bp-138h] BYREF
  int v50; // [sp+28h] [bp-130h] BYREF
  int v51; // [sp+2Ch] [bp-12Ch] BYREF
  _DWORD v52[73]; // [sp+34h] [bp-124h] BYREF

  v5 = a4;
  v48 = FIELD_U32(a2, 40);
  if ( v48 )
  {
    v52[0] = 0;
    v52[1] = -1;
    v52[2] = &sead__SafeStringBase__vtable;
    v52[3] = "Undefined";
    v52[4] = 0;
    v52[5] = -1;
    v52[6] = &sead__SafeStringBase__vtable;
    v52[7] = "Undefined";
    v52[8] = 0;
    v52[9] = -1;
    v52[10] = &sead__SafeStringBase__vtable;
    v52[11] = "Undefined";
    v52[12] = 0;
    v52[13] = -1;
    v52[14] = &sead__SafeStringBase__vtable;
    v52[15] = "Undefined";
    v52[16] = 0;
    v52[17] = -1;
    v52[18] = &sead__SafeStringBase__vtable;
    v52[19] = "Undefined";
    v52[20] = 0;
    v52[21] = -1;
    v52[22] = &sead__SafeStringBase__vtable;
    v52[23] = "Undefined";
    v52[24] = 0;
    v52[25] = -1;
    v52[26] = &sead__SafeStringBase__vtable;
    v52[27] = "Undefined";
    v52[28] = 0;
    v52[29] = -1;
    v52[30] = &sead__SafeStringBase__vtable;
    v52[31] = "Undefined";
    v52[32] = 0;
    v52[33] = -1;
    v52[34] = &sead__SafeStringBase__vtable;
    v52[35] = "Undefined";
    v52[36] = 0;
    v52[37] = -1;
    v52[38] = &sead__SafeStringBase__vtable;
    v52[39] = "Undefined";
    v52[40] = 0;
    v52[41] = -1;
    v52[42] = &sead__SafeStringBase__vtable;
    v52[43] = "Undefined";
    v52[44] = 0;
    v52[45] = -1;
    v52[46] = &sead__SafeStringBase__vtable;
    v52[47] = "Undefined";
    v52[48] = 0;
    v52[49] = -1;
    v52[50] = &sead__SafeStringBase__vtable;
    v52[51] = "Undefined";
    v52[52] = 0;
    v52[53] = -1;
    v52[54] = &sead__SafeStringBase__vtable;
    v52[55] = "Undefined";
    v52[56] = 0;
    v52[57] = -1;
    v52[58] = &sead__SafeStringBase__vtable;
    v52[59] = "Undefined";
    v52[60] = 0;
    v52[61] = -1;
    v52[62] = &sead__SafeStringBase__vtable;
    v52[63] = "Undefined";
    s2 = FIELD_U8(a4, 220);
    if ( s2 )
    {
      v44 = result;
      v6 = 0;
      v45 = (_DWORD *)(a3 + 24);
      v46 = 0;
      while ( 1 )
      {
        v27 = FIELD_U32(v5, 48);
        if ( v27 )
          v28 = (const char *)(*(_DWORD *)(v27 + 16 * v6 + 32) + 2);
        else
          v28 = 0;
        v29 = FIELD_U32(v48, 24);
        if ( !v29 )
          goto LABEL_54;
        if ( v28 )
          v30 = strlen(v28);
        else
          v30 = 0;
        v31 = FIELD_U16(v29, 12);
        v33 = (int *)(v29 + 8 + 16 * v31);
        v32 = *v33;
        if ( FIELD_U32(v29, 8) < *v33 )
        {
          do
          {
            v34 = 0;
            if ( v30 > v32 >> 3 )
              v34 = ((unsigned __int8)v28[v30 + ~(v32 >> 3)] >> (v32 & 7)) & 1;
            v35 = *(_DWORD *)(v29 + 8 + 16 * v31);
            v31 = *(unsigned __int16 *)(v29 + 8 + 16 * v31 + 2 * v34 + 4);
            v33 = (int *)(v29 + 8 + 16 * v31);
            v32 = *v33;
          }
          while ( v35 < *v33 );
        }
        v36 = (unsigned __int16 *)v33[2];
        v37 = v5;
        v38 = *v36;
        v39 = v38;
        if ( v30 < v38 )
          v39 = v30;
        if ( !v39 )
          break;
        v40 = memcmp(v36 + 1, v28, v39);
        v41 = 1;
        if ( v40 )
          v41 = v40;
        if ( v30 >= v38 && !v40 )
          goto LABEL_50;
LABEL_52:
        if ( v41 )
        {
LABEL_53:
          v5 = v37;
          goto LABEL_54;
        }
        v5 = v37;
        v7 = (int)v33 - v29 - 24;
        if ( v7 >> 4 == -1 )
          goto LABEL_54;
        v8 = FIELD_U32(v48, 16);
        if ( !v8 )
          goto LABEL_54;
        v9 = FIELD_U32(v37, 40) + 2 * v6;
        v11 = FIELD_U8(v9, 1);
        v10 = (char *)(v9 + 1);
        if ( v11 == 255 )
          goto LABEL_54;
        v12 = *(_DWORD *)(v8 + 8 * (v7 >> 4));
        if ( a5 )
        {
          if ( (FIELD_U32(a5, 40) & (1 << v6)) == 0 )
            goto LABEL_54;
        }
        v49[0] = &sead__SafeStringBase__vtable;
        v49[1] = v12 + 2;
        sub_6091BBEC(&v50, (int)v49, *v10);
        v13 = &v52[4 * v46];
        v13[1] = v50;
        sead__SafeStringBase__operator_assign((int)(v13 + 2), (int)&v51);
        v14 = -1;
        v15 = *(_DWORD *)(*v45 + 24);
        if ( v15 )
        {
          v16 = strlen((const char *)(v12 + 2));
          v17 = FIELD_U16(v15, 12);
          v19 = (int *)(v15 + 8 + 16 * v17);
          v18 = *v19;
          if ( FIELD_U32(v15, 8) < *v19 )
          {
            do
            {
              v20 = 0;
              if ( v16 > v18 >> 3 )
                v20 = (*(unsigned __int8 *)(v12 + v16 + ~(v18 >> 3) + 2) >> (v18 & 7)) & 1;
              v21 = *(_DWORD *)(v15 + 8 + 16 * v17);
              v17 = *(unsigned __int16 *)(v15 + 8 + 16 * v17 + 2 * v20 + 4);
              v19 = (int *)(v15 + 8 + 16 * v17);
              v18 = *v19;
            }
            while ( v21 < *v19 );
          }
          v22 = (unsigned __int16 *)v19[2];
          v23 = *v22;
          v24 = v23;
          if ( v16 < v23 )
            v24 = v16;
          if ( v24 )
          {
            v25 = memcmp(v22 + 1, (const void *)(v12 + 2), v24);
            v26 = 1;
            if ( v25 )
              v26 = v25;
            if ( v16 < v23 )
            {
              v14 = -1;
            }
            else
            {
              v14 = -1;
              if ( !v25 )
              {
LABEL_23:
                v26 = 0;
                if ( v23 < v16 )
                  v26 = -1;
              }
            }
            if ( !v26 )
              v14 = ((int)v19 - v15 - 24) >> 4;
            goto LABEL_29;
          }
          v14 = -1;
          if ( v16 >= v23 )
            goto LABEL_23;
        }
LABEL_29:
        v52[4 * v46++] = v14;
        s2 = FIELD_U8(v5, 220);
LABEL_54:
        if ( ++v6 >= s2 )
        {
          result = v44;
          v42 = v46;
          v43 = v45;
          return Undefined_ref_958EB4(result, *v43, v52, v42);
        }
      }
      if ( v30 < v38 )
        goto LABEL_53;
LABEL_50:
      v41 = 0;
      if ( v38 < v30 )
        v41 = -1;
      goto LABEL_52;
    }
    v43 = (_DWORD *)(a3 + 24);
    v42 = 0;
    return Undefined_ref_958EB4(result, *v43, v52, v42);
  }
  return result;
}
