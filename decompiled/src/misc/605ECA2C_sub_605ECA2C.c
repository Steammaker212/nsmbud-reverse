/* sub_605ECA2C
 * address: 0x605ECA2C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605ECA2C(float *a1)
{
  int *v2; // r5
  float v3; // s0
  int result; // r0

  v2 = (int *)(a1 + 1649);
  v3 = a1[1649] + 0.05;
  a1[1649] = v3;
  if ( v3 >= 1.0 )
  {
    *v2 = 1065353216;
    (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 200))(a1);
    (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 196))(a1);
    result = *v2;
  }
  else
  {
    result = LODWORD(v3);
  }
  *((_DWORD *)a1 + 36) = result;
  *((_DWORD *)a1 + 37) = result;
  *((_DWORD *)a1 + 38) = result;
  return result;
}
