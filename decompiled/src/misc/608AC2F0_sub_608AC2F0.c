/* sub_608AC2F0
 * address: 0x608AC2F0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC2F0(int a1)
{
  int v2; // r4
  _BYTE *v3; // r7
  int v4; // r0

  v2 = a1 + 4;
  nn__os__LockMutex(a1 + 4);
  if ( FIELD_U32(a1, 24) )
  {
    nn__os__LockMutex(v2);
    sub_608C5EAC(a1 + 24);
    nn__os__UnlockMutex(v2);
    v3 = sub_608C3B10();
    if ( *v3 )
    {
      v4 = sub_608C2C40(v3, 1);
      sub_608C2B80(v3, v4);
    }
    if ( FIELD_U8(a1, 40) )
    {
      sub_608AE228(a1 + 36);
      FIELD_U8(a1, 40) = 0;
    }
    sub_608C5C24(a1 + 24);
  }
  return nn__os__UnlockMutex(v2);
}
