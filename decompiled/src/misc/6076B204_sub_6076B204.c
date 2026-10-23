/* sub_6076B204
 * address: 0x6076B204   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076B204(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 648);
  if ( a2 == 1 )
    return (*(int (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(v2 + 4) + 84))(
             FIELD_U32(v2, 4),
             0,
             0.0,
             5.0,
             85.0);
  else
    return PlayerBase_dispatchVirtual3(v2, 0);
}
