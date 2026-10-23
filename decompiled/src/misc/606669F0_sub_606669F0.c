/* sub_606669F0
 * address: 0x606669F0   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606669F0(int a1)
{
  int v1; // r0

  if ( FIELD_U8(a1, 6824) || FIELD_U32(a1, 80) > 1u || (StageActor__cullCheck((StageActor *)a1, 0), !v1) )
    JUMPOUT(0x6000100C);
  return 1;
}
