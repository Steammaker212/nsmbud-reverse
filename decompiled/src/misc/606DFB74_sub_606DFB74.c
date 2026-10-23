/* sub_606DFB74
 * address: 0x606DFB74   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DFB74(int result)
{
  _BYTE *v1; // r4
  int v2; // t1

  v1 = (_BYTE *)(result + 6992);
  if ( !FIELD_U8(result, 6992) )
  {
    v2 = FIELD_U32(result, 6988);
    result += 6988;
    *(_DWORD *)result = v2 + 1;
    if ( v2 >= 49 )
    {
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 3, 0, 0);
      *v1 = 1;
      return 1;
    }
  }
  return result;
}
