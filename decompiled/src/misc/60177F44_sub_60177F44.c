/* sub_60177F44
 * address: 0x60177F44   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60177F44(int a1, int a2)
{
  int result; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r0
  char *v8; // r0
  char *v9; // r0
  int v10; // r4
  int v11; // r7
  int *v12; // r7
  char *v13; // t1
  int v14; // r1
  int i; // r2
  char *v16; // r0
  int v17; // r7
  int v18; // r5
  int *v19; // r5
  char *v20; // t1
  int v21; // r1
  int j; // r2
  char *v23; // r0
  int v24; // r10
  int v25; // r5
  int *v26; // r5
  char *v27; // t1
  int v28; // r1
  int k; // r2
  int v30; // [sp+8h] [bp-68h]
  int v31; // [sp+10h] [bp-60h]
  int (**v32)(); // [sp+14h] [bp-5Ch] BYREF
  char *v33; // [sp+18h] [bp-58h]
  int (**v34)(); // [sp+1Ch] [bp-54h] BYREF
  char *v35; // [sp+20h] [bp-50h]
  int (**v36)(); // [sp+24h] [bp-4Ch] BYREF
  char *v37; // [sp+28h] [bp-48h]
  int v38; // [sp+2Ch] [bp-44h]
  int v39; // [sp+30h] [bp-40h] BYREF
  int (**v40)(); // [sp+38h] [bp-38h] BYREF
  char *v41; // [sp+3Ch] [bp-34h]
  int v42; // [sp+40h] [bp-30h]
  int v43; // [sp+44h] [bp-2Ch] BYREF

  v41 = (char *)&v43;
  v40 = &BufferedSafeStringBase_char_vtable_probably;
  v42 = 5;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v40);
  *v41 = 0;
  v40 = &off_60BD4F38;
  v37 = (char *)&v39;
  v36 = &BufferedSafeStringBase_char_vtable_probably;
  v38 = 5;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v36);
  *v37 = 0;
  v36 = &off_60BD4F38;
  result = FIELD_U32(a2, 36);
  v31 = result;
  if ( result >= 1 )
  {
    v5 = 0;
    v30 = a2;
    do
    {
      v6 = sub_60183634(a2, v5);
      sub_60199B6C(v6, &v40, 0);
      v7 = sub_60183634(a2, v5);
      sub_60199C48(v7, &v36, 0);
      v8 = v41;
      if ( v42 <= 0 )
        v8 = &byte_60B3BA34;
      if ( *v8 )
      {
        v9 = v37;
        v10 = 0;
        v34 = &sead__SafeStringBase__vtable;
        if ( v38 <= 0 )
          v9 = &byte_60B3BA34;
        v35 = v9;
        while ( 1 )
        {
          v11 = a1 + 104 * v10;
          (*(void (__fastcall **)(int))(FIELD_U32(v11, 24) + 12))(v11 + 24);
          (*(void (__fastcall **)(int))(FIELD_U32(v11, 24) + 12))(v11 + 24);
          v13 = *(char **)(v11 + 28);
          v12 = (int *)(v11 + 28);
          ((void (__fastcall *)(int (***)()))v34[3])(&v34);
          if ( v13 == v35 )
            break;
          v14 = *v12;
          for ( i = 1; *(unsigned __int8 *)(v14 + i - 1) == (unsigned __int8)v35[i - 1]; i += 2 )
          {
            if ( !*(_BYTE *)(v14 + i - 1) )
              goto LABEL_20;
            if ( i >= 524289 || *(unsigned __int8 *)(v14 + i) != (unsigned __int8)v35[i] )
              break;
            if ( !*(_BYTE *)(v14 + i) )
              goto LABEL_20;
          }
          if ( ++v10 >= 256 )
            goto LABEL_50;
        }
LABEL_20:
        if ( v10 >= 0 )
        {
          v16 = v41;
          v17 = 0;
          v34 = &sead__SafeStringBase__vtable;
          if ( v42 <= 0 )
            v16 = &byte_60B3BA34;
          v35 = v16;
          while ( 1 )
          {
            v18 = a1 + 104 * v17;
            (*(void (__fastcall **)(int))(FIELD_U32(v18, 24) + 12))(v18 + 24);
            (*(void (__fastcall **)(int))(FIELD_U32(v18, 24) + 12))(v18 + 24);
            v20 = *(char **)(v18 + 28);
            v19 = (int *)(v18 + 28);
            ((void (__fastcall *)(int (***)()))v34[3])(&v34);
            if ( v20 == v35 )
              break;
            v21 = *v19;
            for ( j = 1; *(unsigned __int8 *)(v21 + j - 1) == (unsigned __int8)v35[j - 1]; j += 2 )
            {
              if ( !*(_BYTE *)(v21 + j - 1) )
                goto LABEL_35;
              if ( j >= 524289 || *(unsigned __int8 *)(v21 + j) != (unsigned __int8)v35[j] )
                break;
              if ( !*(_BYTE *)(v21 + j) )
                goto LABEL_35;
            }
            if ( ++v17 >= 256 )
            {
              v17 = -1;
              break;
            }
          }
LABEL_35:
          v23 = v37;
          v24 = 0;
          v32 = &sead__SafeStringBase__vtable;
          if ( v38 <= 0 )
            v23 = &byte_60B3BA34;
          v33 = v23;
          while ( 1 )
          {
            v25 = a1 + 104 * v24;
            (*(void (__fastcall **)(int))(FIELD_U32(v25, 24) + 12))(v25 + 24);
            (*(void (__fastcall **)(int))(FIELD_U32(v25, 24) + 12))(v25 + 24);
            v27 = *(char **)(v25 + 28);
            v26 = (int *)(v25 + 28);
            ((void (__fastcall *)(int (***)()))v32[3])(&v32);
            if ( v27 == v33 )
              break;
            v28 = *v26;
            for ( k = 1; *(unsigned __int8 *)(v28 + k - 1) == (unsigned __int8)v33[k - 1]; k += 2 )
            {
              if ( !*(_BYTE *)(v28 + k - 1) )
                goto LABEL_49;
              if ( k >= 524289 || *(unsigned __int8 *)(v28 + k) != (unsigned __int8)v33[k] )
                break;
              if ( !*(_BYTE *)(v28 + k) )
                goto LABEL_49;
            }
            if ( ++v24 >= 256 )
            {
              v24 = -1;
              break;
            }
          }
LABEL_49:
          sub_60178558(a1, v17, v24);
          a2 = v30;
        }
      }
LABEL_50:
      result = v31;
      ++v5;
    }
    while ( v5 != v31 );
  }
  return result;
}
