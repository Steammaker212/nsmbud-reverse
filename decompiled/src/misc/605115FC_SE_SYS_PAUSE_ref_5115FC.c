/* SE_SYS_PAUSE_ref_5115FC
 * address: 0x605115FC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PAUSE_ref_5115FC(int a1)
{
  if ( *(_DWORD *)(sub_60834614(a1) + 492) == 3 )
    return sub_60478680((int)"SE_SYS_PAUSE", 5);
  else
    return sub_60478680((int)"SE_SYS_PAUSE", 9);
}
