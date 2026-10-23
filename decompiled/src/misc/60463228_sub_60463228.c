/* sub_60463228
 * address: 0x60463228   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60463228(int a1, unsigned int a2)
{
  int result; // r0

  if ( a2 >= 4 )
    a2 = 0;
  result = *(_DWORD *)(PlayerMgr_instance + 4 * a2 + 32);
  if ( result )
    return sub_607AA6F4();
  return result;
}
