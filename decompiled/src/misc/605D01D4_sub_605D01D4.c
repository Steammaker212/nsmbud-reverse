/* sub_605D01D4
 * address: 0x605D01D4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D01D4(int a1)
{
  char v2; // r1
  int result; // r0

  v2 = FIELD_U8(a1, 6260);
  result = 0;
  if ( (v2 & 1) != 0 )
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
