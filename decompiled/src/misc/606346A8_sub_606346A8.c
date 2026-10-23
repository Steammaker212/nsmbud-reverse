/* sub_606346A8
 * address: 0x606346A8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606346A8(int a1)
{
  void *v1; // r1
  int v3; // r1

  if ( FIELD_U8(a1, 6797) )
  {
    v1 = **(void ***)(a1 + 6108);
  }
  else
  {
    v3 = FIELD_U32(a1, 6792);
    if ( v3 == 3 )
    {
      v1 = **(void ***)(a1 + 6112);
    }
    else
    {
      if ( v3 != 1 )
        return 1;
      v1 = **(void ***)(a1 + 6104);
    }
  }
  DrawMgr_drawModel(DrawMgr_instance, v1);
  return 1;
}
