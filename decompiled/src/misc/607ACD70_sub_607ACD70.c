/* sub_607ACD70
 * address: 0x607ACD70   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_607ACD70(_DWORD *a1)
{
  unsigned int v1; // r1
  int v2; // r2
  int v3; // r4

  v1 = a1[302] & 0x9FFFFFFF;
  a1[306] &= 0xFFFFB02B;
  a1[302] = v1;
  a1[309] &= ~0x100u;
  v2 = a1[303];
  a1[301] &= ~0x1000u;
  a1[303] = v2 & 0xFFFFFDFE;
  a1[39] = 0;
  v3 = (int)(a1 + 3506);
  if ( sub_60235E50((int)(a1 + 3506)) == 1 )
    sub_60236074(v3);
  sub_60782550();
  byte_60CC2C50 = 0;
  return &byte_60CC2C50;
}
