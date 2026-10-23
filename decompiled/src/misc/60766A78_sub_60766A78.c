/* sub_60766A78
 * address: 0x60766A78   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60766A78(_BYTE *a1)
{
  bool v1; // zf

  v1 = (a1[1230] & 0x80) == 0;
  if ( (a1[1230] & 0x80) == 0 )
    v1 = (a1[1239] & 0x40) == 0;
  if ( v1 )
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 988))(a1);
  else
    return 1;
}
