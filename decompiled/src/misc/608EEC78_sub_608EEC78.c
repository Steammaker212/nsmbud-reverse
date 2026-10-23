/* sub_608EEC78
 * address: 0x608EEC78   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EEC78(int a1, unsigned int a2)
{
  if ( a2 <= 4 )
    return ((int (*)(void))((char *)dword_608EEC94 + dword_608EEC94[a2]))();
  else
    return 0;
}
