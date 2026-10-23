/* sub_6071B734
 * address: 0x6071B734   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071B734(int a1)
{
  if ( sub_6072A768(EventMgr__instance) && sub_60729CF0(EventMgr__instance, 0) )
  {
    switch ( a1 )
    {
      case 30:
        return 48;
      case 46:
        return 47;
      case 48:
        return 30;
    }
  }
  return a1;
}
