/* sub_606FA9F8
 * address: 0x606FA9F8   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606FA9F8(_DWORD *a1)
{
  _DWORD *v1; // r10
  int *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // t1
  int result; // r0

  v1 = a1;
  a1[1533] = 1;
  v2 = a1 + 1525;
  *(_DWORD *)(a1[1525] + 6132) = *(_DWORD *)(a1[1525] + 6128);
  sub_606FF5E4(a1[1525]);
  v3 = *v2;
  FIELD_U8(v3, 6184) = 0;
  FIELD_U8(v3, 6180) = 0;
  FIELD_U8(v3, 6185) = 0;
  FIELD_U8(v3, 6186) = 0;
  FIELD_U32(v3, 6176) = 1;
  *(_DWORD *)(v1[1526] + 6132) = *(_DWORD *)(v1[1526] + 6128);
  sub_606FF5E4(v1[1526]);
  v4 = v1[1526];
  FIELD_U8(v4, 6184) = 0;
  FIELD_U8(v4, 6180) = 0;
  FIELD_U8(v4, 6185) = 0;
  FIELD_U8(v4, 6186) = 0;
  FIELD_U32(v4, 6176) = 1;
  *(_DWORD *)(v1[1527] + 6132) = *(_DWORD *)(v1[1527] + 6128);
  sub_606FF5E4(v1[1527]);
  v5 = v1[1527];
  FIELD_U8(v5, 6184) = 0;
  FIELD_U8(v5, 6180) = 0;
  FIELD_U8(v5, 6185) = 0;
  FIELD_U8(v5, 6186) = 0;
  FIELD_U32(v5, 6176) = 1;
  *(_DWORD *)(v1[1528] + 6132) = *(_DWORD *)(v1[1528] + 6128);
  sub_606FF5E4(v1[1528]);
  v6 = v1[1528];
  FIELD_U8(v6, 6184) = 0;
  FIELD_U8(v6, 6180) = 0;
  FIELD_U8(v6, 6185) = 0;
  FIELD_U8(v6, 6186) = 0;
  FIELD_U32(v6, 6176) = 1;
  *(_DWORD *)(v1[1529] + 6132) = *(_DWORD *)(v1[1529] + 6128);
  sub_606FF5E4(v1[1529]);
  v7 = v1[1529];
  FIELD_U8(v7, 6184) = 0;
  FIELD_U8(v7, 6180) = 0;
  FIELD_U8(v7, 6185) = 0;
  FIELD_U8(v7, 6186) = 0;
  FIELD_U32(v7, 6176) = 1;
  *(_DWORD *)(v1[1530] + 6132) = *(_DWORD *)(v1[1530] + 6128);
  sub_606FF5E4(v1[1530]);
  v8 = v1[1530];
  FIELD_U8(v8, 6184) = 0;
  FIELD_U8(v8, 6180) = 0;
  FIELD_U8(v8, 6185) = 0;
  FIELD_U8(v8, 6186) = 0;
  FIELD_U32(v8, 6176) = 1;
  v9 = v1[1531];
  v1 += 1531;
  FIELD_U32(v9, 6132) = FIELD_U32(v9, 6128);
  sub_606FF5E4(*v1);
  result = *v1;
  FIELD_U8(result, 6184) = 0;
  FIELD_U8(result, 6180) = 0;
  FIELD_U8(result, 6185) = 0;
  FIELD_U8(result, 6186) = 0;
  FIELD_U32(result, 6176) = 1;
  return result;
}
