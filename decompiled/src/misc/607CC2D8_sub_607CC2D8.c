/* sub_607CC2D8
 * address: 0x607CC2D8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CC2D8(int a1, float a2)
{
  int v4; // r0

  v4 = sub_607D6C28(a1);
  if ( v4 )
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v4 + 1084))(v4, a2);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1080))(a1);
}
