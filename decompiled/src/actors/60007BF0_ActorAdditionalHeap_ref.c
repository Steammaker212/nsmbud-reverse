/* ActorAdditionalHeap_ref
 * address: 0x60007BF0   size: 100   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ActorAdditionalHeap_ref(int result, int *a2)
{
  _DWORD v3[4]; // [sp+8h] [bp-10h] BYREF

  if ( !*a2 )
  {
    v3[0] = &sead__SafeStringBase__vtable;
    v3[1] = "ActorAdditionalHeap";
    result = sub_608F882C(0, (int)v3, *(_DWORD **)(result + 20), 4, 1, 0);
    *a2 = result;
  }
  return result;
}
