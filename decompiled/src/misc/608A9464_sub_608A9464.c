/* sub_608A9464
 * address: 0x608A9464   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9464(int a1, int a2, int a3)
{
  int v6; // r0

  v6 = FIELD_U32(a1, 28);
  if ( v6 )
    return (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v6 + 12))(v6, a1, a2, a3);
  else
    return 0;
}
