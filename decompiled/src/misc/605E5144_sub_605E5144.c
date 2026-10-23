/* sub_605E5144
 * address: 0x605E5144   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E5144(int result)
{
  int v1; // r1
  bool v2; // zf

  v1 = FIELD_U32(result, 7776);
  v2 = v1 == -1;
  if ( v1 != -1 )
    v2 = FIELD_U32(result, 7780) == -1;
  if ( !v2 )
    return sub_605E540C(result);
  return result;
}
