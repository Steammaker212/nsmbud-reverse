/* sub_60474EEC
 * address: 0x60474EEC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60474EEC(_DWORD *a1)
{
  int result; // r0
  int v3; // r0

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
  if ( result )
  {
    v3 = (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1);
    return sub_6098D238(v3, a1[4]);
  }
  return result;
}
