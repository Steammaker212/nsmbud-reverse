/* DemoScene_create
 * address: 0x60024754   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall DemoScene_create(int a1)
{
  int v2; // r0

  v2 = operator_new_8DE25C(0x1A62D8u, *(void **)(*(_DWORD *)a1 + 4 * *(_DWORD *)(*(_DWORD *)a1 + 20)), 4);
  return DemoScene_ctor(v2, a1);
}
