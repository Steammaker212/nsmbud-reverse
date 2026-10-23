/* sub_6084C720
 * address: 0x6084C720   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084C720(int a1, _BYTE *a2, const char **a3)
{
  int v5; // [sp+0h] [bp-10h] BYREF
  char v6[4]; // [sp+4h] [bp-Ch] BYREF

  *(_DWORD *)v6 = a3;
  v5 = 0;
  nn__util__PickOutCharacterFromUtf8String((nn__util *)&v5, v6, a3);
  *a2 = 1;
  return *(_DWORD *)v6;
}
