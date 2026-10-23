/* sub_602A852C
 * address: 0x602A852C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A852C(int a1, _DWORD *a2)
{
  _DWORD *v2; // lr
  int v3; // r12
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r4
  int result; // r0

  v2 = a2 + 2;
  v3 = a1 + 8;
  FIELD_U8(a1, 32) = 1;
  *(_DWORD *)a1 = *a2;
  FIELD_U32(a1, 4) = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v6 = v2[2];
  v7 = v2[3];
  v8 = v2[4];
  *(_DWORD *)v3 = v4;
  FIELD_U32(v3, 4) = v5;
  FIELD_U32(v3, 8) = v6;
  FIELD_U32(v3, 12) = v7;
  FIELD_U32(v3, 16) = v8;
  result = *((unsigned __int8 *)v2 + 20);
  FIELD_U8(v3, 20) = result;
  return result;
}
