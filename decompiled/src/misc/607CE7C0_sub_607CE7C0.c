/* sub_607CE7C0
 * address: 0x607CE7C0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CE7C0(int a1)
{
  int v2; // r0

  v2 = sub_607D6C28(a1);
  if ( v2 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 636))(v2);
  else
    return sub_607666D8(a1);
}
