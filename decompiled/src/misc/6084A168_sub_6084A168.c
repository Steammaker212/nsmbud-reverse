/* sub_6084A168
 * address: 0x6084A168   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084A168(_DWORD *a1, int a2)
{
  int v4; // r0
  char v5; // r10
  int v6; // r7
  int v7; // r6
  int v8; // r9
  int v9; // r0
  int v10; // r1
  int result; // r0
  int v12; // [sp+0h] [bp-30h] BYREF
  int v13; // [sp+4h] [bp-2Ch]
  int v14; // [sp+8h] [bp-28h]
  int v15; // [sp+Ch] [bp-24h]

  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  sub_6083D5B0(&v12);
  v13 = 16;
  v4 = sub_608352A0(a1, (int)&v12);
  v5 = FIELD_U8(a2, 13);
  v6 = FIELD_U32(a2, 8);
  v7 = 64;
  v8 = (v4 + 127) & -v4;
  if ( FIELD_U8(a2, 14) )
    v7 = 96;
  v9 = sub_608352A0(a1, (int)&v12);
  v10 = (v9 + v7 * v6 - 1) & -v9;
  result = v10 + (v8 << v5);
  if ( FIELD_U8(a2, 12) )
    result += v10;
  return result;
}
