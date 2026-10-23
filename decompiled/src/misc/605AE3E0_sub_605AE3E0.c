/* sub_605AE3E0
 * address: 0x605AE3E0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AE3E0(StageActor *a1)
{
  signed int v1; // r1
  int result; // r0

  v1 = CollisionActor__beforeExecute(a1);
  result = 0;
  if ( v1 == 1 )
    return sub_607781EC(dword_60CBFA90) ^ 1;
  return result;
}
