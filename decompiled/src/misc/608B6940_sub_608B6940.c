/* sub_608B6940
 * address: 0x608B6940   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6940(int a1, int a2)
{
  int v2; // r6
  char *v5; // r0
  int v6; // r0
  int v7; // r7
  int v8; // r2
  char *v9; // r0

  if ( FIELD_U8(a1, 1401) )
    return a1 + 148 * a2 + 788;
  v5 = (char *)sub_608065A0();
  nn__os__LockMutex(v5 + 1240);
  v6 = FIELD_U32(a1, 1236);
  v7 = 1;
  if ( v6 != a1 + 1232 )
  {
    v8 = a2 + 1;
    while ( --v8 )
    {
      v6 = FIELD_U32(v6, 4);
      if ( v6 == a1 + 1232 )
        goto LABEL_8;
    }
    v2 = v6 - 36;
    v7 = 0;
  }
LABEL_8:
  v9 = (char *)sub_608065A0();
  nn__os__UnlockMutex(v9 + 1240);
  if ( v7 == 1 )
    return a1 + 148 * a2 + 788;
  return v2;
}
