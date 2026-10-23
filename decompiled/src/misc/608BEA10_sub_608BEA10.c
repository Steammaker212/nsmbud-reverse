/* sub_608BEA10
 * address: 0x608BEA10   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608BEA10(int a1, int a2)
{
  unsigned int v3; // r6
  unsigned int v4; // r1
  unsigned int v5; // r7
  int v6; // r9
  unsigned int v7; // r8
  unsigned int v8; // r0
  bool v9; // zf
  int v10; // r1
  int v11; // r0
  bool v12; // zf
  int v13; // r11
  unsigned int v14; // r0
  unsigned int v15; // r1
  int v16; // r1
  int v18; // [sp+10h] [bp-D8h]
  int v19; // [sp+14h] [bp-D4h]
  int v20; // [sp+18h] [bp-D0h]
  int v21; // [sp+1Ch] [bp-CCh]
  int v22; // [sp+20h] [bp-C8h]
  int v23; // [sp+28h] [bp-C0h]
  unsigned int v25; // [sp+30h] [bp-B8h]
  unsigned int v26; // [sp+34h] [bp-B4h]
  int v27; // [sp+38h] [bp-B0h] BYREF
  int v28; // [sp+3Ch] [bp-ACh]
  int v29; // [sp+40h] [bp-A8h]
  int v30; // [sp+44h] [bp-A4h]
  int v31; // [sp+48h] [bp-A0h]
  char v32; // [sp+4Ch] [bp-9Ch]
  _BYTE v33[98]; // [sp+4Eh] [bp-9Ah] BYREF
  int v34; // [sp+B0h] [bp-38h]
  __int16 v35; // [sp+B4h] [bp-34h]
  unsigned int v36; // [sp+B8h] [bp-30h]
  int v37; // [sp+BCh] [bp-2Ch]

  if ( FIELD_S32(a1, 212) >= 1 )
  {
    v3 = FIELD_U32(a1, 288);
    v4 = FIELD_U32(a1, 264);
    v5 = 0;
    v6 = 0;
    v7 = (FIELD_U32(a1, 268) - 1) / v3;
    v26 = FIELD_U32(a1, 268) - 1;
    v21 = v4 / v3;
    v25 = v7 + 1 - v4 / v3;
    v20 = v4 % v3;
    v23 = a1 + 252;
    v19 = v4 / v3 - 1;
    v18 = v4 / v3 + 1;
    v22 = a1 + 460;
    while ( 1 )
    {
      v8 = 0;
      v36 = 0;
      v37 = 0;
      v32 = 0;
      v31 = 0;
      v30 = 0;
      v28 = 0;
      v27 = 0;
      v35 = 0;
      v34 = 0;
      v29 = v6;
      if ( v5 > v7 )
        v8 = (v5 - v7) % v25;
      if ( v3 > v26 )
        goto LABEL_15;
      v9 = v5 == v7;
      if ( v5 != v7 )
        v9 = v5 > v7 && v8 == 0;
      if ( v9 )
      {
LABEL_15:
        v28 = FIELD_U32(a1, 300);
        v37 = FIELD_U32(a1, 296);
        v36 = v7;
        if ( FIELD_U8(a1, 260) )
        {
          v34 = 1;
          FIELD_U32(a1, 984) = FIELD_U32(a1, 264);
        }
        else
        {
          LOBYTE(v35) = 1;
          FIELD_U32(a1, 984) = 0;
        }
        goto LABEL_25;
      }
      if ( !FIELD_U8(a1, 260) || v5 <= v7 )
        break;
      v10 = FIELD_U32(a1, 288);
      v28 = v10;
      v37 = FIELD_U32(a1, 292);
      if ( v8 != 1 )
      {
        v36 = v19 + v8;
        FIELD_U32(a1, 984) += v10;
        goto LABEL_25;
      }
      v6 = 0;
      v36 = v21;
      v29 = v20;
      FIELD_U32(a1, 984) = v10 * v18;
      if ( FIELD_U32(a1, 252) == 2 )
      {
        if ( sub_608C0988(a1, a2, v23, v22, v33) != 1 )
          goto LABEL_31;
LABEL_22:
        v32 = 1;
      }
LABEL_25:
      v27 = FIELD_U32(a1, 216);
      v30 = 0;
      v13 = v28;
      sub_608BF5A8(a1, 1, &v27, FIELD_U16(a1, 240), 1, v36, v37);
      v14 = FIELD_U32(a1, 212);
      v15 = FIELD_U32(a1, 216) + 1;
      if ( v15 >= v14 )
        v15 = 0;
      FIELD_U32(a1, 216) = v15;
      if ( !(_BYTE)v35 )
      {
        ++v5;
        v6 += v13;
        if ( (int)v5 < (int)v14 )
          continue;
      }
      goto LABEL_29;
    }
    v28 = FIELD_U32(a1, 288);
    v37 = FIELD_U32(a1, 292);
    v36 = v5;
    FIELD_U32(a1, 984) += v28;
    v11 = FIELD_U32(a1, 252);
    v12 = v11 == 2;
    if ( v11 == 2 )
      v12 = v5 == 0;
    if ( !v12 )
      goto LABEL_25;
    if ( sub_608C0ABC(a1, a2, v23, v22, v33) != 1 )
    {
LABEL_31:
      v16 = 1;
      return v16 == 2;
    }
    goto LABEL_22;
  }
LABEL_29:
  v16 = 2;
  return v16 == 2;
}
