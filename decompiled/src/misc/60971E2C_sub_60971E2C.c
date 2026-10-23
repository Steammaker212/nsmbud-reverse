/* sub_60971E2C
 * address: 0x60971E2C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_60971E2C(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r8
  int v6; // r6
  __int64 result; // r0
  _DWORD v8[22]; // [sp+8h] [bp-58h] BYREF

  v4 = a1 + 20;
  sub_60913D88(a1 + 20, 0x10000, a3, 256, 2);
  sub_60913A6C(v8, v4, 0);
  v5 = v8[0];
  v6 = v8[1];
  dword_60CC7444(v8, FIELD_U32(dword_60CCFC8C, 28));
  dword_60CC7448(v8);
  dword_60CC744C(v8, v5, v6, FIELD_U32(a1, 28));
  dword_60CC745C(a1 + 48, v8);
  result = dword_60CC746C(a1 + 48);
  FIELD_U64(a1, 96) = result;
  return result;
}
