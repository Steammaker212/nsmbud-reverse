/* sub_608E8E8C
 * address: 0x608E8E8C   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E8E8C(int a1)
{
  _BYTE *v2; // r0

  v2 = *(_BYTE **)(a1 + 80);
  if ( v2[76] )
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v2 + 60))(v2);
  else
    return 0;
}
