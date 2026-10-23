/* sub_60898168
 * address: 0x60898168   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60898168()
{
  int result; // r0

  result = dword_60CC8280;
  if ( dword_60CC8280 )
  {
    sub_6083D2EC((int)&unk_60CC81A0);
    sub_6083D48C((int)&unk_60CC8158);
    sub_60836614((int)dword_60CC8038);
    sub_6088208C(dword_60CC8280);
    dword_60CC8280 = 0;
    return 0;
  }
  return result;
}
