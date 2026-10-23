/* sub_608672C4
 * address: 0x608672C4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608672C4(_DWORD *a1, int a2)
{
  int result; // r0
  unsigned int v5; // r0
  int v6; // r12
  int v7; // lr
  int v8; // r3
  unsigned __int8 *v9; // r1
  int v10; // r1

  result = a1[11];
  if ( !result )
  {
    v5 = a1[3];
    if ( (v5 & 0xC00) != 0 )
    {
      v6 = (v5 >> 6) & 8;
      v7 = (8 * v5) & 0x18;
      v8 = a1[5];
      v9 = (unsigned __int8 *)(v8 + v7 + (a1[3] & 0x30) + v6 + 20 * ((a1[3] >> 2) & 3));
      if ( (a1[3] & 0xC00) == 0x800 )
        v9 = (unsigned __int8 *)(v8 + (a1[3] & 0x30 | 4) + v7 + v6 + 20 * ((v5 >> 2) & 3));
      v10 = sub_60854EFC((unsigned __int8 *)(v8 + v7 + (a1[3] & 0x30) + v6 + 20 * ((a1[3] >> 2) & 3)), v9);
    }
    else
    {
      v10 = 0;
    }
    result = sub_60854EEC(FIELD_U32(a2, 184), v10);
    a1[11] = result;
  }
  return result;
}
