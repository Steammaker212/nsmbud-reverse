/* sub_6074BCD4
 * address: 0x6074BCD4   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074BCD4(int a1)
{
  int v2; // r9
  _DWORD *v3; // r8
  int v4; // r1
  int result; // r0
  int v6; // r5
  _WORD *v7; // r1
  int v8; // r0
  _WORD *v9; // r12
  int v10; // r1
  int v11; // r3
  _WORD *i; // r0
  int v13; // r0
  int v14; // lr
  int v15; // r7
  int v16; // r3
  __int16 *v17; // r2
  int v18; // r2
  __int16 *v19; // r6
  __int16 *v20; // r4
  bool v21; // cc
  int v22; // r6
  bool v23; // zf
  int v24; // kr00_4
  int v25; // r1
  int v26; // r0
  char v27; // r1

  v2 = a1 + 668;
  v3 = (_DWORD *)(a1 + 936);
  v4 = sub_6074C538();
  result = 0;
  if ( v4 == 1 )
  {
    v6 = 0;
    ++FIELD_U32(a1, 664);
    FIELD_U32(a1, 940) = 0;
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 668) + 12))(v2);
    v7 = (_WORD *)(FIELD_U32(a1, 672) + 2);
    v8 = 1;
    while ( *(v7 - 1) )
    {
      if ( v8 - 1 > 0x7FFFF )
      {
        v6 = 0;
        break;
      }
      if ( !*v7 )
      {
        v6 = v8;
        break;
      }
      v7 += 2;
      v8 += 2;
      v6 += 2;
    }
    FIELD_U32(a1, 944) = v6;
    (*(void (__fastcall **)(int))(FIELD_U32(a1, 668) + 12))(v2);
    v9 = *(_WORD **)(a1 + 672);
    v10 = 0;
    v11 = 1;
    for ( i = v9 + 1; *(i - 1); i += 2 )
    {
      if ( v11 - 1 > 0x7FFFF )
      {
        v10 = 0;
        break;
      }
      if ( !*i )
      {
        v10 = v11;
        break;
      }
      v11 += 2;
      v10 += 2;
    }
    v13 = -1;
    if ( !*v9 )
      goto LABEL_39;
    if ( v10 < 1 )
      goto LABEL_37;
    v14 = FIELD_U32(a1, 676);
    if ( (v10 & 1) != 0 )
    {
      v17 = *(__int16 **)(a1 + 672);
      v15 = 1;
      if ( v14 <= 0 )
        v17 = &word_60B3BA36;
      v16 = *v17 == 32;
      if ( v10 == 1 )
      {
LABEL_34:
        v23 = v16 == 1;
        if ( v16 == 1 )
          v23 = *v3 == 0;
        if ( v23 )
        {
          v13 = sub_6074C694(v2, &dword_60CBE960);
          v27 = 0;
          goto LABEL_38;
        }
LABEL_37:
        v24 = v10;
        v25 = v10 & 1;
        v26 = v25 + v24 / 2;
        v27 = v25 ^ 1;
        v13 = v26 - 1;
LABEL_38:
        FIELD_U8(a1, 952) = v27;
LABEL_39:
        FIELD_U32(a1, 948) = v13;
        return 1;
      }
    }
    else
    {
      v15 = 0;
      v16 = 0;
      if ( v10 == 1 )
        goto LABEL_34;
    }
    v18 = (int)&v9[v15 + 1];
    do
    {
      v19 = &word_60B3BA36;
      v20 = &word_60B3BA36;
      if ( v14 > v15 + 1 )
        v19 = (__int16 *)v18;
      v21 = v14 <= v15;
      v15 += 2;
      if ( !v21 )
        v20 = (__int16 *)(v18 - 2);
      v22 = (unsigned __int16)*v19;
      v18 += 4;
      if ( *v20 == 32 )
        ++v16;
      if ( v22 == 32 )
        ++v16;
    }
    while ( v15 != v10 );
    goto LABEL_34;
  }
  return result;
}
