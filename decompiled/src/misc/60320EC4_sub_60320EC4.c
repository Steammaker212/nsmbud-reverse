/* sub_60320EC4
 * address: 0x60320EC4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60320EC4(int a1, int a2)
{
  int v2; // r4

  v2 = FIELD_U32(a2, 64);
  if ( v2 && !sub_602A588C(FIELD_U32(a2, 64)) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 644))(v2);
  else
    return 0;
}
