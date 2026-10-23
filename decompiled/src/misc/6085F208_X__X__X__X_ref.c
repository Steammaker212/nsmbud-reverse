/* X__X__X__X_ref
 * address: 0x6085F208   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall X__X__X__X_ref(char *a1, int a2, int a3, int a4, _DWORD *a5)
{
  char s[61]; // [sp+Bh] [bp-3Dh] BYREF

  *a1 = a3 / 100 + 48;
  a1[1] = a3 % 100 / 10 + 48;
  a1[2] = a3 % 100 % 10 + 48;
  a1[3] = 95;
  a1[4] = a4 / 100 + 48;
  a1[5] = a4 % 100 / 10 + 48;
  a1[6] = a4 % 100 % 10 + 48;
  a1[7] = 0;
  sprintf(s, "_%X_%X_%X_%X", *a5, a5[1], a5[2], a5[3]);
  strcat(a1, s);
  sprintf(s, "_%X_%X_%X_%X", a5[4], a5[5], a5[6], a5[7]);
  strcat(a1, s);
  sprintf(s, "_%X_%X_%X_%X", a5[8], a5[9], a5[10], a5[11]);
  strcat(a1, s);
  sprintf(s, "_%X_%X_%X_%X", a5[12], a5[13], a5[14], a5[15]);
  strcat(a1, s);
  sprintf(s, "_%X_%X_%X_%X", a5[16], a5[17], a5[18], a5[19]);
  strcat(a1, s);
  sprintf(s, "_%X_%X_%X_%X", a5[20], a5[21], a5[22], a5[23]);
  return strcat(a1, s);
}
