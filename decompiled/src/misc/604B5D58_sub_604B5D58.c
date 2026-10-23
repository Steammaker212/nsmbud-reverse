/* sub_604B5D58
 * address: 0x604B5D58   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B5D58(int a1)
{
  if ( FIELD_U32(a1, 3652) )
    sub_604B763C();
  if ( FIELD_U32(a1, 3724) == 4 )
    sub_604B8BAC(a1);
  FIELD_U8(a1, 3778) = 0;
  return 0;
}
