/* sub_60909F60
 * address: 0x60909F60   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60909F60(_DWORD *a1)
{
  int v2; // r6

  *a1 = off_60C5CFE0;
  a1[77] = off_60C5D004;
  v2 = a1[81];
  if ( v2 )
  {
    sead__ListNode__erase((_DWORD *)((char *)a1 + FIELD_U32(v2, 344)));
    --FIELD_U32(v2, 340);
    a1[81] = 0;
  }
  sead__IDisposer__dtor(a1 + 77);
  operator_delete(a1);
}
