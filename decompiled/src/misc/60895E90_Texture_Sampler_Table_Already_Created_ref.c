/* Texture_Sampler_Table_Already_Created_ref
 * address: 0x60895E90   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Texture_Sampler_Table_Already_Created_ref(int a1, int a2)
{
  int v3; // r5
  float *v4; // r7
  int v5; // r4
  int v6; // r10
  char v7; // r9
  float *v8; // r11
  int v9; // r7
  __int16 v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r0
  bool v13; // zf
  int i; // r10
  int v15; // r6
  __int16 v16; // r0
  unsigned int v17; // r0
  unsigned int v18; // r0
  int v19; // [sp+0h] [bp-70h]
  int v20; // [sp+4h] [bp-6Ch]
  int v21; // [sp+8h] [bp-68h]
  int v22; // [sp+8h] [bp-68h]
  int v23; // [sp+Ch] [bp-64h]
  _DWORD v24[6]; // [sp+10h] [bp-60h] BYREF
  int v25; // [sp+28h] [bp-48h] BYREF
  int v26; // [sp+2Ch] [bp-44h]
  int v27; // [sp+30h] [bp-40h]
  int v28; // [sp+34h] [bp-3Ch]
  int v29; // [sp+38h] [bp-38h]
  int v30; // [sp+3Ch] [bp-34h]
  int v31; // [sp+40h] [bp-30h]
  int v32; // [sp+44h] [bp-2Ch]

  if ( dword_60CC8028 )
  {
    debugPrintRelated3("Texture Sampler Table Already Created.\n");
  }
  else
  {
    dword_60CC8024 = 32;
    v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 8))(a2, 5376, 128);
    v4 = (float *)&v25;
    v5 = v3 + 2688;
    dword_60CC8028 = v3;
    v21 = 0;
    v23 = a1;
    do
    {
      v6 = 0;
      v7 = 0;
      v19 = v3 + 672;
      v20 = v3;
      do
      {
        v8 = v4;
        v9 = v3 + v6;
        memset(v24, 0, 21);
        FIELD_U32(v9, 40) = -1;
        FIELD_U32(v9, 44) = -1;
        sub_6083B2A0(v3 + v6 + 48);
        *(_BYTE *)(v3 + v6) = 0;
        FIELD_U32(v9, 8) = 0;
        FIELD_U32(v9, 12) = 0;
        FIELD_U8(v9, 16) = v21;
        FIELD_U8(v9, 17) = v7;
        FIELD_U8(v9, 18) = 0;
        qmemcpy((void *)(v3 + v6 + 19), v24, 0x15u);
        v32 = 0;
        v31 = 0;
        v30 = 0;
        v29 = 0;
        v28 = 0;
        v27 = 0;
        v26 = 0;
        v25 = 0;
        sub_60998EA8(v8);
        v10 = 21;
        if ( !*(_BYTE *)(v3 + v6 + 18) )
          v10 = 42;
        HIWORD(v26) = v10;
        v11 = FIELD_U8(v9, 16);
        if ( v11 <= 3 )
          LOBYTE(v25) = 0x4020001u >> (8 * v11);
        v12 = FIELD_U8(v9, 17);
        if ( v12 <= 3 )
          BYTE1(v25) = 0x4020001u >> (8 * v12);
        v4 = v8;
        BYTE2(v25) = 1;
        sub_6083B2BC(v3 + v6 + 48, a1, v8);
        v3 = v20;
        ++v7;
        *(_BYTE *)(v20 + v6) = 1;
        v6 += 168;
      }
      while ( v6 != 672 );
      v13 = v21++ == 3;
      v3 = v19;
    }
    while ( !v13 );
    for ( i = 0; i != 4; ++i )
    {
      v15 = 0;
      v22 = v5 + 672;
      do
      {
        memset(v24, 0, 21);
        FIELD_U32(v5, 40) = -1;
        FIELD_U32(v5, 44) = -1;
        sub_6083B2A0(v5 + 48);
        *(_BYTE *)v5 = 0;
        FIELD_U32(v5, 8) = 0;
        FIELD_U32(v5, 12) = 0;
        FIELD_U8(v5, 16) = i;
        FIELD_U8(v5, 17) = v15;
        FIELD_U8(v5, 18) = 1;
        qmemcpy((void *)(v5 + 19), v24, 0x15u);
        v32 = 0;
        v31 = 0;
        v30 = 0;
        v29 = 0;
        v28 = 0;
        v27 = 0;
        v26 = 0;
        v25 = 0;
        sub_60998EA8(&v25);
        v16 = 21;
        if ( !FIELD_U8(v5, 18) )
          v16 = 42;
        HIWORD(v26) = v16;
        v17 = FIELD_U8(v5, 16);
        if ( v17 <= 3 )
          LOBYTE(v25) = 0x4020001u >> (8 * v17);
        v18 = FIELD_U8(v5, 17);
        if ( v18 <= 3 )
          BYTE1(v25) = 0x4020001u >> (8 * v18);
        BYTE2(v25) = 1;
        sub_6083B2BC(v5 + 48, v23, (float *)&v25);
        ++v15;
        *(_BYTE *)v5 = 1;
        v5 += 168;
      }
      while ( v15 != 4 );
      v5 = v22;
    }
  }
}
