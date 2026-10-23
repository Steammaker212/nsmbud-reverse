/* sub_60922730
 * address: 0x60922730   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60922730(_DWORD *a1, int a2, int a3)
{
  int v3; // r12
  int v4; // r3
  int v5; // r0
  int v7[5]; // [sp+4h] [bp-14h] BYREF

  v3 = a1[63];
  v4 = a1[62];
  v5 = a1[64];
  v7[0] = v4;
  v7[1] = v3 + a2;
  v7[2] = v5;
  return sub_60913B04(v7, a3);
}
