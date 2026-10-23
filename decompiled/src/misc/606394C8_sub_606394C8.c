/* sub_606394C8
 * address: 0x606394C8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606394C8(int a1)
{
  unsigned int v1; // r2
  int *v2; // r1
  int *v3; // r3
  int *v4; // r1
  int v5; // r12
  int v6; // lr
  __int16 v7; // r3
  int result; // r0

  v1 = FIELD_U8(a1, 7025);
  v2 = &dword_60CB53D8[9 * v1];
  v3 = &v2[2 * FIELD_U8(a1, 7026)];
  v4 = v2 + 2;
  v5 = v3[4];
  v6 = v3[5];
  v7 = 0;
  FIELD_U32(a1, 120) = v5;
  FIELD_U32(a1, 124) = v6;
  FIELD_U32(a1, 128) = 0;
  if ( v1 < 4 )
    v7 = v1;
  result = 116 * v7 + a1;
  FIELD_U32(result, 6208) = v4;
  return result;
}
