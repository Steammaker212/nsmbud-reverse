/* sub_606FB29C
 * address: 0x606FB29C   size: 1124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606FB29C(int a1)
{
  int v2; // r0
  int *v3; // r5
  int v4; // r0
  bool v5; // cc
  int result; // r0
  _DWORD *v7; // r4
  int v8; // t1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r0
  int v13; // r6
  int v14; // r4
  int v15; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r1

  v3 = (int *)(a1 + 6132);
  v2 = FIELD_U32(a1, 6132);
  if ( !*(_BYTE *)(v3[3] + 8169) || v2 > 4 )
  {
    result = v2 - 1;
    switch ( result )
    {
      case 0:
        *(_BYTE *)(FIELD_U32(a1, 6100) + 6184) = 1;
        *(_BYTE *)(FIELD_U32(a1, 6104) + 6184) = 1;
        sub_606FFC34(FIELD_U32(a1, 6104), 1);
        *(_BYTE *)(FIELD_U32(a1, 6108) + 6184) = 1;
        *(_BYTE *)(FIELD_U32(a1, 6112) + 6184) = 1;
        sub_606FFC34(FIELD_U32(a1, 6112), 1);
        *(_BYTE *)(FIELD_U32(a1, 6116) + 6184) = 1;
        v8 = FIELD_U32(a1, 6120);
        v7 = (_DWORD *)(a1 + 6120);
        FIELD_U8(v8, 6184) = 1;
        sub_606FFC34(*v7, 1);
        *(_BYTE *)(v7[1] + 6184) = 1;
        result = 2;
        goto LABEL_7;
      case 1:
        result = 6184;
        if ( !*(_BYTE *)(FIELD_U32(a1, 6100) + 6184) )
          return result;
        v9 = FIELD_U32(a1, 6104);
        result = FIELD_U8(v9, 6184);
        if ( !FIELD_U8(v9, 6184) )
          return result;
        result = 6184;
        if ( !*(_BYTE *)(FIELD_U32(a1, 6108) + 6184) )
          return result;
        v10 = FIELD_U32(a1, 6112);
        result = FIELD_U8(v10, 6184);
        if ( !FIELD_U8(v10, 6184) )
          return result;
        result = 6184;
        if ( !*(_BYTE *)(FIELD_U32(a1, 6116) + 6184) )
          return result;
        v11 = FIELD_U32(a1, 6120);
        result = FIELD_U8(v11, 6184);
        if ( !FIELD_U8(v11, 6184) )
          return result;
        result = *(unsigned __int8 *)(FIELD_U32(a1, 6124) + 6184);
        if ( !*(_BYTE *)(FIELD_U32(a1, 6124) + 6184) )
          return result;
        FIELD_U32(a1, 6128) = 30;
        result = 3;
        break;
      case 2:
        v12 = FIELD_U32(a1, 6128);
        v5 = v12 <= 1;
        result = v12 - 1;
        FIELD_U32(a1, 6128) = result;
        if ( !v5 )
          return result;
        v13 = 0;
        v14 = a1 + 6100;
        do
        {
          sub_606FF5E4(*(_DWORD *)(v14 + 4 * v13));
          *(_DWORD *)(*(_DWORD *)(v14 + 4 * v13) + 6136) = dword_60B095DC[v13];
          v15 = *(_DWORD *)(v14 + 4 * v13);
          if ( ((0x2Au >> v13) & 1) != 0 )
            sub_606FFC34(v15, 2);
          else
            FIELD_U8(v15, 6185) = 1;
          ++v13;
        }
        while ( v13 != 7 );
        result = 4;
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
        v16 = FIELD_U32(a1, 6104);
        result = FIELD_U8(v16, 6186);
        if ( !FIELD_U8(v16, 6186) )
          return result;
        result = 6186;
        if ( !*(_BYTE *)(FIELD_U32(a1, 6108) + 6186) )
          return result;
        v17 = FIELD_U32(a1, 6112);
        result = FIELD_U8(v17, 6186);
        if ( !FIELD_U8(v17, 6186) )
          return result;
        result = 6186;
        if ( !*(_BYTE *)(FIELD_U32(a1, 6116) + 6186) )
          return result;
        v18 = FIELD_U32(a1, 6120);
        result = FIELD_U8(v18, 6186);
        if ( !FIELD_U8(v18, 6186) )
          return result;
        result = *(unsigned __int8 *)(FIELD_U32(a1, 6124) + 6186);
        if ( !*(_BYTE *)(FIELD_U32(a1, 6124) + 6186) )
          return result;
        result = 7;
        break;
      case 6:
        FIELD_U32(a1, 6136) = 7;
        return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBC490);
      default:
        return result;
    }
    goto LABEL_7;
  }
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
LABEL_7:
    *v3 = result;
  }
  return result;
}
