/* sub_601A172C
 * address: 0x601A172C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A172C(int a1, unsigned int a2)
{
  _DWORD *v2; // r0
  int v3; // r2
  bool v4; // zf

  if ( a2 >= 9 )
    a2 = 0;
  v2 = (_DWORD *)(a1 + 16 * a2);
  if ( (int)v2[6] < 1 )
    return 0;
  v3 = v2[5];
  v4 = v3 == 0;
  if ( v3 )
    v4 = v3 == v2[7];
  if ( v4 )
    return 0;
  else
    return sub_60226D30();
}
