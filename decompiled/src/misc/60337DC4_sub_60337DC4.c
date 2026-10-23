/* sub_60337DC4
 * address: 0x60337DC4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60337DC4(_DWORD *a1)
{
  int v2; // r1

  if ( sub_6033AA2C() )
    v2 = 2;
  else
    v2 = 1;
  sub_6033A26C((int)a1, v2);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 644))(a1);
  a1[25] = -1103101952;
  a1[33] = 0;
  a1[34] = -1065353216;
  a1[35] = 0;
  return 0;
}
