/* sub_604FB06C
 * address: 0x604FB06C   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FB06C(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int *v4; // r8
  int v5; // r6
  int i; // r2
  int v7; // r0
  int v8; // r0
  int v9; // r7
  int v10; // r9
  unsigned int v11; // r11
  int v12; // r6
  int v13; // r8
  unsigned int v14; // r0
  bool v15; // cc
  unsigned int v16; // r0
  int v17; // r5
  unsigned int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int j; // r3
  unsigned int v23; // r5
  bool v24; // r6
  char v25; // r6
  _DWORD *v27; // [sp+4h] [bp-34h]
  unsigned int *v28; // [sp+8h] [bp-30h]
  int *v29; // [sp+Ch] [bp-2Ch]

  v2 = (_DWORD *)(a1 + 31900);
  sub_60473DE4((_DWORD *)(a1 + 31900), 1u, &dword_60CA70B8, 0);
  v3 = sub_6047482C((int)v2, 1u);
  v4 = (int *)v3;
  if ( v3 )
  {
    v5 = FIELD_U32(v3, 56);
    (*(void (__fastcall **)(int *))(dword_60CA70B8 + 12))(&dword_60CA70B8);
    (*(void (__fastcall **)(int *))(dword_60CA70B8 + 12))(&dword_60CA70B8);
    if ( dword_60CA70BC == v5 )
    {
LABEL_10:
      v7 = *v4;
      if ( FIELD_U32(a1, 40104) == 1 )
        (*(void (__fastcall **)(int *))(v7 + 104))(v4);
      else
        (*(void (__fastcall **)(int *))(v7 + 108))(v4);
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(dword_60CA70BC + i - 1) == *(unsigned __int8 *)(v5 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA70BC + i - 1) )
          goto LABEL_10;
        if ( i > 0x80000 || *(unsigned __int8 *)(dword_60CA70BC + i) != *(unsigned __int8 *)(v5 + i) )
          break;
        if ( !*(_BYTE *)(dword_60CA70BC + i) )
          goto LABEL_10;
      }
    }
  }
  sub_60473DE4(v2, 0, &dword_60CA70A8, 0);
  v8 = sub_6047482C((int)v2, 0);
  if ( v8 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 104))(v8);
  v27 = (_DWORD *)(a1 + 40080);
  sub_604FE050(a1, FIELD_U32(a1, 40080));
  v9 = dword_60C99E1C;
  if ( dword_60C99E1C )
  {
    v10 = 0;
    v11 = 0;
    v29 = (int *)(a1 + 40072);
    v28 = (unsigned int *)(a1 + 40068);
    v12 = 9 * *v27;
    v13 = dword_60C99E1C + 36 * *v27 + 16;
    do
    {
      v14 = v12 + v11;
      v15 = v12 + v11 > 0x35;
      if ( v12 + v11 <= 0x35 )
      {
        v14 = *(_DWORD *)(v13 + 4 * v11);
        v15 = v14 > 0x35;
      }
      if ( !v15 )
      {
        v16 = v9 + 4424 * v14;
        if ( FIELD_U32(v16, 236) == 1 )
        {
          v17 = *(_DWORD *)(a1 + 37684 + 4 * v11);
          if ( v17 )
          {
            v18 = v16 + 608;
            v19 = *v29;
            if ( *v28 > v11 )
              v19 += v10;
            if ( sub_6098E0F8(v19, v18, 0) == 1 )
            {
              v20 = *v29;
              if ( *v28 > v11 )
                v20 += v10;
              sub_6098E754(v17, v20, 0);
            }
          }
        }
      }
      ++v11;
      v10 += 24;
    }
    while ( v11 != 18 );
  }
  sub_604FDA90(a1);
  v21 = dword_60C99E1C;
  if ( dword_60C99E1C )
  {
    for ( j = 0; j != 54; ++j )
    {
      v23 = *(_DWORD *)(v21 + 16 + 4 * j);
      v24 = 0;
      if ( v23 <= 0x35 )
      {
        v25 = *(_BYTE *)(v21 + 4424 * v23 + 244);
        v24 = v25 != 0;
      }
      *(_BYTE *)(a1 + 40014 + j) = v24;
    }
  }
  else
  {
    memset((void *)(a1 + 40014), 0, 0x36u);
  }
  sub_6047E0EC(&dword_60CA70D0, FIELD_U32(a1, 37756), 2, *v27 + 1, FIELD_U32(a1, 40084));
  sub_60502694(a1 + 35508);
  FIELD_U8(a1, 36549) = 1;
  return 36549;
}
