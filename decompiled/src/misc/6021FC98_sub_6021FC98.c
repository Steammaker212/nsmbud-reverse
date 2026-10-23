/* sub_6021FC98
 * address: 0x6021FC98   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_6021FC98()
{
  int *v0; // r0
  int v1; // r9
  int v2; // r7
  int v3; // r5
  int v4; // r6
  int v5; // r4
  int *v6; // r0
  int v7; // r11
  int v8; // r10
  int *v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  bool v15; // zf
  int v17; // [sp+4h] [bp-2Ch]
  int v18; // [sp+8h] [bp-28h]

  v0 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 6u, 0);
  v1 = *v0;
  v2 = v0[1];
  v3 = v0[2];
  v4 = v0[3];
  v5 = 1;
  v6 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 6u, 1u);
  v7 = *v6;
  v8 = v6[1];
  v18 = v6[2];
  v17 = v6[3];
  v9 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 6u, 2u);
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  if ( v1 == -1 )
    goto LABEL_10;
  v14 = v2 == -1;
  if ( v2 != -1 )
    v14 = v3 == -1;
  if ( v14 || v4 )
  {
LABEL_10:
    if ( v7 == -1 )
      return v10 != -1 && v11 != -1 && v12 != -1 && v13 == 0;
    v15 = v8 == -1;
    if ( v8 != -1 )
      v15 = v18 == -1;
    if ( v15 || v17 )
      return v10 != -1 && v11 != -1 && v12 != -1 && v13 == 0;
  }
  return v5;
}
