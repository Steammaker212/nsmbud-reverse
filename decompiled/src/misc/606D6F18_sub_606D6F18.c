/* sub_606D6F18
 * address: 0x606D6F18   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D6F18(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // [sp+4h] [bp-14h] BYREF
  int v7; // [sp+8h] [bp-10h]
  int v8; // [sp+Ch] [bp-Ch]

  PowBlock_vf23((int)a1, a2);
  sub_605CC78C((int)a1, (float *)&v6);
  result = v6;
  a1[27] = v6;
  v4 = v7;
  a1[28] = v7;
  v5 = v8;
  a1[29] = v8;
  a1[146] = result;
  a1[147] = v4;
  a1[148] = v5;
  a1[152] = result;
  a1[153] = v4;
  a1[154] = v5;
  return result;
}
