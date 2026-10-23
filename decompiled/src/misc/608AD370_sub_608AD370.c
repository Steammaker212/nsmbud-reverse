/* sub_608AD370
 * address: 0x608AD370   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AD370(int a1)
{
  int v2; // r8
  int v3; // r0
  int v4; // r10
  int v5; // r9
  int v6; // r5
  void *v7; // r0
  int v8; // r5
  void *v9; // r0
  void *v10; // r0
  int v11; // r5
  bool v12; // zf
  int v13; // r0
  int v14; // r6
  void *v15; // r0
  _BYTE v17[4]; // [sp+14h] [bp-54h] BYREF
  int v18; // [sp+18h] [bp-50h]
  int v19; // [sp+1Ch] [bp-4Ch] BYREF
  int v20; // [sp+20h] [bp-48h]
  int v21; // [sp+24h] [bp-44h]
  int v22; // [sp+28h] [bp-40h]
  int v23; // [sp+2Ch] [bp-3Ch]
  int v24; // [sp+30h] [bp-38h]
  char v25; // [sp+34h] [bp-34h]
  char v26; // [sp+35h] [bp-33h]
  char v27; // [sp+36h] [bp-32h]
  unsigned __int8 v28; // [sp+37h] [bp-31h]
  char v29; // [sp+38h] [bp-30h]
  char v30; // [sp+39h] [bp-2Fh]
  char v31; // [sp+3Ah] [bp-2Eh]
  unsigned __int8 v32; // [sp+3Bh] [bp-2Dh]
  char v33; // [sp+3Ch] [bp-2Ch]
  char v34; // [sp+3Dh] [bp-2Bh]
  char v35; // [sp+3Eh] [bp-2Ah]
  char v36; // [sp+3Fh] [bp-29h]
  char v37; // [sp+40h] [bp-28h]
  char v38; // [sp+41h] [bp-27h]
  char v39; // [sp+42h] [bp-26h]
  char v40; // [sp+43h] [bp-25h]
  char v41; // [sp+44h] [bp-24h]

  v17[0] = FIELD_U8(a1, 93);
  v17[1] = FIELD_U8(a1, 94);
  v18 = FIELD_U32(a1, 96);
  v2 = FIELD_U32(a1, 20);
  v3 = sub_608CAEDC();
  v4 = sub_608CAF54(v3, FIELD_U32(a1, 44), v17);
  v5 = FIELD_U32(a1, 4);
  v23 = 1;
  v24 = 30;
  v26 = 0;
  v27 = 0;
  v31 = 1;
  v38 = 0;
  v41 = 0;
  v40 = 0;
  v34 = 0;
  v37 = 0;
  v36 = 0;
  v39 = 0;
  v35 = 0;
  v19 = FIELD_U32(a1, 36);
  v20 = FIELD_U32(a1, 40);
  v25 = FIELD_U8(a1, 52);
  v21 = FIELD_U32(a1, 44);
  v28 = FIELD_U8(a1, 74);
  v32 = FIELD_U8(a1, 76);
  v29 = FIELD_U8(a1, 54);
  v22 = FIELD_U32(a1, 56);
  v30 = FIELD_U8(a1, 55);
  v33 = FIELD_U8(a1, 71);
  v34 = FIELD_U8(a1, 77);
  v35 = FIELD_U8(a1, 78);
  v36 = FIELD_U8(a1, 79);
  v37 = FIELD_U8(a1, 80);
  v38 = FIELD_U8(a1, 81);
  v39 = FIELD_U8(a1, 82);
  v41 = FIELD_U8(a1, 92);
  sub_608B4EBC(&v19, v32, v28, FIELD_U8(a1, 75), FIELD_U8(a1, 68));
  v6 = v4 + v2 + v5;
  if ( FIELD_U8(a1, 52) )
  {
    v7 = sub_608065A0();
    v8 = v6 + 3 * sub_608B5A70(v7, &v19) + 4160;
  }
  else
  {
    v8 = v6 + 4096;
  }
  if ( FIELD_U8(a1, 54) )
  {
    v9 = sub_608065A0();
    v8 += sub_608B5330(v9, &v19);
  }
  v10 = sub_608065A0();
  v11 = v8 + sub_608B5170(v10, &v19) + FIELD_U32(a1, 8) + FIELD_U32(a1, 24) + 4096;
  v12 = FIELD_U8(a1, 55) == 0;
  if ( FIELD_U8(a1, 55) )
    v12 = FIELD_U8(a1, 73) == 0;
  if ( !v12 )
    v11 += sub_608AD5AC(a1);
  if ( FIELD_U8(a1, 72) )
  {
    LOWORD(v19) = FIELD_U16(a1, 93);
    v20 = FIELD_U32(a1, 96);
    v13 = sub_608C7FF0();
    v14 = sub_608C8078(v13, 2 * FIELD_U32(a1, 44), &v19);
    v15 = sub_608065A0();
    v11 += ((v14 + sub_608B5328(v15, FIELD_U32(a1, 44)) + 4095) & 0xFFFFF000) + 4096;
  }
  return v11;
}
