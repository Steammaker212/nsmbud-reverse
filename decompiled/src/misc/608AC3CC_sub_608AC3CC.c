/* sub_608AC3CC
 * address: 0x608AC3CC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC3CC(int a1, int a2, unsigned int a3)
{
  unsigned int v6; // r7
  unsigned int v7; // r0
  int v8; // r6
  unsigned int v9; // r4

  sub_608C6F90(a2, a3);
  nn__os__LockMutex(a1 + 4);
  v6 = (a2 + 4095) & 0xFFFFF000;
  v7 = v6 - a2;
  v8 = 0;
  if ( v7 <= a3 )
  {
    v9 = (a3 - v7) & 0xFFFFF000;
    if ( sub_608C5C60(a1 + 24, v6, v9) == 1 )
    {
      sub_608AE1F0(a1 + 36, v6, v9);
      v8 = 1;
      FIELD_U8(a1, 40) = 1;
    }
  }
  nn__os__UnlockMutex(a1 + 4);
  return v8;
}
