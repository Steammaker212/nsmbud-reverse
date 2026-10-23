/* sub_607998FC
 * address: 0x607998FC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607998FC(int a1)
{
  int v1; // r4
  int v2; // r0
  Actor *v3; // r0

  v1 = 0;
  if ( (FIELD_U32(a1, 3552) & 0x10400) == 0x400 )
  {
    v2 = sub_6014B6F8(a1 + 1328);
    if ( v2 )
    {
      v3 = *(Actor **)(v2 + 144);
      if ( v3 )
        return Actor__getProfileId(v3) != 309;
      return 1;
    }
  }
  return v1;
}
