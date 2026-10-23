/* sub_6022A570
 * address: 0x6022A570   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022A570(int *a1)
{
  int v2; // r0
  void (__fastcall *v3)(int *); // r5

  v2 = *a1;
  v3 = *(void (__fastcall **)(int *))(v2 + 12);
  (*(void (__fastcall **)(int *))(v2 + 20))(a1);
  v3(a1);
  (*(void (__fastcall **)(int *, float))(*a1 + 24))(a1, 0.0);
  return (*(int (__fastcall **)(int *))(*a1 + 8))(a1);
}
