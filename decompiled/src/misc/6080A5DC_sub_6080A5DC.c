/* sub_6080A5DC
 * address: 0x6080A5DC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A5DC(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r6
  bool v7; // cc
  int result; // r0

  v4 = FIELD_U32(a1, 1048);
  v5 = v4 + 4;
  nn__os__LockMutex(v4 + 4);
  v6 = sub_608C64B8(v4 + 24);
  nn__os__UnlockMutex(v5);
  v7 = a2 < 1;
  result = 0;
  if ( a2 >= 1 )
    v7 = v6 < a2;
  if ( !v7 )
  {
    sub_608AC59C(FIELD_U32(a1, 1048), a2);
    return 1;
  }
  return result;
}
