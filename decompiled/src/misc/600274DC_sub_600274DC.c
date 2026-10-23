/* sub_600274DC
 * address: 0x600274DC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600274DC()
{
  if ( FIELD_U32(dword_60C99DD4, 764) <= 1u )
    return sub_603FBC08(dword_60C99DD4);
  else
    return 1;
}
