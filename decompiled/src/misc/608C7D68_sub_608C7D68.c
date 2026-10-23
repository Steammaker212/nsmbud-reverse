/* sub_608C7D68
 * address: 0x608C7D68   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C7D68(int result, int a2)
{
  int v2; // r4
  void (__fastcall *v3)(int, int, _DWORD); // r3

  v2 = result;
  v3 = *(void (__fastcall **)(int, int, _DWORD))(result + 356);
  if ( v3 )
  {
    v3(result, a2, FIELD_U32(result, 360));
    FIELD_U32(v2, 356) = 0;
    FIELD_U32(v2, 360) = 0;
    return 0;
  }
  return result;
}
