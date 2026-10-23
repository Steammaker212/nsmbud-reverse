/* sub_6091E300
 * address: 0x6091E300   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091E300(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v7; // r1
  int *v8; // r5
  int v9; // t1
  int *v10; // r3
  int *v11; // r12
  int i; // r2
  int v13; // r7
  int v14; // t1
  int v15; // r4
  int v16; // t1
  int v17; // r9
  int v18; // r5
  int *v19; // r4
  int *v20; // r6
  int v21; // r0
  int v22; // r7
  int v23; // r1
  int v24; // r4
  int v25; // r6
  int v26; // r1
  int v27; // r7
  int v28; // r10
  int *v29; // r4
  int *v30; // r4
  int v31; // t1
  int v32; // r1
  int result; // r0
  int *v34; // r1
  int v35; // r3
  int v36; // r2
  unsigned __int16 *v37; // r3
  int v38; // r7
  int v39; // r6
  int v40; // r0
  int v41; // r7
  int *v42; // [sp+0h] [bp-D8h]
  int *v43; // [sp+4h] [bp-D4h]
  int v45; // [sp+Ch] [bp-CCh]
  int v46; // [sp+10h] [bp-C8h]
  int v48; // [sp+1Ch] [bp-BCh]
  int (**v50)(); // [sp+28h] [bp-B0h] BYREF
  int v51; // [sp+2Ch] [bp-ACh]
  _DWORD v52[42]; // [sp+30h] [bp-A8h] BYREF
  int v53; // [sp+34h] [bp-A4h] BYREF

  v6 = a5;
  if ( a5 == -1 )
  {
    v16 = FIELD_U32(a1, 16);
    v8 = (int *)(a1 + 16);
    v15 = v16;
    memset(v52, 0, 4 * v16);
    v11 = v8 + 1;
    if ( !v16 )
      return 0;
  }
  else
  {
    v9 = FIELD_U32(a1, 16);
    v8 = (int *)(a1 + 16);
    v7 = v9;
    if ( !v9 )
      return 0;
    v10 = v52;
    v11 = v8 + 1;
    i = v8[1] + 24;
    do
    {
      --v7;
      v13 = v6 / *(unsigned __int16 *)i;
      *v10++ = v13;
      v14 = *(unsigned __int16 *)i;
      i += 28;
      v6 -= v14 * v13;
    }
    while ( v7 );
    v15 = *v8;
    if ( !*v8 )
      return 0;
  }
  v46 = *v11;
  if ( a2 >= 1 )
  {
    v17 = 0;
    v42 = v11;
    v43 = v8;
    v45 = v15;
    do
    {
      v18 = 0;
      v19 = (int *)(v46 + 28 * v17);
      v20 = v19 + 1;
      while ( 1 )
      {
        v21 = *(_DWORD *)(a3 + 4 * v18);
        v50 = &sead__SafeStringBase__vtable;
        v51 = v21;
        (*(void (__fastcall **)(int *, _DWORD, int, int *))(*v19 + 12))(v19, *(_DWORD *)(*v19 + 12), i, v10);
        (*(void (__fastcall **)(int *))(*v19 + 12))(v19);
        v22 = *v20;
        ((void (__fastcall *)(int (***)()))v50[3])(&v50);
        if ( v22 == v51 )
          break;
        v23 = *v20;
        for ( i = 1; ; i += 2 )
        {
          v10 = (int *)*(unsigned __int8 *)(v23 + i - 1);
          if ( v10 != (int *)*(unsigned __int8 *)(v51 + i - 1) )
            break;
          if ( !*(_BYTE *)(v23 + i - 1) )
            goto LABEL_22;
          if ( i >= 524289 )
            break;
          v10 = (int *)*(unsigned __int8 *)(v23 + i);
          if ( v10 != (int *)*(unsigned __int8 *)(v51 + i) )
            break;
          if ( !*(_BYTE *)(v23 + i) )
            goto LABEL_22;
        }
        if ( ++v18 >= a2 )
          goto LABEL_36;
      }
LABEL_22:
      v48 = v19[4];
      if ( v48 )
      {
        v24 = v19[5];
        v25 = 0;
        v26 = *(_DWORD *)(a4 + 4 * v18);
        while ( 1 )
        {
          v27 = v24;
          v28 = v26;
          v50 = &sead__SafeStringBase__vtable;
          v51 = v26;
          v29 = (int *)(v24 + 8 * v25);
          (*(void (__fastcall **)(int *))(*v29 + 12))(v29);
          (*(void (__fastcall **)(int *))(*v29 + 12))(v29);
          v31 = v29[1];
          v30 = v29 + 1;
          ((void (__fastcall *)(int (***)()))v50[3])(&v50);
          if ( v31 == v51 )
            break;
          v32 = *v30;
          for ( i = 1; ; i += 2 )
          {
            v10 = (int *)*(unsigned __int8 *)(v32 + i - 1);
            if ( v10 != (int *)*(unsigned __int8 *)(v51 + i - 1) )
              break;
            if ( !*(_BYTE *)(v32 + i - 1) )
              goto LABEL_35;
            if ( i >= 524289 )
              break;
            v10 = (int *)*(unsigned __int8 *)(v32 + i);
            if ( v10 != (int *)*(unsigned __int8 *)(v51 + i) )
              break;
            if ( !*(_BYTE *)(v32 + i) )
              goto LABEL_35;
          }
          ++v25;
          v26 = v28;
          v24 = v27;
          if ( v25 == v48 )
            goto LABEL_36;
        }
LABEL_35:
        v52[v17] = v25;
      }
LABEL_36:
      ++v17;
    }
    while ( v17 != v45 );
    v15 = *v43;
    if ( !*v43 )
      return 0;
    v46 = *v42;
  }
  if ( (v15 & 1) != 0 )
  {
    v35 = 1;
    result = FIELD_U16(v46, 24) * v52[0];
    v34 = &v53;
    if ( v15 == 1 )
      return result;
  }
  else
  {
    result = 0;
    v34 = v52;
    v35 = 0;
    if ( v15 == 1 )
      return result;
  }
  v36 = v15 - v35;
  v37 = (unsigned __int16 *)(v46 + 28 * v35 + 52);
  do
  {
    v38 = *v34;
    v39 = v34[1];
    v34 += 2;
    v36 -= 2;
    v40 = result + *(v37 - 14) * v38;
    v41 = *v37;
    v37 += 28;
    result = v40 + v41 * v39;
  }
  while ( v36 );
  return result;
}
