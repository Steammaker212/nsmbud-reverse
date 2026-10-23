/* sub_6048E6BC
 * address: 0x6048E6BC   size: 1088   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6048E6BC(int a1)
{
  _DWORD *v2; // r11
  int v3; // r7
  int v4; // r0
  int v5; // r0
  int v6; // r7
  unsigned int v7; // r0
  unsigned int *v8; // r6
  int v9; // r4
  unsigned int v10; // r0
  unsigned int v11; // r1
  _DWORD *v12; // r1
  int v13; // r12
  unsigned int v14; // r3
  int v15; // r1
  int v16; // r3
  unsigned int v17; // r1
  unsigned int v18; // r0
  int v19; // r9
  unsigned int v20; // r0
  unsigned int v21; // r0
  int *v22; // r12
  int v23; // r2
  int v24; // r3
  int v25; // r4
  int v26; // r5
  int v27; // r6
  int *result; // r0
  int v29; // r0
  int v30; // r9
  int (**v31)(); // r0
  _DWORD *v32; // r10
  int v33; // r11
  int v34; // r1
  int *v35; // r4
  int i; // r1
  int v37; // [sp+8h] [bp-30h]
  int *v38; // [sp+Ch] [bp-2Ch]
  int (**v39)(); // [sp+10h] [bp-28h] BYREF
  int *v40; // [sp+14h] [bp-24h]
  int (**v41)(); // [sp+18h] [bp-20h] BYREF
  int v42; // [sp+1Ch] [bp-1Ch]
  _DWORD v43[6]; // [sp+20h] [bp-18h]
  _DWORD v44[25]; // [sp+38h] [bp+0h] BYREF

  v2 = v44;
  v3 = 0;
  do
  {
    v43[0] = v3;
    v4 = v3;
    if ( (unsigned int)v3 >= 4 )
      v4 = 0;
    qmemcpy(v44, (const void *)(a1 + 96 * v4 + 6304), 0x60u);
    *(_BYTE *)(v44[0] + 64) &= ~1u;
    *(_BYTE *)(v44[1] + 64) &= ~1u;
    *(_BYTE *)(v44[2] + 64) &= ~1u;
    *(_BYTE *)(v44[3] + 64) &= ~1u;
    *(_BYTE *)(v44[4] + 64) &= ~1u;
    *(_BYTE *)(v44[5] + 64) &= ~1u;
    *(_BYTE *)(v44[6] + 64) &= ~1u;
    *(_BYTE *)(v44[7] + 64) &= ~1u;
    *(_BYTE *)(v44[8] + 64) &= ~1u;
    *(_BYTE *)(v44[9] + 64) &= ~1u;
    *(_BYTE *)(v44[10] + 64) &= ~1u;
    *(_BYTE *)(v44[11] + 64) &= ~1u;
    *(_BYTE *)(v44[12] + 64) &= ~1u;
    *(_BYTE *)(v44[13] + 64) &= ~1u;
    *(_BYTE *)(v44[14] + 64) &= ~1u;
    *(_BYTE *)(v44[15] + 64) &= ~1u;
    *(_BYTE *)(v44[16] + 64) &= ~1u;
    *(_BYTE *)(v44[17] + 64) &= ~1u;
    *(_BYTE *)(v44[18] + 64) &= ~1u;
    *(_BYTE *)(v44[19] + 64) &= ~1u;
    *(_BYTE *)(v44[20] + 64) &= ~1u;
    *(_BYTE *)(v44[21] + 64) &= ~1u;
    *(_BYTE *)(v44[22] + 64) &= ~1u;
    *(_BYTE *)(v44[23] + 64) &= ~1u;
    v5 = v3 + 1;
    if ( v3 > 3 )
      v5 = 4;
    v3 = v5;
  }
  while ( v5 != 4 );
  v6 = 0;
  v8 = (unsigned int *)(a1 + 14228);
  v7 = FIELD_U32(a1, 14228);
  v9 = a1 + 47800;
  if ( v7 >= 4 )
    v7 = 0;
  v10 = *(_DWORD *)(*(_DWORD *)(v9 + 4 * v7) + 60);
  v11 = *v8;
  if ( *v8 >= 4 )
    v11 = 0;
  v12 = *(_DWORD **)(v9 + 4 * v11);
  v13 = v12[11];
  v14 = v12[15];
  v15 = v12[14] - 1;
  if ( v14 >= 4 )
    v14 = 0;
  v16 = v13 + dword_60B02B30[v14] + 3;
  if ( v16 > v15 )
    v16 = v15;
  v17 = *v8;
  if ( v10 >= 4 )
    v10 = 0;
  if ( v17 >= 4 )
    v17 = 0;
  if ( *(int *)(*(_DWORD *)(v9 + 4 * v17) + 56) >= 6 )
  {
    v19 = dword_60B02B30[v10];
    v38 = (int *)(v16 - v13);
  }
  else
  {
    v18 = *v8;
    if ( *v8 >= 4 )
      v18 = 0;
    v19 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v18 + 47800) + 48);
    v38 = (int *)(v19 + 3);
  }
  v20 = *v8;
  if ( *v8 >= 4 )
    v20 = 0;
  qmemcpy(v44, (const void *)(a1 + 96 * v20 + 6304), 0x60u);
  v21 = *v8;
  if ( *v8 >= 4 )
    v21 = 0;
  v22 = &dword_60C9FF70[6 * v21];
  v23 = v22[1];
  v24 = v22[2];
  v25 = v22[3];
  v26 = v22[4];
  v27 = v22[5];
  v43[0] = *v22;
  v43[1] = v23;
  v43[2] = v24;
  v43[3] = v25;
  v43[4] = v26;
  v43[5] = v27;
  v37 = v19;
  result = &dword_60BC0230;
  do
  {
    if ( v6 >= v19 )
    {
      result = v38;
      if ( v6 <= (int)v38 )
      {
        v29 = sub_60491C7C(v43[v6]);
        v30 = 0;
        v41 = &sead__SafeStringBase__vtable;
        v42 = v29;
        v31 = &sead__SafeStringBase__vtable;
        while ( 1 )
        {
          v32 = v2;
          v33 = v2[v30];
          v34 = FIELD_U32(v33, 12);
          v39 = &sead__SafeStringBase__vtable;
          v40 = (int *)(v34 + 136);
          ((void (__fastcall *)(int (***)()))v31[3])(&v41);
          ((void (__fastcall *)(int (***)()))v41[3])(&v41);
          v35 = (int *)v42;
          ((void (__fastcall *)(int (***)()))v39[3])(&v39);
          result = v40;
          if ( v35 == v40 )
            break;
          for ( i = 1; *(unsigned __int8 *)(v42 + i - 1) == *((unsigned __int8 *)v40 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v42 + i - 1) )
              goto LABEL_44;
            if ( i > 0x80000 || *(unsigned __int8 *)(v42 + i) != *((unsigned __int8 *)v40 + i) )
              break;
            if ( !*(_BYTE *)(v42 + i) )
              goto LABEL_44;
          }
          if ( ++v30 == 24 )
            goto LABEL_45;
          v31 = v41;
          v2 = v32;
        }
LABEL_44:
        result = (int *)(FIELD_U8(v33, 64) | 1);
        FIELD_U8(v33, 64) = (_BYTE)result;
LABEL_45:
        v19 = v37;
        v2 = v32;
      }
    }
    ++v6;
  }
  while ( v6 != 6 );
  return result;
}
