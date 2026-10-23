/* sead__BufferedSafeStringBase__formatV
 * address: 0x608FDDCC   size: 40   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sead__BufferedSafeStringBase__formatV(void *this, const char *fmt, va_list arg)
{
  unsigned int v3; // r4
  signed int result; // r0

  v3 = *((_DWORD *)this + 2);
  result = sead__StringUtil__vsnprintf(*((char **)this + 1), v3, fmt, arg);
  if ( result < 0 )
    return v3 - 1;
  return result;
}
