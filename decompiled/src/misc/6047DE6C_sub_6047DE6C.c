/* sub_6047DE6C
 * address: 0x6047DE6C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6047DE6C(int a1, int a2, _DWORD *a3, int a4, int a5, ...)
{
  int v6; // r5
  va_list va; // [sp+24h] [bp+4h] BYREF

  va_start(va, a5);
  v6 = sub_6047DF58(a1, a2, a4, -1, 0, a5, (char *)va, (char *)va);
  if ( sub_60474F28((int)a3) == 1 )
    sub_60474EEC(a3);
  return v6;
}
