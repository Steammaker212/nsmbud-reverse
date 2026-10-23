/* sub_60210394
 * address: 0x60210394   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60210394(_BYTE *a1)
{
  int result; // r0

  a1[216] &= ~2u;
  result = sub_60185EA8((int)a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 292))(a1);
  return result;
}
