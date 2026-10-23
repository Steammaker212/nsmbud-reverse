/* sub_60509920
 * address: 0x60509920   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60509920(_DWORD *a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  int result; // r0

  v2 = a1[932];
  if ( a1[935] == 1 )
  {
    a1[932] = v2 + 3;
    v3 = a1[936];
    if ( v2 + 3 >= v3 )
    {
      v4 = v2 + 3 - v3;
LABEL_6:
      a1[932] = v4;
    }
  }
  else
  {
    a1[932] = v2 - 3;
    if ( v2 <= 2 )
    {
      v4 = a1[936] + v2 - 3;
      goto LABEL_6;
    }
  }
  result = LabelFree_CourseNum_00_ref(a1);
  a1[932] = v2;
  return result;
}
