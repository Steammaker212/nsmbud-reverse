/* sead__StringUtil__vsnprintf
 * address: 0x609014B8   size: 104   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sead__StringUtil__vsnprintf(char *s, unsigned int n, const char *format, va_list arg)
{
  unsigned int v6; // r0
  signed int v7; // r1

  if ( !n )
    return -1;
  v6 = nn__util__VSNPrintf(s, n, format, arg);
  if ( (v6 & 0x80000000) != 0 || v6 >= n )
  {
    v7 = n - 1;
    s[n - 1] = 0;
  }
  else
  {
    v7 = n - 1;
  }
  if ( v6 < n )
    return v6;
  return v7;
}
