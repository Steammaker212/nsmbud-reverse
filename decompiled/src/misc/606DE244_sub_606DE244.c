/* sub_606DE244
 * address: 0x606DE244   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DE244(float *a1)
{
  int v2; // r1
  int v3; // r2
  float v4; // s0
  unsigned int v5; // r1
  unsigned int v6; // r2
  unsigned int v8[4]; // [sp+0h] [bp-28h] BYREF
  float v9[6]; // [sp+10h] [bp-18h] BYREF

  v2 = *((_DWORD *)a1 + 28);
  v3 = *((_DWORD *)a1 + 29);
  v9[0] = a1[27];
  LODWORD(v9[1]) = v2;
  LODWORD(v9[2]) = v3;
  v4 = (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 248))(a1);
  v9[0] = v9[0] + (float)(v4 * -226.0);
  v5 = *((_DWORD *)a1 + 40);
  v6 = *((_DWORD *)a1 + 41);
  v8[0] = (unsigned int)a1[39];
  v8[1] = v5;
  v8[2] = v6;
  return sub_605AE4E4(a1, (int *)v9, v8);
}
