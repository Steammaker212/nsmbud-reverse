/* sub_605F4A94
 * address: 0x605F4A94   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F4A94(unsigned __int8 *a1)
{
  if ( a1[6164] == 255 )
    return 0;
  SE_OBJ_GET_DRAGON_COIN_ref((int)a1);
  (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 196))(a1);
  return 1;
}
