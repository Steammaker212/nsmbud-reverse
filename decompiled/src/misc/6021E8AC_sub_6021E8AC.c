/* sub_6021E8AC
 * address: 0x6021E8AC   size: 1200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021E8AC(_BYTE *a1)
{
  int v1; // r8
  unsigned int i; // r6
  int result; // r0
  int v4; // r7
  int *v5; // r0
  bool v6; // zf
  int v7; // r2
  int v8; // r1
  int v9; // r5
  int v10; // r4
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r4
  _BOOL4 v15; // r0
  int v16; // r0
  unsigned int v17; // r1
  unsigned int U32; // r0
  unsigned int v19; // r1
  unsigned int v20; // r0
  unsigned int v21; // r1
  int v22; // r0
  int v23; // r7
  int v24; // r3
  int v25; // r7
  unsigned int v26; // r4
  int v27; // r5
  int v29; // [sp+4Ch] [bp-3Ch] BYREF
  int v30; // [sp+50h] [bp-38h]
  int v31; // [sp+54h] [bp-34h]
  int v32; // [sp+58h] [bp-30h]
  int v33; // [sp+5Ch] [bp-2Ch]
  int v34; // [sp+60h] [bp-28h]

  v1 = -1;
  for ( i = 0; i != 5; ++i )
  {
    result = sub_6021EE50(6, i);
    v4 = result;
    if ( result == -1 )
      continue;
    v5 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 6u, i);
    v29 = *v5;
    v6 = v29 == -1;
    v7 = v5[1];
    v30 = v7;
    if ( v29 != -1 )
      v6 = v7 == -1;
    v8 = v5[2];
    v31 = v8;
    v9 = v5[3];
    v10 = v5[4];
    v11 = v5[5];
    v32 = v9;
    v33 = v10;
    v34 = v11;
    if ( v6 )
    {
      if ( v4 != 890 )
        goto LABEL_32;
      v12 = v32;
      v13 = 0;
      v14 = v32;
LABEL_17:
      if ( v13 )
      {
        if ( !v12 )
        {
          if ( v14 )
          {
            a1[58] = 2;
            v16 = dword_60CC6D78 + 3;
            v17 = FIELD_U8(dword_60CC6D78, 2087);
            if ( v17 < 3 )
              LOBYTE(v17) = v17 + 1;
            a1[59] = v17;
            FIELD_U8(v16, 2084) = v17;
            U32 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
            LOBYTE(v19) = 5;
            if ( U32 >> 30 != 3 )
              v19 = 0x40201u >> (8 * (U32 >> 30));
            a1[60] = v19;
            FIELD_U8(dword_60CC6D78, 2091) = v19;
          }
          else
          {
            a1[60] = FIELD_U8(dword_60CC6D78, 2091);
          }
        }
      }
      else
      {
        a1[58] = 1;
        v20 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
        LOBYTE(v21) = 5;
        if ( v20 >> 30 != 3 )
          v21 = 0x40201u >> (8 * (v20 >> 30));
        a1[60] = v21;
        FIELD_U8(dword_60CC6D78, 2091) = v21;
      }
      goto LABEL_37;
    }
    v14 = v32;
    if ( v8 == -1 )
    {
      v13 = 0;
      v12 = v32;
    }
    else
    {
      v15 = sub_601EAA9C(dword_60C8B144, -1);
      v12 = v32;
      v13 = 1;
      if ( v15 && v32 >= 1 )
      {
        v12 = v32 - 1;
        v13 = 1;
        --v32;
        if ( v4 == 890 )
          goto LABEL_17;
        goto LABEL_29;
      }
    }
    if ( v4 == 890 )
      goto LABEL_17;
    if ( !v13 )
    {
LABEL_32:
      v22 = sub_60187054(dword_60CC6D78 + 984, 6u, 0);
      v23 = v22;
      do
      {
        v24 = v22 + 1;
        if ( v22 > 4 )
          v24 = 0;
        v22 = v24;
      }
      while ( dword_60AFD3B0[v24 + 36] == -1 );
      sub_60187030(dword_60CC6D78 + 984, 6u, 0, v24);
      v34 = dword_60AFD3B0[v23 + 36];
      goto LABEL_37;
    }
LABEL_29:
    if ( v14 )
    {
      if ( !v12 )
        sub_6021F50C(dword_60C8D4EC, &v29, 6, i);
    }
LABEL_37:
    v25 = sub_601A443C(dword_60C89E18, 6, 0);
    if ( FIELD_S32(v25, 28) >= 1 )
    {
      v26 = 0;
      v27 = dword_60AFD488[i + 30];
      while ( !sub_60183038(v25, v26, v27) )
      {
        if ( (signed int)++v26 >= FIELD_U32(v25, 28) )
          goto LABEL_43;
      }
      v1 = v26;
    }
LABEL_43:
    v29 = 6;
    v30 = 0;
    v31 = v1;
    result = sub_60186FC0(dword_60CC6D78 + 984, 6u, i, (int)&v29);
  }
  return result;
}
