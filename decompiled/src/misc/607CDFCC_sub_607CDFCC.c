/* sub_607CDFCC
 * address: 0x607CDFCC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CDFCC(int a1)
{
  int result; // r0

  result = sub_607D6C28(a1);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 220))(result);
  return result;
}
