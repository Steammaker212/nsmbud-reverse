/* sub_606FABF4
 * address: 0x606FABF4   size: 1184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606FABF4(int a1)
{
  int v2; // r0
  int *v3; // r9
  int v4; // r0
  bool v5; // cc
  int result; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r0
  int v11; // r5
  char v12; // r8
  int v13; // r4
  int v14; // r0
  int v15; // r1
  int v16; // r1
  int v17; // r1
  _BYTE v18[42]; // [sp+6h] [bp-2Ah]

  v18[0] = 0;
  v18[1] = 0;
  v18[2] = 1;
  v18[3] = 0;
  v18[4] = 0;
  v18[5] = 1;
  v3 = (int *)(a1 + 6132);
  v2 = FIELD_U32(a1, 6132);
  if ( *(_BYTE *)(v3[3] + 8169) && v2 <= 4 )
  {
    *v3 = 5;
    FIELD_U32(a1, 6128) = 0;
LABEL_4:
    v4 = FIELD_U32(a1, 6128);
    v5 = v4 <= 1;
    result = v4 - 1;
    FIELD_U32(a1, 6128) = result;
    if ( v5 )
    {
      sub_606FFC34(FIELD_U32(a1, 6100), 3);
      sub_606FFC34(FIELD_U32(a1, 6104), 3);
      sub_606FFC34(FIELD_U32(a1, 6108), 3);
      sub_606FFC34(FIELD_U32(a1, 6112), 3);
      sub_606FFC34(FIELD_U32(a1, 6116), 3);
      sub_606FFC34(FIELD_U32(a1, 6120), 3);
      sub_606FFC34(FIELD_U32(a1, 6124), 3);
      result = 6;
      goto LABEL_7;
    }
    return result;
  }
  result = v2 - 1;
  switch ( result )
  {
    case 0:
      *(_BYTE *)(FIELD_U32(a1, 6100) + 6184) = 1;
      sub_606FFC34(FIELD_U32(a1, 6100), 1);
      *(_BYTE *)(FIELD_U32(a1, 6104) + 6184) = 1;
      *(_BYTE *)(FIELD_U32(a1, 6108) + 6184) = 1;
      *(_BYTE *)(FIELD_U32(a1, 6112) + 6184) = 1;
      sub_606FFC34(FIELD_U32(a1, 6112), 1);
      *(_BYTE *)(FIELD_U32(a1, 6116) + 6184) = 1;
      *(_BYTE *)(FIELD_U32(a1, 6120) + 6184) = 1;
      *(_BYTE *)(FIELD_U32(a1, 6124) + 6184) = 1;
      sub_606FFC34(FIELD_U32(a1, 6124), 1);
      result = 2;
      goto LABEL_7;
    case 1:
      result = 6184;
      if ( !*(_BYTE *)(FIELD_U32(a1, 6100) + 6184) )
        return result;
      v7 = FIELD_U32(a1, 6104);
      result = FIELD_U8(v7, 6184);
      if ( !FIELD_U8(v7, 6184) )
        return result;
      result = 6184;
      if ( !*(_BYTE *)(FIELD_U32(a1, 6108) + 6184) )
        return result;
      v8 = FIELD_U32(a1, 6112);
      result = FIELD_U8(v8, 6184);
      if ( !FIELD_U8(v8, 6184) )
        return result;
      result = 6184;
      if ( !*(_BYTE *)(FIELD_U32(a1, 6116) + 6184) )
        return result;
      v9 = FIELD_U32(a1, 6120);
      result = FIELD_U8(v9, 6184);
      if ( !FIELD_U8(v9, 6184) )
        return result;
      result = *(unsigned __int8 *)(FIELD_U32(a1, 6124) + 6184);
      if ( !*(_BYTE *)(FIELD_U32(a1, 6124) + 6184) )
        return result;
      FIELD_U32(a1, 6128) = 30;
      result = 3;
      goto LABEL_7;
    case 2:
      v10 = FIELD_U32(a1, 6128);
      v5 = v10 <= 1;
      result = v10 - 1;
      FIELD_U32(a1, 6128) = result;
      if ( !v5 )
        return result;
      v11 = 0;
      v12 = 1;
      v13 = a1 + 6100;
      break;
    case 3:
      result = FIELD_U32(a1, 6100);
      if ( FIELD_U8(result, 6185)
        && *(_BYTE *)(FIELD_U32(a1, 6104) + 6185)
        && *(_BYTE *)(FIELD_U32(a1, 6108) + 6185)
        && *(_BYTE *)(FIELD_U32(a1, 6112) + 6185)
        && *(_BYTE *)(FIELD_U32(a1, 6116) + 6185)
        && *(_BYTE *)(FIELD_U32(a1, 6120) + 6185)
        && *(_BYTE *)(FIELD_U32(a1, 6124) + 6185) )
      {
        *v3 = 5;
        result = FIELD_U32(result, 6164);
        FIELD_U32(a1, 6128) = result;
      }
      return result;
    case 4:
      goto LABEL_4;
    case 5:
      result = 6186;
      if ( !*(_BYTE *)(FIELD_U32(a1, 6100) + 6186) )
        return result;
      v15 = FIELD_U32(a1, 6104);
      result = FIELD_U8(v15, 6186);
      if ( !FIELD_U8(v15, 6186) )
        return result;
      result = 6186;
      if ( !*(_BYTE *)(FIELD_U32(a1, 6108) + 6186) )
        return result;
      v16 = FIELD_U32(a1, 6112);
      result = FIELD_U8(v16, 6186);
      if ( !FIELD_U8(v16, 6186) )
        return result;
      result = 6186;
      if ( !*(_BYTE *)(FIELD_U32(a1, 6116) + 6186) )
        return result;
      v17 = FIELD_U32(a1, 6120);
      result = FIELD_U8(v17, 6186);
      if ( !FIELD_U8(v17, 6186) )
        return result;
      result = *(unsigned __int8 *)(FIELD_U32(a1, 6124) + 6186);
      if ( !*(_BYTE *)(FIELD_U32(a1, 6124) + 6186) )
        return result;
      result = 7;
      goto LABEL_7;
    case 6:
      FIELD_U32(a1, 6136) = 6;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBC490);
    default:
      return result;
  }
  while ( 1 )
  {
    sub_606FF5E4(*(_DWORD *)(v13 + 4 * v11));
    *(_DWORD *)(*(_DWORD *)(v13 + 4 * v11) + 6136) = dword_60B095C0[v11];
    v14 = *(_DWORD *)(v13 + 4 * v11);
    if ( !v12 )
      break;
    sub_606FFC34(v14, 2);
    if ( v11 == 6 )
      goto LABEL_26;
LABEL_21:
    v12 = v18[v11++];
  }
  FIELD_U8(v14, 6185) = 1;
  if ( v11 != 6 )
    goto LABEL_21;
LABEL_26:
  result = 4;
LABEL_7:
  *v3 = result;
  return result;
}
