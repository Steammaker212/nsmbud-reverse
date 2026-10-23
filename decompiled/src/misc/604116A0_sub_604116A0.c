/* sub_604116A0
 * address: 0x604116A0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604116A0(int *a1, int *a2, int *a3)
{
  int v3; // r12
  int v4; // lr
  int v5; // r3
  int v6; // r12
  int v7; // r3
  int v8; // r1
  int v9; // r0
  _DWORD v11[10]; // [sp+0h] [bp-28h] BYREF

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v11[3] = a2[3];
  v11[2] = v5;
  v11[0] = v3;
  v11[1] = v4;
  v6 = *a3;
  v7 = a3[1];
  v8 = a3[2];
  v11[7] = a3[3];
  v11[6] = v8;
  v11[5] = v7;
  v11[4] = v6;
  v9 = *a1;
  if ( v9 )
    return sub_60874F3C(v9, v11);
  else
    return 0;
}
