/* sub_60408A3C
 * address: 0x60408A3C   size: 1900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60408A3C(int a1, _DWORD *a2)
{
  _BYTE *v4; // r4
  char *v5; // r7
  _BYTE *v6; // r9
  _BYTE *v7; // lr
  int v8; // r6
  int result; // r0
  char v10; // r2
  int v11; // r3
  char v12; // r1
  _BYTE *v13; // r1
  char v14; // r7
  int v15; // r1
  int v16; // r0
  int v17; // r0
  _BYTE *v18; // r2
  char v19; // r1
  char v20; // r0

  FIELD_U8(a1, 6476) = 0;
  v4 = (_BYTE *)(a1 + 6476);
  FIELD_U8(a1, 6478) = 0;
  v5 = (char *)(a1 + 6478);
  FIELD_U8(a1, 6481) = 0;
  FIELD_U8(a1, 6480) = 0;
  FIELD_U8(a1, 6479) = 0;
  FIELD_U32(a1, 6484) = 10;
  v6 = (_BYTE *)(a1 + 6514);
  FIELD_U32(a1, 6492) = 0;
  FIELD_U32(a1, 6496) = 0;
  FIELD_U32(a1, 6500) = 0;
  FIELD_U32(a1, 6504) = 0;
  FIELD_U32(a1, 6508) = 0;
  FIELD_U16(a1, 6512) = -1;
  FIELD_U8(a1, 6559) = 0;
  memset((void *)(a1 + 6514), 0, 0x2Cu);
  v5[82] = 2;
  v5[83] = 8;
  v7 = v5 + 83;
  v5[84] = 0;
  *(_DWORD *)(v5 - 6) = a2;
  v5[51] = 1;
  v8 = a2[3];
  v5[37] = v8 & 1;
  v5[38] = (v8 & 2) != 0;
  v5[39] = (v8 & 4) != 0;
  v5[40] = v8 & 1;
  if ( *a2 )
    FIELD_U8(a1, 6527) = 1;
  result = a2[9];
  v5[84] = result;
  switch ( a2[5] )
  {
    case 0:
      v10 = 0;
      *v4 = 0;
      FIELD_U32(a1, 6508) = 999999;
      result = 1;
      *v6 = 1;
      v11 = a2[4];
      v12 = 7;
      switch ( v11 )
      {
        case 1:
          v10 = 1;
          FIELD_U32(a1, 6488) = 519;
          result = 4;
          *v7 = 4;
          goto LABEL_41;
        case 2:
          FIELD_U8(a1, 6548) = 1;
          *v5 = 2;
          return 6548;
        case 3:
          FIELD_U8(a1, 6528) = 1;
          *v5 = 3;
          return 6528;
        case 4:
          FIELD_U8(a1, 6520) = 1;
          *v5 = 4;
          return 6520;
        case 5:
          FIELD_U8(a1, 6537) = 1;
          *v5 = 5;
          return 6537;
        case 6:
          FIELD_U8(a1, 6537) = 1;
          FIELD_U8(a1, 6549) = 1;
          *v5 = 6;
          return 6549;
        case 7:
          goto LABEL_42;
        case 8:
        case 9:
          *v5 = v11;
          return result;
        case 10:
          FIELD_U8(a1, 6537) = 1;
          *v5 = 10;
          return 6537;
        case 11:
          FIELD_U32(a1, 6488) = 675;
          *v7 = 6;
          *v5 = 1;
          return 6;
        case 13:
          *v5 = 12;
          return result;
        default:
LABEL_41:
          v12 = v10;
LABEL_42:
          *v5 = v12;
          break;
      }
      return result;
    case 1:
      *v4 = 1;
      switch ( a2[4] )
      {
        case 1:
          result = 1;
          FIELD_U8(a1, 6519) = 1;
          v13 = (_BYTE *)(a1 + 6547);
          break;
        case 2:
          FIELD_U8(a1, 6519) = 1;
          v13 = (_BYTE *)(a1 + 6533);
          result = 2;
          break;
        case 3:
          v13 = (_BYTE *)(a1 + 6521);
          result = 3;
          break;
        case 4:
          v13 = (_BYTE *)(a1 + 6551);
          result = 4;
          break;
        case 5:
          v13 = (_BYTE *)(a1 + 6519);
          result = 5;
          break;
        case 6:
          v13 = (_BYTE *)(a1 + 6537);
          result = 6;
          break;
        case 7:
          v13 = (_BYTE *)(a1 + 6519);
          result = 7;
          break;
        default:
          goto LABEL_55;
      }
      *v13 = 1;
      *v5 = result;
      return result;
    case 2:
      v14 = 2;
      *v4 = 2;
      v15 = a2[21];
      FIELD_U32(a1, 6508) = 999;
      *v6 = 1;
      sub_6040B5C4(a1 + 6478, v15);
      v16 = a2[4];
      if ( v16 == 2 )
      {
        v17 = 6520;
      }
      else
      {
        v14 = 0;
        if ( v16 != 1 )
          goto LABEL_26;
        v17 = 6552;
        v14 = 1;
      }
      *(_BYTE *)(a1 + v17) = 1;
LABEL_26:
      FIELD_U8(a1, 6480) = v14;
      return 6480;
    case 3:
      result = 3;
      *v4 = 3;
      FIELD_U8(a1, 6519) = 1;
      v18 = (_BYTE *)(a1 + 6519);
      v19 = 3;
      switch ( a2[4] )
      {
        case 0:
          v19 = 0;
          v5[40] = 0;
          FIELD_U8(a1, 6525) = 1;
          FIELD_U8(a1, 6526) = 1;
          result = 2;
          break;
        case 2:
          v19 = 2;
          *v18 = 0;
          result = 4;
          break;
        case 3:
          break;
        case 4:
          v19 = 6;
          result = 5;
          break;
        case 5:
          result = 1;
          FIELD_U8(a1, 6554) = 1;
          v19 = 4;
          break;
        case 6:
          *v18 = 0;
          result = 1;
          FIELD_U8(a1, 6537) = 1;
          v19 = 5;
          break;
        default:
          result = 1;
          v19 = 1;
          break;
      }
      *v5 = v19;
      v5[1] = result;
      return result;
    case 4:
      *v4 = 4;
      result = a2[21];
      FIELD_U32(a1, 6508) = 999;
      *v6 = 1;
      v5[1] = result;
      return result;
    case 5:
      *v4 = 5;
      result = 1;
      switch ( a2[4] )
      {
        case 0:
          v5[1] = 0;
          *v5 = 0;
          return 0;
        case 1:
          v20 = 1;
          goto LABEL_54;
        case 2:
          v20 = 2;
LABEL_54:
          v5[1] = v20;
LABEL_55:
          *v5 = 0;
          return 0;
        case 3:
        case 5:
          FIELD_U8(a1, 6537) = 1;
          *v5 = 2;
          return 2;
        case 4:
          goto LABEL_63;
        case 6:
          FIELD_U8(a1, 6532) = 1;
          *v5 = 3;
          return 3;
        case 7:
          FIELD_U8(a1, 6537) = 1;
          FIELD_U8(a1, 6542) = 1;
          *v5 = 4;
          return 4;
        case 8:
          FIELD_U8(a1, 6531) = 1;
          FIELD_U8(a1, 6537) = 1;
          *v5 = 5;
          return 5;
        case 9:
          FIELD_U8(a1, 6536) = 1;
          *v5 = 6;
          return 6;
        case 0xA:
          FIELD_U8(a1, 6530) = 1;
          FIELD_U8(a1, 6537) = 1;
          *v5 = 7;
          return 7;
        case 0xB:
          FIELD_U8(a1, 6546) = 1;
          *v5 = 8;
          return 8;
        case 0xD:
          FIELD_U8(a1, 6533) = 1;
          *v5 = 10;
          return 10;
        case 0xE:
          v5[51] = 0;
          *v5 = 11;
          return 11;
        case 0x10:
          FIELD_U8(a1, 6528) = 1;
          FIELD_U8(a1, 6552) = 1;
          *v5 = 13;
          return 13;
        case 0x11:
          FIELD_U8(a1, 6520) = 1;
          *v5 = 14;
          return 14;
        case 0x12:
          FIELD_U8(a1, 6519) = 1;
          FIELD_U8(a1, 6531) = 1;
          *v5 = 15;
          return 15;
        case 0x13:
          FIELD_U8(a1, 6557) = 1;
          *v5 = 16;
          return 16;
        default:
          result = 12;
LABEL_63:
          *v5 = result;
          break;
      }
      return result;
    case 6:
      *v4 = 6;
      FIELD_U32(a1, 6508) = 999;
      *v6 = 1;
      result = a2[21];
      *v5 = result;
      return result;
    case 7:
      *v4 = 7;
      result = 6519;
      goto LABEL_19;
    case 8:
      *v4 = 8;
      result = 6550;
LABEL_19:
      *(_BYTE *)(a1 + result) = 1;
      return result;
    case 9:
      *v4 = 9;
      return 9;
    case 0xA:
      *v4 = 10;
      result = 1;
      FIELD_U8(a1, 6519) = 1;
      if ( a2[4] == 1 )
        FIELD_U8(a1, 6553) = 1;
      return result;
    default:
      return result;
  }
}
