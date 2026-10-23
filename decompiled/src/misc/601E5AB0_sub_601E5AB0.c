/* sub_601E5AB0
 * address: 0x601E5AB0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E5AB0(int a1)
{
  int v2; // r5
  int v3; // r0
  __int16 v4; // r1
  __int16 v5; // r2
  int v6; // r0
  __int16 v7; // r1
  __int16 v8; // r2
  int v9; // r0
  __int16 v10; // r1
  __int16 v11; // r2
  int v12; // r0
  __int16 v13; // r1
  __int16 v14; // r2
  int v15; // r0
  __int16 v16; // r1
  __int16 v17; // r2
  int v18; // r0
  __int16 v19; // r1
  __int16 v20; // r2
  int v21; // r0
  __int16 v22; // r1
  __int16 v23; // r2
  int v24; // r0
  __int16 v25; // r1
  __int16 v26; // r2
  int result; // r0
  __int16 v28; // r1
  __int16 v29; // r2

  v2 = dword_60CC6D78 + 52;
  v3 = sub_60408350(dword_60CC6D78 + 52, 0);
  v4 = FIELD_U16(a1, 56);
  v5 = v4 & 0xFFFE;
  if ( v3 )
    v5 = v4 | 1;
  FIELD_U16(a1, 56) = v5;
  v6 = sub_60408350(v2, 1);
  v7 = FIELD_U16(a1, 56);
  v8 = v7 & 0xFFFD;
  if ( v6 )
    v8 = v7 | 2;
  FIELD_U16(a1, 56) = v8;
  v9 = sub_60408350(v2, 2);
  v10 = FIELD_U16(a1, 56);
  v11 = v10 & 0xFFFB;
  if ( v9 )
    v11 = v10 | 4;
  FIELD_U16(a1, 56) = v11;
  v12 = sub_60408350(v2, 3);
  v13 = FIELD_U16(a1, 56);
  v14 = v13 & 0xFFF7;
  if ( v12 )
    v14 = v13 | 8;
  FIELD_U16(a1, 56) = v14;
  v15 = sub_60408350(v2, 4);
  v16 = FIELD_U16(a1, 56);
  v17 = v16 & 0xFFEF;
  if ( v15 )
    v17 = v16 | 0x10;
  FIELD_U16(a1, 56) = v17;
  v18 = sub_60408350(v2, 5);
  v19 = FIELD_U16(a1, 56);
  v20 = v19 & 0xFFDF;
  if ( v18 )
    v20 = v19 | 0x20;
  FIELD_U16(a1, 56) = v20;
  v21 = sub_60408350(v2, 6);
  v22 = FIELD_U16(a1, 56);
  v23 = v22 & 0xFFBF;
  if ( v21 )
    v23 = v22 | 0x40;
  FIELD_U16(a1, 56) = v23;
  v24 = sub_60408350(v2, 7);
  v25 = FIELD_U16(a1, 56);
  v26 = v25 & 0xFF7F;
  if ( v24 )
    v26 = v25 | 0x80;
  FIELD_U16(a1, 56) = v26;
  result = sub_60408350(v2, 8);
  v28 = FIELD_U16(a1, 56);
  v29 = v28 & 0xFEFF;
  if ( result )
    v29 = v28 | 0x100;
  FIELD_U16(a1, 56) = v29;
  return result;
}
