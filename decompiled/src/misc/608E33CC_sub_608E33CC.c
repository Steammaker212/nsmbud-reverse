/* sub_608E33CC
 * address: 0x608E33CC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E33CC(int a1, int a2, const char **a3)
{
  int v5; // r6
  const char *v6; // r6

  v5 = a1 + 84;
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 84) + 12))(a1 + 84);
  v6 = *(const char **)(v5 + 4);
  (*((void (__fastcall **)(const char **))*a3 + 3))(a3);
  sub_608FDDF4(a2, "%s:/%s", v6, a3[1]);
  sub_608E9F1C(a2, 47);
  return 1;
}
