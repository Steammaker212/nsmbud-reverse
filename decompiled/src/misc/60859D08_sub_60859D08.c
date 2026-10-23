/* sub_60859D08
 * address: 0x60859D08   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60859D08(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _BYTE *v9; // r6
  int v10; // r5
  int v11; // r1
  int v12; // r0
  int v13; // r9
  char v14; // r1
  char v15; // r2
  char v16; // r3
  char v17; // r1
  char v18; // r3
  char v19; // r7
  char v20; // r1
  char v21; // r3
  char v22; // r7
  char v23; // r3
  char v24; // r7
  char v25; // r1
  int v26; // r0
  int v27; // r5
  int v28; // r7
  int v29; // r6
  int v30; // r0

  ((void (__fastcall *)(int, int, int))loc_60857B80)(a1, a4, a6);
  v9 = (_BYTE *)a5;
  *(_DWORD *)a1 = off_60C5A36C;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 196) = 0;
  if ( a5 )
  {
    if ( FIELD_U16(a6, 44) )
      v9 = (_BYTE *)a4;
  }
  else
  {
    v9 = (_BYTE *)a4;
  }
  v10 = (unsigned __int8)v9[102];
  v11 = (unsigned __int8)v9[103];
  v12 = 0;
  FIELD_U32(a1, 172) = 0;
  FIELD_U8(a1, 176) = -1;
  FIELD_U8(a1, 180) = -1;
  FIELD_U8(a1, 184) = -1;
  FIELD_U8(a1, 188) = -1;
  if ( (unsigned int)v10 >= 3 )
    v10 = 3;
  v13 = v11 & 1;
  FIELD_U8(a1, 191) = -1;
  FIELD_U8(a1, 190) = -1;
  FIELD_U8(a1, 189) = -1;
  FIELD_U8(a1, 187) = -1;
  FIELD_U8(a1, 186) = -1;
  FIELD_U8(a1, 185) = -1;
  FIELD_U8(a1, 183) = -1;
  FIELD_U8(a1, 182) = -1;
  FIELD_U8(a1, 181) = -1;
  FIELD_U8(a1, 179) = -1;
  FIELD_U8(a1, 178) = -1;
  FIELD_U8(a1, 177) = -1;
  if ( (v11 & 1) == 0 )
    v12 = 1;
  if ( v10 >= 1 && v12 )
  {
    sub_60864F9C(a1 + 192, v11, 255, a1 + 188);
    sub_60864FD8(a1 + 192, v10);
  }
  v14 = v9[85];
  v15 = v9[86];
  v16 = v9[87];
  FIELD_U8(a1, 176) = v9[84];
  FIELD_U8(a1, 179) = v16;
  FIELD_U8(a1, 178) = v15;
  FIELD_U8(a1, 177) = v14;
  v17 = v9[88];
  v18 = v9[90];
  v19 = v9[91];
  FIELD_U8(a1, 181) = v9[89];
  FIELD_U8(a1, 180) = v17;
  FIELD_U8(a1, 183) = v19;
  FIELD_U8(a1, 182) = v18;
  v20 = v9[92];
  v21 = v9[94];
  v22 = v9[95];
  FIELD_U8(a1, 185) = v9[93];
  FIELD_U8(a1, 184) = v20;
  FIELD_U8(a1, 187) = v22;
  FIELD_U8(a1, 186) = v21;
  v23 = v9[98];
  v24 = v9[99];
  v25 = v9[96];
  FIELD_U8(a1, 189) = v9[97];
  FIELD_U8(a1, 188) = v25;
  FIELD_U8(a1, 191) = v24;
  FIELD_U8(a1, 190) = v23;
  if ( v10 )
  {
    if ( !v13 && FIELD_U8(a1, 192) )
      sub_6086516C(a1 + 192, v9 + 104, v10);
    v26 = 32 * v10 + 104;
  }
  else
  {
    v26 = 104;
  }
  if ( v13 )
    sub_60859FA8(a1, a2, a3, v9, a6, *(_DWORD *)&v9[v26]);
  v27 = sub_60865204(FIELD_U32(a6, 32), FIELD_U16(a4, 100));
  v28 = 0;
  v29 = 0;
  if ( a5 )
    v29 = sub_60865204(FIELD_U32(a6, 36), FIELD_U16(a5, 100));
  v30 = sub_60855BC8(52);
  if ( v30 )
    v28 = sub_608654EC(v30, a2, a3, v27, v29, a6);
  FIELD_U32(a1, 172) = v28;
  return a1;
}
