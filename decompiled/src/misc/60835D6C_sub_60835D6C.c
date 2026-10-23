/* sub_60835D6C
 * address: 0x60835D6C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835D6C(int a1, double *a2)
{
  float v4; // s0
  float v5; // s1
  int result; // r0
  int v7; // r1
  int v8; // r5
  int v9; // r6
  int v10; // r5

  v4 = a2[4];
  v5 = a2[5];
  dword_60CC78C0(FIELD_U32(a1, 184), v4, v5);
  dword_60CC78B0(FIELD_U32(a1, 184), 0, 1, a2 + 2);
  result = dword_60CC78BC(FIELD_U32(a1, 184), 0, 1, a2 + 6);
  v7 = *((_DWORD *)a2 + 2);
  if ( v7 >= 2 )
  {
    v8 = *(_DWORD *)a2;
    v9 = v7 - 1;
    dword_60CC78B0(FIELD_U32(a1, 184), 1, v7 - 1, v8);
    v10 = v8 + 16 * v9;
    dword_60CC78C8(FIELD_U32(a1, 184), 1, v9, v10);
    return dword_60CC78BC(FIELD_U32(a1, 184), 1, v9, v10 + 8 * v9);
  }
  return result;
}
