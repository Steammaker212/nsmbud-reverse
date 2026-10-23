/* sub_607CC448
 * address: 0x607CC448   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CC448(int a1)
{
  int v1; // r0

  v1 = sub_607D6C28(a1);
  if ( v1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 236))(v1);
  else
    return 0;
}
