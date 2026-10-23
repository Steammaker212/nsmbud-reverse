/* sub_60439C6C
 * address: 0x60439C6C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60439C6C(_DWORD *a1)
{
  *a1 = off_60BFA9A8;
  a1[4] = &off_60BFA9B8;
  if ( a1[5] )
    sub_60439CF4(a1);
  nullsub_68(a1 + 58);
  sead__CriticalSection__dtor(a1 + 46);
  a1[36] = off_60BF9C2C;
  sub_60913C18(a1 + 36);
  a1[29] = off_60BF9C2C;
  sub_60913C18(a1 + 29);
  nullsub_1364();
  nullsub_1364();
  return sead__IDisposer__dtor(a1);
}
