/* sub_60888E38
 * address: 0x60888E38   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60888E38(int a1)
{
  int result; // r0

  result = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)a1 + 136) + 1874);
  if ( !result )
    return sub_6088A3A8(dword_60CC801C);
  return result;
}
