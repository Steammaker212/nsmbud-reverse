/* sub_6022CD28
 * address: 0x6022CD28   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022CD28(int a1, _DWORD *a2, int a3)
{
  int v4; // r9
  int v5; // r4
  int v7; // r6
  int result; // r0
  int v9; // r6
  int v10; // r2
  int v11; // r4
  unsigned int i; // r8
  int v13; // r0
  int v14; // r6
  _DWORD *v15; // r9
  int v16; // r7
  int v17; // r0
  int v18; // r1
  int j; // r2
  _DWORD *v20; // r0
  unsigned int v21; // r1
  int v22; // r3
  int v23; // r3
  int v24; // r1
  unsigned int v25; // r0
  int v26; // r8
  unsigned int k; // r4
  _DWORD *v28; // r7
  int v29; // r6
  int v30; // r0
  int v31; // r1
  int m; // r2
  _DWORD *v33; // r0
  unsigned int v34; // r1
  int v35; // r3
  int v36; // r3
  int v37; // r1
  unsigned int v38; // r0
  int v40; // [sp+8h] [bp-40h]
  int v41; // [sp+Ch] [bp-3Ch]
  int v42; // [sp+10h] [bp-38h]
  unsigned int v43; // [sp+14h] [bp-34h]
  int v44; // [sp+18h] [bp-30h] BYREF
  int v45; // [sp+1Ch] [bp-2Ch]
  int v46; // [sp+20h] [bp-28h]

  v4 = 524289;
  v5 = a3;
  v7 = 0;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  do
  {
    result = sub_601A443C(dword_60C89E18, v5, v7);
    if ( !result )
      break;
    v44 = v5;
    v40 = v7;
    v45 = v7;
    v9 = result;
    v41 = FIELD_U32(result, 32);
    if ( v41 >= 1 )
    {
      v10 = 0;
      v42 = result;
      do
      {
        v43 = v10;
        v11 = sub_60182F10(v9, 0, v10);
        if ( v11 >= 1 )
        {
          for ( i = 0; i != v11; ++i )
          {
            v13 = sub_60182ED0(v9, 0, v43, i);
            v14 = v4;
            v15 = (_DWORD *)v13;
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            v16 = a2[1];
            (*(void (__fastcall **)(_DWORD *))(*v15 + 12))(v15);
            v17 = v15[1];
            v4 = v14;
            if ( v16 == v17 )
            {
LABEL_15:
              v46 = v43;
              v20 = (_DWORD *)sub_601DFFE4((int)&v44);
              v21 = FIELD_U32(a1, 80);
              v22 = a1 + 16;
              if ( v21 >= 4 )
                v21 = 0;
              *(_DWORD *)(v22 + 16 * v21) = v20[21];
              v23 = v22 + 16 * v21;
              FIELD_U32(v23, 4) = v20[22];
              v24 = 0;
              FIELD_U32(v23, 8) = v20[24];
              v25 = FIELD_U32(a1, 80);
              if ( v25 < 4 )
                v24 = FIELD_U32(a1, 80);
              *(_BYTE *)(a1 + 16 + 16 * v24 + 12) = 1;
              FIELD_U32(a1, 80) = v25 + 1;
            }
            else
            {
              v18 = a2[1];
              for ( j = 1; *(unsigned __int8 *)(v18 + j - 1) == *(unsigned __int8 *)(v17 + j - 1); j += 2 )
              {
                if ( !*(_BYTE *)(v18 + j - 1) )
                  goto LABEL_15;
                if ( j >= v14 || *(unsigned __int8 *)(v18 + j) != *(unsigned __int8 *)(v17 + j) )
                  break;
                if ( !*(_BYTE *)(v18 + j) )
                  goto LABEL_15;
              }
            }
            v9 = v42;
          }
        }
        v26 = sub_60182F10(v9, 1, v43);
        if ( v26 >= 1 )
        {
          for ( k = 0; k != v26; ++k )
          {
            v28 = (_DWORD *)sub_60182ED0(v9, 1u, v43, k);
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
            v29 = a2[1];
            (*(void (__fastcall **)(_DWORD *))(*v28 + 12))(v28);
            v30 = v28[1];
            if ( v29 == v30 )
            {
LABEL_31:
              v46 = v43;
              v33 = (_DWORD *)sub_601DFFE4((int)&v44);
              v34 = FIELD_U32(a1, 80);
              v35 = a1 + 16;
              if ( v34 >= 4 )
                v34 = 0;
              *(_DWORD *)(v35 + 16 * v34) = v33[21];
              v36 = v35 + 16 * v34;
              FIELD_U32(v36, 4) = v33[22];
              v37 = 0;
              FIELD_U32(v36, 8) = v33[24];
              v38 = FIELD_U32(a1, 80);
              if ( v38 < 4 )
                v37 = FIELD_U32(a1, 80);
              *(_BYTE *)(a1 + 16 + 16 * v37 + 12) = 0;
              FIELD_U32(a1, 80) = v38 + 1;
            }
            else
            {
              v31 = a2[1];
              for ( m = 1; *(unsigned __int8 *)(v31 + m - 1) == *(unsigned __int8 *)(v30 + m - 1); m += 2 )
              {
                if ( !*(_BYTE *)(v31 + m - 1) )
                  goto LABEL_31;
                if ( m >= v4 || *(unsigned __int8 *)(v31 + m) != *(unsigned __int8 *)(v30 + m) )
                  break;
                if ( !*(_BYTE *)(v31 + m) )
                  goto LABEL_31;
              }
            }
            v9 = v42;
          }
        }
        result = v41;
        v10 = v43 + 1;
      }
      while ( v43 + 1 != v41 );
    }
    v5 = a3;
    v7 = v40 + 1;
  }
  while ( v40 + 1 < 2 );
  return result;
}
