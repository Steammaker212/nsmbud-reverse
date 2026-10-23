/* SE_VOC_MOR_FURIKABURI_ref
 * address: 0x600EF53C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_MOR_FURIKABURI_ref(int result)
{
  if ( FIELD_S32(result, 7180) >= 2 )
    return sub_608134CC(result + 6332, "SE_VOC_MOR_FURIKABURI", FIELD_S16(result, 6640), 0);
  return result;
}
