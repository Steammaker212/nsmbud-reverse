/* sub_6085A1FC
 * address: 0x6085A1FC   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085A1FC(int a1, int a2, int a3)
{
  char v6; // r1
  char v7; // r2
  char v8; // r0
  char v9; // r1
  char v10; // r2
  char v11; // r0
  char v12; // r1
  char v13; // r2
  char v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r6
  int v19; // r1
  int v20; // r5
  int v21; // r6
  int v22; // r4
  int v23; // r4
  int v24; // r0
  int v25; // r0

  sub_6085852C(a1, a2);
  *(_DWORD *)a1 = off_60C5A36C;
  FIELD_U32(a1, 172) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 196) = 0;
  v6 = FIELD_U8(a2, 176);
  v7 = FIELD_U8(a2, 178);
  v8 = FIELD_U8(a2, 179);
  FIELD_U8(a1, 177) = FIELD_U8(a2, 177);
  FIELD_U8(a1, 176) = v6;
  FIELD_U8(a1, 179) = v8;
  FIELD_U8(a1, 178) = v7;
  v9 = FIELD_U8(a2, 180);
  v10 = FIELD_U8(a2, 182);
  v11 = FIELD_U8(a2, 183);
  FIELD_U8(a1, 181) = FIELD_U8(a2, 181);
  FIELD_U8(a1, 180) = v9;
  FIELD_U8(a1, 183) = v11;
  FIELD_U8(a1, 182) = v10;
  v12 = FIELD_U8(a2, 184);
  v13 = FIELD_U8(a2, 186);
  v14 = FIELD_U8(a2, 187);
  FIELD_U8(a1, 185) = FIELD_U8(a2, 185);
  FIELD_U8(a1, 184) = v12;
  FIELD_U8(a1, 187) = v14;
  FIELD_U8(a1, 186) = v13;
  v15 = FIELD_U8(a2, 188);
  v16 = FIELD_U8(a2, 189);
  v17 = FIELD_U8(a2, 190);
  v18 = FIELD_U8(a2, 191);
  FIELD_U8(a1, 189) = v16;
  v19 = v15 | (v16 << 8) | ((v17 | (v18 << 8)) << 16);
  FIELD_U8(a1, 188) = v19;
  FIELD_U8(a1, 191) = v18;
  FIELD_U8(a1, 190) = v17;
  if ( FIELD_U8(a2, 192) > 3u )
  {
    sub_6085A3B0(a1, a2);
  }
  else
  {
    v20 = FIELD_U8(a2, 193);
    if ( FIELD_U8(a2, 193) )
    {
      sub_60864F9C(a1 + 192, v19, a1 + 190, v17);
      sub_60864FD8(a1 + 192, v20);
      sub_60865030(a1 + 192, v20);
      v21 = 0;
      v22 = 0;
      do
      {
        sub_60865108(a1 + 192, v22++, FIELD_U32(a2, 196) + v21);
        v21 += 32;
      }
      while ( v20 != v22 );
    }
  }
  v23 = FIELD_U32(a2, 172);
  v24 = sub_60855BC8(52);
  if ( v24 )
    v25 = sub_6086735C(v24, v23, a3);
  else
    v25 = 0;
  FIELD_U32(a1, 172) = v25;
  return a1;
}
