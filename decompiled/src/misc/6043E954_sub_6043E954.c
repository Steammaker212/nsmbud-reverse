/* sub_6043E954
 * address: 0x6043E954   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043E954(_DWORD *a1)
{
  int v1; // r0
  int v2; // r3
  int v3; // r2
  _DWORD *v4; // r2
  _DWORD *v5; // r5
  _DWORD *v6; // t1
  int v7; // r9
  int v8; // r8
  int v9; // r0
  char v10; // r1
  void *v11; // r0
  char v12; // lr
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r6
  int v17; // r1
  int v18; // r1
  int v19; // r10
  int v20; // r4
  void *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v25; // [sp+10h] [bp-30h]
  int v26; // [sp+14h] [bp-2Ch]
  int v27; // [sp+18h] [bp-28h]

  *a1 = off_60BFAAF8;
  a1[4] = &off_60BFAB08;
  v1 = a1[6];
  if ( v1 )
  {
    if ( FIELD_U16(v1, 64) )
    {
      v2 = 0;
      do
      {
        v3 = FIELD_U32(v1, 16) + 232 * v2;
        v6 = *(_DWORD **)(v3 + 184);
        v4 = (_DWORD *)(v3 + 184);
        v5 = v6;
        if ( v6 )
        {
          v25 = v4;
          v26 = v2;
          v7 = 0;
          v8 = *(unsigned __int16 *)(FIELD_U32(v1, 16) + 232 * v2 + 216);
          v9 = v8 - 2;
          v10 = v8 + 1;
LABEL_6:
          v12 = v10 - v7;
          v13 = 0;
          v27 = v9 - v7;
          while ( 1 )
          {
            v14 = v7;
            if ( v7 >= v8 )
              break;
            v15 = v5[9];
            ++v7;
            v16 = *(_DWORD *)(v15 + 4 * v14);
            *(_DWORD *)(v15 + 4 * v14) = 0;
            if ( v14 + 1 < v8 )
            {
              v17 = v14 + 1;
              if ( ((v12 - (_BYTE)v13) & 1) != 0 )
              {
                v18 = v5[9];
                if ( v16 == *(_DWORD *)(v18 + 4 * v7) )
                  *(_DWORD *)(v18 + 4 * v7) = 0;
                v17 = v14 + 2;
              }
              if ( v27 != v13 )
              {
                do
                {
                  v19 = v5[9];
                  if ( v16 == *(_DWORD *)(v19 + 4 * v17) )
                    *(_DWORD *)(v19 + 4 * v17) = 0;
                  v20 = v5[9] + 4 * v17;
                  v17 += 2;
                  if ( v16 == FIELD_U32(v20, 4) )
                    FIELD_U32(v20, 4) = 0;
                }
                while ( v8 != v17 );
              }
            }
            ++v13;
            if ( v16 )
            {
              nullsub_17();
              nullsub_16();
              operator_delete(v11);
              v9 = v8 - 2;
              v10 = v8 + 1;
              goto LABEL_6;
            }
          }
          v21 = (void *)v5[9];
          if ( v21 )
            operator_delete(v21);
          v22 = sead__CriticalSection__dtor(v5);
          operator_delete(v22);
          *v25 = 0;
          v2 = v26;
          v1 = a1[6];
        }
        ++v2;
      }
      while ( v2 < FIELD_U16(v1, 64) );
    }
    sub_60871DA8();
  }
  return sead__IDisposer__dtor(a1);
}
