/* sub_60534414
 * address: 0x60534414   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60534414(int a1)
{
  int result; // r0
  int v2; // r4
  unsigned __int8 v3; // r1
  int v4; // r4

  result = FIELD_U32(a1, 16728) - 1;
  v2 = dword_60C99DEC;
  v3 = 0;
  switch ( result )
  {
    case 0:
      goto LABEL_4;
    case 1:
      v3 = 1;
      goto LABEL_4;
    case 2:
      v3 = 2;
LABEL_4:
      FIELD_U32(dword_60C99DEC, 508) = 0;
      v4 = v3;
      FIELD_U8(dword_60CC6D8C, 17) = 0;
      sub_60826C38(dword_60CC6E04, v3);
      return sub_60828180(dword_60CC6E04, v4);
    case 3:
      sub_60828D2C(dword_60CC6E04, 0);
      FIELD_U32(v2, 508) = 1;
      goto LABEL_10;
    case 4:
      sub_60828D98(dword_60CC6E04, 0);
      FIELD_U32(v2, 508) = 4;
      goto LABEL_10;
    case 5:
      sub_60828CC0(dword_60CC6E04, 0);
      FIELD_U32(v2, 508) = 2;
      goto LABEL_10;
    case 6:
      FIELD_U32(dword_60C99DEC, 508) = 5;
      goto LABEL_10;
    case 7:
      FIELD_U32(dword_60C99DEC, 508) = 6;
LABEL_10:
      result = dword_60CC6D8C;
      FIELD_U8(dword_60CC6D8C, 17) = 0;
      break;
    default:
      return result;
  }
  return result;
}
