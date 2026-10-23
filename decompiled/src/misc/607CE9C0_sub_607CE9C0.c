/* sub_607CE9C0
 * address: 0x607CE9C0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CE9C0(_BYTE *a1)
{
  int v2; // r4
  int v3; // r0

  v2 = 0;
  if ( sub_6076DD50(a1) == 1 )
  {
    v3 = sub_607D6C28(a1);
    v2 = 1;
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 680))(v3);
  }
  return v2;
}
