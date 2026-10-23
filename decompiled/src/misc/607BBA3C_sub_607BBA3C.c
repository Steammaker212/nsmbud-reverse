/* sub_607BBA3C
 * address: 0x607BBA3C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BBA3C(int a1)
{
  int v1; // lr
  int v2; // r1

  v1 = FIELD_U32(a1, 6900);
  v2 = 0;
  if ( (v1 & 0x40000) != 0 )
  {
    FIELD_U32(a1, 6912) |= 0x40000u;
    FIELD_U32(a1, 6900) = v1 | 1;
    Player_changeState(a1, (StateBase *)&dword_60CC4D24, 0);
    return 1;
  }
  return v2;
}
