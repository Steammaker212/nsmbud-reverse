/* sub_60142E24
 * address: 0x60142E24   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60142E24(int a1)
{
  _DWORD *v2; // r0

  v2 = *(_DWORD **)(a1 + 32);
  if ( v2[1] == -1 )
    return FIELD_U32(a1, 4);
  else
    return (*(int (__fastcall **)(_DWORD *))(*v2 + 8))(v2);
}
