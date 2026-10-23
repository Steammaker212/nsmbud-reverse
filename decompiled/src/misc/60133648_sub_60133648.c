/* sub_60133648
 * address: 0x60133648   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60133648(int a1)
{
  int v2; // r5

  v2 = 0;
  if ( sub_6013483C() == 1 )
  {
    v2 = 1;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      CollisionMgr_vf18((_BYTE *)(a1 + 6600));
  }
  return v2;
}
