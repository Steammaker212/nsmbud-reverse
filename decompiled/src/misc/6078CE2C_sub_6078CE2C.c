/* sub_6078CE2C
 * address: 0x6078CE2C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078CE2C(int *a1, int a2, float a3)
{
  int result; // r0
  float v5; // r0

  result = a1[132];
  if ( result != a2 || *((float *)a1 + 133) != a3 )
  {
    a1[132] = a2;
    *((float *)a1 + 133) = a3;
    v5 = *(float *)a1;
    if ( a2 )
    {
      (*(void (__fastcall **)(int *))(LODWORD(v5) + 256))(a1);
      return (*(int (__fastcall **)(int *, float))(*a1 + 252))(a1, 0.0);
    }
    else
    {
      (*(void (__fastcall **)(int *))(LODWORD(v5) + 252))(a1);
      return (*(int (__fastcall **)(int *, float))(*a1 + 256))(a1, 0.0);
    }
  }
  return result;
}
