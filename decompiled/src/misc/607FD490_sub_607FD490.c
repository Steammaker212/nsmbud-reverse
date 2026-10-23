/* sub_607FD490
 * address: 0x607FD490   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FD490(float *a1, int *a2, float *a3, int a4)
{
  float v4; // r12
  bool v5; // zf
  bool v6; // zf
  int result; // r0

  v4 = *a1;
  if ( *(_DWORD *)a1 )
  {
    if ( LODWORD(v4) == 2 )
    {
      v5 = a4 == 0;
      a3[3] = a1[3] + a1[6];
      if ( a4 )
        v5 = *((_BYTE *)a1 + 40) == 0;
      if ( !v5 )
        FIELD_F32(a4, 12) = a1[3] + a1[6];
    }
    else if ( LODWORD(v4) == 1 )
    {
      *a3 = a1[1] + a1[5];
    }
    else
    {
      v6 = a4 == 0;
      a3[1] = a1[4] + a1[6];
      if ( a4 )
        v6 = *((_BYTE *)a1 + 40) == 0;
      if ( !v6 )
        FIELD_F32(a4, 4) = a1[4] + a1[6];
    }
  }
  else
  {
    a3[2] = a1[2] + a1[5];
  }
  result = *a2 | (1 << *(_DWORD *)a1);
  *a2 = result;
  return result;
}
