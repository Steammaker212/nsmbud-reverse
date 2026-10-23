/* sub_6091377C
 * address: 0x6091377C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6091377C(int a1, int a2, char a3)
{
  char v3; // r1
  int v4; // lr
  int v5; // r0
  int v6; // r2
  int v7; // r3
  unsigned int v8; // r1

  v3 = a3 & 0x3F;
  v4 = FIELD_U32(a1, 416);
  v5 = FIELD_U32(a1, 420);
  v6 = (a3 & 0x3F) - 32;
  v7 = 1 << v3;
  v8 = 1u >> (32 - v3);
  if ( v6 >= 0 )
  {
    v7 = 0;
    v8 = 1 << v6;
  }
  return (v4 & v7 | v5 & v8) != 0;
}
