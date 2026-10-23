/* sub_601BD068
 * address: 0x601BD068   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BD068(Actor *a1, int *a2, int a3)
{
  int result; // r0

  result = Actor__getProfileId(a1);
  if ( result == 856 )
    return sub_60793F04(*(_DWORD *)(*(&a1[11].childCount + (int)a1[18].field_20.previous) + 4), a2, a3);
  if ( result == 857 )
  {
    *a2 = a1[1].vtable;
    a2[1] = a1[1].heap;
    result = a1[1].id;
    a2[2] = result;
  }
  return result;
}
