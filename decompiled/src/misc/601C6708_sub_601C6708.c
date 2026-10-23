/* sub_601C6708
 * address: 0x601C6708   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C6708(int a1, int a2)
{
  int v3; // r1
  int result; // r0
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r1

  v3 = sub_601CFE3C(dword_60C8AEF0);
  result = 5;
  if ( v3 <= 1 )
  {
    v5 = sub_601DFFE4(a2);
    v6 = sub_6040D864(v5 + 4);
    v7 = sub_6019A120(v6) - 1;
    result = 4;
    if ( v7 <= 4 )
      return dword_60AFC290[v7];
  }
  return result;
}
