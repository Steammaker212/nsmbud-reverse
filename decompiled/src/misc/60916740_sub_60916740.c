/* sub_60916740
 * address: 0x60916740   size: 768   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60916740(int a1, int a2, int a3)
{
  int v3; // r10
  unsigned int *v4; // r6
  unsigned int v5; // r1
  unsigned int v6; // r0
  unsigned int *v7; // r7
  int v8; // r12
  unsigned int v9; // r5
  unsigned int v10; // r2
  unsigned int *v11; // r1
  unsigned int v12; // r0
  unsigned int *v13; // r0
  unsigned int v14; // r1
  int v15; // r11
  int v16; // r8
  int v17; // r11
  unsigned int v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r5
  unsigned int v21; // r2
  unsigned int *v22; // r1
  unsigned int v23; // r0
  unsigned int *v24; // r9
  unsigned int v25; // r0
  char v26; // r0
  unsigned int *v27; // r1
  unsigned int v28; // r0
  unsigned int v29; // r0
  unsigned int v30; // r0
  unsigned int v31; // r1
  int v33; // [sp+10h] [bp-38h]
  int v34; // [sp+14h] [bp-34h]
  int v36; // [sp+18h] [bp-30h]
  int v37; // [sp+1Ch] [bp-2Ch]

  v3 = a1;
  v4 = (unsigned int *)(a1 + 224);
  do
    v5 = __ldrex(v4);
  while ( __strex(v5 + 1, v4) );
  v6 = FIELD_U32(a1, 212);
  v7 = (unsigned int *)(v3 + 232);
  v8 = (v6 - 1) & v5;
  v37 = v8;
  if ( a3 )
  {
    v9 = (v6 - 1) & v5;
    v33 = v3;
    do
    {
      v10 = (v9 + (int)v6 / 2) & (v6 - 1);
      v11 = *(unsigned int **)(v3 + 216);
      if ( v6 > v10 )
        v11 += 3 * v10;
      do
        v12 = __ldrex(v11);
      while ( !v12 && __strex(0xFFFFFFFF, v11) );
      v13 = *(unsigned int **)(v3 + 216);
      if ( FIELD_U32(v3, 212) > v9 )
        v13 += 3 * v9;
      while ( 1 )
      {
        v14 = __ldrex(v13);
        if ( v14 != -1 )
          break;
        if ( !__strex(1u, v13) )
        {
          v15 = FIELD_U16(v3, 220);
          v16 = dword_60CCF464 + 272;
          sead__CriticalSection__lock(dword_60CCF464 + 272);
          v17 = v15 + v9;
          dword_60CC7410(dword_60CCF464 + 48, v17, a2, a3);
          sead__CriticalSection__unlock(v16);
          do
            v18 = __ldrex(v7);
          while ( __strex(v18 + 1, v7) );
          v8 = v37;
          v3 = v33;
          if ( v17 != -1 )
            return v17;
          goto LABEL_16;
        }
      }
      do
LABEL_16:
        v19 = __ldrex(v4);
      while ( __strex(v19 + 1, v4) );
      v6 = FIELD_U32(v3, 212);
      v9 = (v6 - 1) & v19;
    }
    while ( v9 != v8 );
  }
  else
  {
    v20 = (v6 - 1) & v5;
    while ( 2 )
    {
      v21 = (v20 + (int)v6 / 2) & (v6 - 1);
      v22 = *(unsigned int **)(v3 + 216);
      if ( v6 > v21 )
        v22 += 3 * v21;
      do
        v23 = __ldrex(v22);
      while ( !v23 && __strex(0xFFFFFFFF, v22) );
      v24 = *(unsigned int **)(v3 + 216);
      if ( FIELD_U32(v3, 212) > v20 )
        v24 += 3 * v20;
      while ( 1 )
      {
        v25 = __ldrex(v24);
        if ( v25 != -1 )
          break;
        if ( !__strex(1u, v24) )
        {
          v34 = FIELD_U16(v3, 220);
          v36 = dword_60CCF464 + 272;
          sead__CriticalSection__lock(dword_60CCF464 + 272);
          v17 = v34 + v20;
          dword_60CC7410(dword_60CCF464 + 48, v34 + v20, a2, 0);
          sead__CriticalSection__unlock(v36);
          v26 = ((int (__fastcall *)(int))dword_60CC7578)(a2);
          v27 = v24 + 2;
          if ( (v26 & 8) != 0 )
          {
            do
              v29 = __ldrex(v27);
            while ( __strex(v29 | 1, v27) );
          }
          else
          {
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 & 0xFFFFFFFE, v27) );
          }
          v8 = v37;
          do
            v30 = __ldrex(v7);
          while ( __strex(v30 + 1, v7) );
          if ( v17 != -1 )
            return v17;
          goto LABEL_35;
        }
      }
      do
LABEL_35:
        v31 = __ldrex(v4);
      while ( __strex(v31 + 1, v4) );
      v6 = FIELD_U32(v3, 212);
      v20 = (v6 - 1) & v31;
      if ( v20 != v8 )
        continue;
      break;
    }
  }
  return 0;
}
