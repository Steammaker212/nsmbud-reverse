/* sub_6082BE88
 * address: 0x6082BE88   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082BE88(int a1, _BYTE *a2)
{
  int result; // r0
  _DWORD *v5; // r6
  __int64 v6; // r8
  unsigned __int64 v7; // r0
  char v8; // r2
  int v9; // r0
  int v10; // r0
  int v11; // r2
  char v12; // r1
  int v13; // r1
  int v14; // r0
  int v15; // r2
  char v16; // r1
  int v17; // r0
  int v18; // r2
  char v19; // r1
  int v20; // r1
  _DWORD *v21; // r6
  int v22; // t1
  int v23; // r2
  char v24; // r3

  result = 0;
  if ( **(_BYTE **)(dword_60CC6D78 + 140) )
    return result;
  v5 = *(_DWORD **)(a1 + 40);
  v6 = FIELD_U64(dword_60CC6BE4, 200);
  v7 = (v6 - FIELD_U64(a1, 72)) / 0x3CuLL;
  if ( (unsigned int)v7 >= 0x3C )
  {
    HIDWORD(v7) = v5[11037];
    LODWORD(v7) = HIDWORD(v7) + (unsigned int)v7 / 0x3C;
    if ( (unsigned int)v7 < HIDWORD(v7) )
      LODWORD(v7) = -1;
    v5[11037] = v7;
    v8 = FIELD_U8(a1, 48);
    if ( HIDWORD(v7) != (_DWORD)v7 )
      v8 |= 1u;
    FIELD_U8(a1, 48) = v8;
    FIELD_U64(a1, 72) = v6;
  }
  v9 = sub_603FD0B4(a2);
  switch ( v9 )
  {
    case 4:
      v14 = v5[11063];
      v15 = v14;
      if ( v14 != -1 )
        v15 = v14 + 1;
      v5[11063] = v15;
      v16 = FIELD_U8(a1, 48);
      if ( v14 != v15 )
        v16 |= 1u;
      FIELD_U8(a1, 48) = v16;
      v13 = 44302;
      goto LABEL_26;
    case 3:
      v17 = v5[11062];
      v18 = v17;
      if ( v17 != -1 )
        v18 = v17 + 1;
      v5[11062] = v18;
      v19 = FIELD_U8(a1, 48);
      if ( v17 != v18 )
        v19 |= 1u;
      FIELD_U8(a1, 48) = v19;
      v13 = 44301;
      goto LABEL_26;
    case 2:
      v10 = v5[11061];
      v11 = v10;
      if ( v10 != -1 )
        v11 = v10 + 1;
      v5[11061] = v11;
      v12 = FIELD_U8(a1, 48);
      if ( v10 != v11 )
        v12 |= 1u;
      FIELD_U8(a1, 48) = v12;
      v13 = 44300;
LABEL_26:
      if ( !*((_BYTE *)v5 + v13) )
      {
        *((_BYTE *)v5 + v13) = 1;
        FIELD_U8(a1, 48) = 1;
      }
      break;
  }
  result = 1;
  if ( a2[496] )
  {
    v22 = v5[11064];
    v21 = v5 + 11064;
    v20 = v22;
    v23 = v22;
    if ( v22 != -1 )
      ++v23;
    *v21 = v23;
    v24 = FIELD_U8(a1, 48);
    if ( v20 != v23 )
      v24 |= 1u;
    FIELD_U8(a1, 48) = v24;
  }
  return result;
}
