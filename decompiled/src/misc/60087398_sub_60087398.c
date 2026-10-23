/* sub_60087398
 * address: 0x60087398   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60087398(_DWORD *a1)
{
  int v1; // r1

  *(_DWORD *)(a1[1776] + 24) = 0;
  v1 = a1[1776];
  FIELD_U32(v1, 20) = 0;
  FIELD_U32(v1, 28) |= 2u;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 76))(a1);
}
