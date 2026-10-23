/* sub_6085C2E8
 * address: 0x6085C2E8   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085C2E8(int result, int a2)
{
  if ( a2 )
  {
    FIELD_U32(result, 4) = a2;
    *(_BYTE *)result = -112;
  }
  return result;
}
