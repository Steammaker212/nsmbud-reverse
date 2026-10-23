/* sub_60565C5C
 * address: 0x60565C5C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60565C5C(int a1)
{
  int result; // r0
  __int16 v3; // r1
  int v4; // t1

  v4 = FIELD_U16(a1, 7396);
  result = a1 + 7396;
  v3 = v4;
  if ( v4 )
  {
    *(_WORD *)result = v3 - 1;
  }
  else
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
