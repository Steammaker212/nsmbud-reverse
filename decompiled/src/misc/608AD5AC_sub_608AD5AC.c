/* sub_608AD5AC
 * address: 0x608AD5AC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AD5AC(int a1)
{
  void *v1; // r0
  _DWORD v3[6]; // [sp+14h] [bp-44h] BYREF
  char v4; // [sp+2Ch] [bp-2Ch]
  char v5; // [sp+2Dh] [bp-2Bh]
  char v6; // [sp+2Eh] [bp-2Ah]
  unsigned __int8 v7; // [sp+2Fh] [bp-29h]
  char v8; // [sp+30h] [bp-28h]
  char v9; // [sp+31h] [bp-27h]
  char v10; // [sp+32h] [bp-26h]
  unsigned __int8 v11; // [sp+33h] [bp-25h]
  char v12; // [sp+34h] [bp-24h]
  char v13; // [sp+35h] [bp-23h]
  char v14; // [sp+36h] [bp-22h]
  char v15; // [sp+37h] [bp-21h]
  char v16; // [sp+38h] [bp-20h]
  char v17; // [sp+39h] [bp-1Fh]
  char v18; // [sp+3Ah] [bp-1Eh]
  char v19; // [sp+3Bh] [bp-1Dh]
  char v20; // [sp+3Ch] [bp-1Ch]

  v3[4] = 1;
  v3[5] = 30;
  v5 = 0;
  v6 = 0;
  v10 = 1;
  v17 = 0;
  v20 = 0;
  v19 = 0;
  v13 = 0;
  v16 = 0;
  v15 = 0;
  v18 = 0;
  v14 = 0;
  v3[0] = FIELD_U32(a1, 36);
  v3[1] = FIELD_U32(a1, 40);
  v4 = FIELD_U8(a1, 52);
  v3[2] = FIELD_U32(a1, 44);
  v7 = FIELD_U8(a1, 74);
  v11 = FIELD_U8(a1, 76);
  v8 = FIELD_U8(a1, 54);
  v3[3] = FIELD_U32(a1, 56);
  v9 = FIELD_U8(a1, 55);
  v12 = FIELD_U8(a1, 71);
  v13 = FIELD_U8(a1, 77);
  v14 = FIELD_U8(a1, 78);
  v15 = FIELD_U8(a1, 79);
  v16 = FIELD_U8(a1, 80);
  v17 = FIELD_U8(a1, 81);
  v18 = FIELD_U8(a1, 82);
  v20 = FIELD_U8(a1, 92);
  sub_608B4EBC(v3, v11, v7, FIELD_U8(a1, 75), FIELD_U8(a1, 68));
  v1 = sub_608065A0();
  return sub_608B5360(v1, v3);
}
