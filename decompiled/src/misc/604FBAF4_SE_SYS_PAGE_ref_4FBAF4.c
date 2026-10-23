/* SE_SYS_PAGE_ref_4FBAF4
 * address: 0x604FBAF4   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PAGE_ref_4FBAF4(int a1)
{
  _DWORD *v2; // r0
  int v3; // r6
  _DWORD *v4; // r5
  int v5; // r11
  unsigned int v6; // r10
  int v7; // r7
  int v8; // r9
  unsigned int v9; // r0
  bool v10; // cc
  unsigned int v11; // r0
  int v12; // r5
  unsigned int v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r6
  _DWORD *v17; // r5
  int v18; // r11
  unsigned int v19; // r8
  int v20; // r9
  int v21; // r7
  unsigned int v22; // r0
  bool v23; // cc
  unsigned int v24; // r0
  int v25; // r5
  unsigned int v26; // r1
  int v27; // r0
  int v28; // r1
  unsigned int *v30; // [sp+0h] [bp-30h]
  unsigned int *v31; // [sp+4h] [bp-2Ch]
  int *v32; // [sp+4h] [bp-2Ch]
  int *v33; // [sp+8h] [bp-28h]

  *(_BYTE *)(FIELD_U32(a1, 37760) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 37764) + 64) &= ~1u;
  sub_60502548(a1 + 35508);
  FIELD_U16(a1, 36560) = 0;
  sub_6047EABC((_DWORD *)(a1 + 35548));
  v2 = (_DWORD *)(a1 + 31900);
  if ( FIELD_U8(a1, 40100) )
  {
    v3 = 0;
    sub_60473DE4(v2, 0, &dword_60CA70A8, 0);
    v4 = (_DWORD *)(a1 + 40080);
    sub_604FE050(a1, FIELD_U32(a1, 40080));
    v5 = dword_60C99E1C;
    if ( dword_60C99E1C )
    {
      v6 = 0;
      v33 = (int *)(a1 + 40072);
      v31 = (unsigned int *)(a1 + 40068);
      v7 = 9 * *v4;
      v8 = dword_60C99E1C + 36 * *v4 + 16;
      do
      {
        v9 = v7 + v6;
        v10 = v7 + v6 > 0x35;
        if ( v7 + v6 <= 0x35 )
        {
          v9 = *(_DWORD *)(v8 + 4 * v6);
          v10 = v9 > 0x35;
        }
        if ( !v10 )
        {
          v11 = v5 + 4424 * v9;
          if ( FIELD_U32(v11, 236) == 1 )
          {
            v12 = *(_DWORD *)(a1 + 37684 + 4 * v6);
            if ( v12 )
            {
              v13 = v11 + 608;
              v14 = *v33;
              if ( *v31 > v6 )
                v14 += v3;
              if ( sub_6098E0F8(v14, v13, 0) == 1 )
              {
                v15 = *v33;
                if ( *v31 > v6 )
                  v15 += v3;
                sub_6098E754(v12, v15, 0);
              }
            }
          }
        }
        ++v6;
        v3 += 24;
      }
      while ( v6 != 18 );
    }
  }
  else
  {
    v16 = 0;
    sub_60473DE4(v2, 0, &dword_60CA70B0, 0);
    v17 = (_DWORD *)(a1 + 40080);
    sub_604FE050(a1, FIELD_U32(a1, 40080) - 1);
    v18 = dword_60C99E1C;
    if ( dword_60C99E1C )
    {
      v19 = 0;
      v32 = (int *)(a1 + 40072);
      v30 = (unsigned int *)(a1 + 40068);
      v20 = 9 * *v17 - 9;
      v21 = dword_60C99E1C + 36 * *v17 - 20;
      do
      {
        v22 = v20 + v19;
        v23 = v20 + v19 > 0x35;
        if ( v20 + v19 <= 0x35 )
        {
          v22 = *(_DWORD *)(v21 + 4 * v19);
          v23 = v22 > 0x35;
        }
        if ( !v23 )
        {
          v24 = v18 + 4424 * v22;
          if ( FIELD_U32(v24, 236) == 1 )
          {
            v25 = *(_DWORD *)(a1 + 37684 + 4 * v19);
            if ( v25 )
            {
              v26 = v24 + 608;
              v27 = *v32;
              if ( *v30 > v19 )
                v27 += v16;
              if ( sub_6098E0F8(v27, v26, 0) == 1 )
              {
                v28 = *v32;
                if ( *v30 > v19 )
                  v28 += v16;
                sub_6098E754(v25, v28, 0);
              }
            }
          }
        }
        ++v19;
        v16 += 24;
      }
      while ( v19 != 18 );
    }
  }
  if ( FIELD_U32(a1, 40104) != 1 )
    sub_60478680((int)"SE_SYS_PAGE", 15);
  FIELD_U8(a1, 40097) = 1;
  return 40097;
}
