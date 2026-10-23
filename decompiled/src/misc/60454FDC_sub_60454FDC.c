/* sub_60454FDC
 * address: 0x60454FDC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60454FDC(int a1)
{
  unsigned __int8 *v1; // r3

  v1 = (unsigned __int8 *)(dword_60C9CFB8 + 84);
  if ( FIELD_U32(a1, 1316) == 2 )
    v1 = (unsigned __int8 *)(a1 + 1436);
  return *v1;
}
