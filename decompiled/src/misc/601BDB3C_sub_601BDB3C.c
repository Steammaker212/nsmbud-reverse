/* sub_601BDB3C
 * address: 0x601BDB3C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BDB3C(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // s2
  int v5; // s2
  bool v6; // zf
  int v7; // r0
  int result; // r0
  double v9; // [sp+4h] [bp-1Ch] BYREF
  int v10; // [sp+Ch] [bp-14h]

  v2 = sub_601CF9C0(dword_60C8AEF0);
  v3 = sub_601C5EEC(a1);
  v9 = sub_601BE520(a1, v3);
  v10 = v4;
  *(__n64 *)(a1 + 948) = sub_601BA56C(a1, (float *)&v9, FIELD_U32(v2, 180));
  FIELD_U32(a1, 956) = v5;
  v6 = sub_601C5EEC(a1) == 1;
  v7 = 0;
  if ( v6 )
    v7 = *((__int16 *)sub_601B6A5C() + 70);
  FIELD_U32(a1, 288) = v7;
  FIELD_U8(a1, 280) = 1;
  result = sub_601B69E0(a1);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 200) = 0;
  return result;
}
