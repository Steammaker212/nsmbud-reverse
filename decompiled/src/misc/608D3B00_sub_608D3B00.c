/* sub_608D3B00
 * address: 0x608D3B00   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3B00(int a1)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 32);
  if ( v2 )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v2 + 12))(v2, -1);
    FIELD_U32(a1, 32) = 0;
  }
  return nn__os__SignalEvent(a1 + 4);
}
