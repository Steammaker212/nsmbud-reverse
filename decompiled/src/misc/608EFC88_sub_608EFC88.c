/* sub_608EFC88
 * address: 0x608EFC88   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EFC88(int a1)
{
  int v2; // r0

  v2 = operator_new_8DE25C(0x188u, *(void **)(a1 + 16), 4);
  return sead_TaskMgr_ref(v2, (_DWORD *)a1);
}
