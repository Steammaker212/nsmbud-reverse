/* sub_6010005C
 * address: 0x6010005C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010005C(int result, unsigned int a2)
{
  unsigned int v2; // r4

  if ( a2 <= 3 )
  {
    v2 = result + 4 * a2;
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 892))(result);
    FIELD_U32(v2, 9460) = result;
  }
  return result;
}
