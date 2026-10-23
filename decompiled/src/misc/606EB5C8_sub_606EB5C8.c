/* sub_606EB5C8
 * address: 0x606EB5C8   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EB5C8(int a1, char a2)
{
  bool v2; // zf
  unsigned int v3; // r1

  FIELD_U8(a1, 148) = a2;
  v2 = a2 == 0;
  v3 = a2 != 0;
  if ( v2 )
    v3 = 0;
  return sub_604AEE94(dword_60C9CF0C + 1444, v3);
}
