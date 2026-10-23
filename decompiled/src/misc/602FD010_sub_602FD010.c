/* sub_602FD010
 * address: 0x602FD010   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FD010(_DWORD *a1)
{
  int result; // r0

  a1[78] = 1090519040;
  a1[79] = 1090519040;
  a1[123] = 0;
  a1[124] = 1098907648;
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 712))(a1);
  a1[3480] = result;
  return result;
}
