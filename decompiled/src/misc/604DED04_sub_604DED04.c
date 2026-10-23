/* sub_604DED04
 * address: 0x604DED04   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DED04(int result)
{
  _DWORD *v1; // r1
  int v2; // r12
  int v3; // r3
  _DWORD *v4; // r1
  int v5; // r12
  int v6; // r3
  _DWORD *v7; // r1
  int v8; // r12
  int v9; // r3
  _DWORD *v10; // r1
  int v11; // r12
  int v12; // r3

  v1 = *(_DWORD **)(result + 6080);
  v2 = v1[6];
  v3 = v1[7];
  FIELD_U32(result, 6148) = v1[8];
  FIELD_U32(result, 6144) = v3;
  FIELD_U32(result, 6140) = v2;
  v4 = *(_DWORD **)(result + 6084);
  v5 = v4[6];
  v6 = v4[7];
  FIELD_U32(result, 6160) = v4[8];
  FIELD_U32(result, 6156) = v6;
  FIELD_U32(result, 6152) = v5;
  v7 = *(_DWORD **)(result + 6088);
  v8 = v7[6];
  v9 = v7[7];
  FIELD_U32(result, 6172) = v7[8];
  FIELD_U32(result, 6168) = v9;
  FIELD_U32(result, 6164) = v8;
  v10 = *(_DWORD **)(result + 6092);
  v11 = v10[6];
  v12 = v10[7];
  FIELD_U32(result, 6184) = v10[8];
  FIELD_U32(result, 6180) = v12;
  FIELD_U32(result, 6176) = v11;
  FIELD_U8(result, 6298) = 1;
  return result;
}
