/* sub_608D2444
 * address: 0x608D2444   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2444(int a1, int a2, char a3)
{
  int v6; // r7
  int v7; // r0

  v6 = a1 + 104;
  nn__os__LockMutex(a1 + 104);
  v7 = FIELD_U32(a1, 56) + 20 * a2;
  FIELD_U8(v7, 18) = 1;
  FIELD_U8(v7, 16) = a3;
  return nn__os__UnlockMutex(v6);
}
