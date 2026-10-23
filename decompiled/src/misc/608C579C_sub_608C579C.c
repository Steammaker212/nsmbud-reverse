/* sub_608C579C
 * address: 0x608C579C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608C579C(int a1)
{
  if ( *(_DWORD *)a1 || FIELD_F32(a1, 16) != 0.0 )
    return FIELD_F32(a1, 4) / 10.0;
  else
    return 0.0;
}
