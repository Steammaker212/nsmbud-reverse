/* sub_606F9178
 * address: 0x606F9178   size: 1192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F9178(int a1)
{
  int v2; // r0
  int *v3; // r8
  int result; // r0
  _DWORD *v5; // r4
  int v6; // t1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r0
  bool v11; // cc
  char v12; // r9
  int v13; // r5
  int v14; // r4
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r1
  int v19; // r1
  _BYTE v20[42]; // [sp+6h] [bp-2Ah]

  v3 = (int *)(a1 + 6132);
  v2 = FIELD_U32(a1, 6132);
  if ( *(_BYTE *)(v3[3] + 8169) && v2 <= 4 )
  {
    v2 = 5;
    *v3 = 5;
    FIELD_U32(a1, 6128) = 0;
  }
  result = v2 - 1;
  v20[0] = 1;
  v20[1] = 0;
  v20[2] = 1;
  v20[3] = 0;
  v20[4] = 1;
  v20[5] = 0;
  switch ( result )
  {
    case 0:
      *(_BYTE *)(FIELD_U32(a1, 6100) + 6184) = 1;
      sub_606FFC34(FIELD_U32(a1, 6104), 1);
      *(_BYTE *)(FIELD_U32(a1, 6104) + 6184) = 1;
      *(_BYTE *)(FIELD_U32(a1, 6108) + 6184) = 1;
      sub_606FFC34(FIELD_U32(a1, 6112), 1);
      *(_BYTE *)(FIELD_U32(a1, 6112) + 6184) = 1;
      *(_BYTE *)(FIELD_U32(a1, 6116) + 6184) = 1;
      v6 = FIELD_U32(a1, 6120);
      v5 = (_DWORD *)(a1 + 6120);
      sub_606FFC34(v6, 1);
      *(_BYTE *)(*v5 + 6184) = 1;
      *(_BYTE *)(v5[1] + 6184) = 1;
      result = 2;
      goto LABEL_34;
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
      goto LABEL_34;
    case 2:
      v10 = FIELD_U32(a1, 6128);
      v11 = v10 <= 1;
      result = v10 - 1;
      FIELD_U32(a1, 6128) = result;
      if ( !v11 )
        return result;
      v12 = 0;
      v13 = 0;
      v14 = a1 + 6100;
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
        FIELD_U8(a1, 6140) = 1;
        *v3 = 5;
        result = FIELD_U32(result, 6164) + 2;
        FIELD_U32(a1, 6128) = result;
      }
      return result;
    case 4:
      v16 = FIELD_U32(a1, 6128);
      v11 = v16 <= 1;
      result = v16 - 1;
      FIELD_U32(a1, 6128) = result;
      if ( !v11 )
        return result;
      sub_606FFC34(FIELD_U32(a1, 6100), 3);
      sub_606FFC34(FIELD_U32(a1, 6104), 3);
      sub_606FFC34(FIELD_U32(a1, 6108), 3);
      sub_606FFC34(FIELD_U32(a1, 6112), 3);
      sub_606FFC34(FIELD_U32(a1, 6116), 3);
      sub_606FFC34(FIELD_U32(a1, 6120), 3);
      sub_606FFC34(FIELD_U32(a1, 6124), 3);
      result = 6;
      goto LABEL_34;
    case 5:
      result = 6186;
      if ( !*(_BYTE *)(FIELD_U32(a1, 6100) + 6186) )
        return result;
      v17 = FIELD_U32(a1, 6104);
      result = FIELD_U8(v17, 6186);
      if ( !FIELD_U8(v17, 6186) )
        return result;
      result = 6186;
      if ( !*(_BYTE *)(FIELD_U32(a1, 6108) + 6186) )
        return result;
      v18 = FIELD_U32(a1, 6112);
      result = FIELD_U8(v18, 6186);
      if ( !FIELD_U8(v18, 6186) )
        return result;
      result = 6186;
      if ( !*(_BYTE *)(FIELD_U32(a1, 6116) + 6186) )
        return result;
      v19 = FIELD_U32(a1, 6120);
      result = FIELD_U8(v19, 6186);
      if ( !FIELD_U8(v19, 6186) )
        return result;
      result = *(unsigned __int8 *)(FIELD_U32(a1, 6124) + 6186);
      if ( !*(_BYTE *)(FIELD_U32(a1, 6124) + 6186) )
        return result;
      result = 7;
      goto LABEL_34;
    case 6:
      FIELD_U32(a1, 6136) = 2;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBC490);
    default:
      return result;
  }
  while ( 1 )
  {
    sub_606FF5E4(*(_DWORD *)(v14 + 4 * v13));
    *(_DWORD *)(*(_DWORD *)(v14 + 4 * v13) + 6136) = dword_60B09550[v13];
    v15 = *(_DWORD *)(v14 + 4 * v13);
    if ( !v12 )
      break;
    sub_606FFC34(v15, 2);
    if ( v13 == 6 )
      goto LABEL_22;
LABEL_17:
    v12 = v20[v13++];
  }
  FIELD_U8(v15, 6185) = 1;
  if ( v13 != 6 )
    goto LABEL_17;
LABEL_22:
  result = 4;
LABEL_34:
  *v3 = result;
  return result;
}
