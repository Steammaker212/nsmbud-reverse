/* sub_60850240
 * address: 0x60850240   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60850240(char *a1, int a2, const char **a3)
{
  const char *v3; // r2
  unsigned int v5; // [sp+0h] [bp-10h] BYREF
  int v6; // [sp+4h] [bp-Ch] BYREF

  nn__util__PickOutCharacterFromUtf8String((nn__util *)&v5, a1, a3);
  v6 = 0;
  nn__util__ConvertCharacterUtf8ToUtf32((nn__util *)&v6, &v5, v3);
  return v6;
}
