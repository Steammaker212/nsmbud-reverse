/* sub_6023351C
 * address: 0x6023351C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023351C(int a1)
{
  int *v1; // r0
  bool v2; // zf

  v1 = *(int **)(a1 + 420);
  v2 = v1 == 0;
  if ( v1 )
  {
    v1 = (int *)*v1;
    v2 = v1 == 0;
  }
  if ( v2 )
    return -1;
  else
    return (*(int (__fastcall **)(int *))(*v1 + 84))(v1);
}
