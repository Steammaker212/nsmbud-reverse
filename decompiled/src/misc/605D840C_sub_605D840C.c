/* sub_605D840C
 * address: 0x605D840C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605D840C(int a1, int a2)
{
  int v2; // r2
  int v3; // r3
  int *v4; // r0
  signed int v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+4h] [bp-Ch] BYREF

  v2 = FIELD_U32(a1, 80);
  v3 = 0x40000000;
  v4 = (int *)(a1 + 160);
  if ( v2 == 1 )
    v3 = -1073741824;
  v7 = v3;
  v6 = byte_60B0594C[v2] * a2;
  return sub_6083246C(v4, &v7, &v6);
}
