/* sub_6060D208
 * address: 0x6060D208   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060D208(_DWORD *a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r2

  v1 = a1[5];
  a1[161] = v1 & 0xF;
  a1[162] = (v1 >> 12) & 1;
  a1[163] = HIWORD(v1) & 1;
  a1[164] = (v1 >> 20) & 1;
  v2 = a1[6];
  a1[165] = v2 & 0xF;
  a1[166] = (v2 >> 8) & 0xF;
  a1[167] = 60 * (unsigned __int8)(v1 >> 4) + 60;
  a1[168] = 0;
  a1[123] = 0;
  a1[124] = 0;
  a1[125] = 1115684864;
  a1[126] = 1115684864;
  return 1;
}
