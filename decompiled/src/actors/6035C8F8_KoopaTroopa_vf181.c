/* KoopaTroopa_vf181
 * address: 0x6035C8F8   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall KoopaTroopa_vf181(_DWORD *a1)
{
  int v1; // r3
  int v2; // r1
  int *v3; // r0
  int v4; // r2
  int v5; // r2
  signed int v7; // [sp+0h] [bp-10h] BYREF
  int v8; // [sp+4h] [bp-Ch] BYREF

  v1 = a1[20];
  v2 = a1[1869];
  v3 = a1 + 40;
  v4 = dword_60AF20E0[v2];
  if ( v1 )
    v4 = -v4;
  v8 = v4;
  v5 = 0x8000000;
  if ( v2 == 1 )
    v5 = 35791394;
  v7 = byte_60AFE3F4[v1] * v5;
  return sub_6083246C(v3, &v8, &v7);
}
