/* sub_60172A00
 * address: 0x60172A00   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60172A00(int *a1)
{
  int v2; // r0
  int (__fastcall *v3)(int *, double *); // r5
  int v4; // s2
  double v6; // [sp+4h] [bp-1Ch] BYREF
  int v7; // [sp+Ch] [bp-14h]

  v2 = *a1;
  v3 = *(int (__fastcall **)(int *, double *))(v2 + 72);
  v6 = ((double (__fastcall *)(int *))FIELD_U32(v2, 60))(a1);
  v7 = v4;
  return v3(a1, &v6);
}
