/* sub_6068B7CC
 * address: 0x6068B7CC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068B7CC(_DWORD *a1)
{
  int v1; // r1
  int v2; // r3
  int v3; // r12
  int v4; // lr
  _DWORD *v5; // r1

  v1 = a1[7];
  v2 = a1[5];
  v3 = a1[2];
  v4 = a1[1];
  FIELD_U32(v1, 100) = a1[4];
  FIELD_U32(v1, 104) = v2;
  v5 = (_DWORD *)a1[7];
  v5[2] = v4;
  v5[3] = v3;
  v5[4] = 1065353216;
  sub_6068AD3C(a1[6]);
  return 1;
}
