/* sub_6098D8F8
 * address: 0x6098D8F8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098D8F8(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 848);
  if ( v2 )
    return (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v2 + 24))(v2, a2, 0);
  else
    return 0;
}
