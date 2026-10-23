/* sub_60856B5C
 * address: 0x60856B5C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60856B5C(int result, _DWORD *a2)
{
  int *v3; // r2
  int v4; // r3

  if ( a2 == (_DWORD *)result )
  {
    if ( !a2 )
      return result;
  }
  else
  {
    v3 = (int *)a2[2];
    v4 = *v3;
    *(_DWORD *)(a2[1] + 4) = v3;
    *v3 = a2[1];
    FIELD_U32(v4, 4) = a2 + 1;
    a2[1] = v4;
  }
  (*(void (__fastcall **)(_DWORD *))(*a2 + 4))(a2);
  return dword_60CC7F8C(a2, dword_60CC7F90);
}
