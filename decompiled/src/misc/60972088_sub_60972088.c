/* sub_60972088
 * address: 0x60972088   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60972088(int a1, int a2, int a3)
{
  unsigned int v3; // r12
  unsigned int v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r2
  int v7; // r6
  int v8; // r2
  unsigned int v9; // r5
  unsigned int v10; // r6
  unsigned int v11; // r1
  int v12; // r2
  unsigned int v14; // lr
  int v15; // r6
  unsigned int v16; // r3
  unsigned int v17; // r4
  unsigned int v18; // r5
  unsigned int v19; // r5
  unsigned int v20; // r0
  unsigned int v21; // r1
  int v22; // r0
  int v23; // r1
  bool v24; // cc

  if ( a3 )
    a2 = 15 - a2;
  v3 = a2 + 17;
  if ( a1 > 31 )
  {
    v14 = a1 - 32;
    v8 = 0;
    v15 = 0;
    v16 = a1 - 32;
    if ( (unsigned int)(a1 - 32) >= 0x15 )
      v16 = a1 - 53;
    v17 = v16 - 7;
    if ( v16 < 7 )
      v17 = v16;
    v18 = v17 - 3;
    if ( v17 < 3 )
      v18 = v17;
    if ( v18 )
    {
      if ( v18 != 1 )
        return 127 * v8;
      v15 = 1;
    }
    v19 = a2 + 17;
    if ( v3 >= 0x15 )
      v19 = a2 - 4;
    v20 = v19 - 7;
    if ( v19 < 7 )
      v20 = v19;
    v21 = v20 - 3;
    if ( v20 < 3 )
      v21 = v20;
    v22 = 0;
    v23 = v21 | 1;
    if ( v23 != 1 )
      v23 = 0;
    if ( v3 > 0x14 )
      v22 = 1;
    v24 = v14 > 0x14;
    if ( v14 <= 0x14 )
      v24 = v17 > 2;
    if ( !v24 && (v22 & v23) == 1 )
    {
      v8 = 1;
      if ( v16 < 7 )
        v8 = 2;
      if ( v19 < 7 )
        v8 = 1;
      if ( v15 )
        v8 = 1;
    }
    return 127 * v8;
  }
  v4 = a1 - 21;
  if ( (unsigned int)a1 < 0x15 )
    v4 = a1;
  v5 = v4 - 7;
  if ( v4 < 7 )
    v5 = v4;
  v6 = v5 - 3;
  if ( v5 < 3 )
    v6 = v5;
  v7 = v6 | 1;
  v8 = 0;
  if ( v7 != 1 )
    return 127 * v8;
  v9 = a2 + 17;
  if ( v3 >= 0x15 )
    v9 = a2 - 4;
  v10 = v9 - 7;
  if ( v9 < 7 )
    v10 = v9;
  v11 = v10 - 3;
  if ( v10 < 3 )
    v11 = v10;
  if ( v3 < 0x15 || (v11 | 1) != 1 )
    return 127 * v8;
  v12 = 1;
  if ( (unsigned int)a1 < 0x15 )
    v12 = 2;
  if ( v9 < 7 )
    v12 = 1;
  if ( v5 >= 3 )
    v12 = 1;
  return 127 * v12;
}
