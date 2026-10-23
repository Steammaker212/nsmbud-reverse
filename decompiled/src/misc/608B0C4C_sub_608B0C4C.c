/* sub_608B0C4C
 * address: 0x608B0C4C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0C4C(int a1, _DWORD *a2, unsigned int a3)
{
  int result; // r0
  unsigned int *v5; // lr
  bool v6; // cc
  _DWORD *v7; // r2
  int v8; // r0
  int v9; // r2
  bool v10; // zf

  result = 0;
  v5 = *(unsigned int **)a1;
  v6 = *(_DWORD *)a1 != 0;
  if ( *(_DWORD *)a1 )
    v6 = *v5 > a3;
  if ( v6 )
  {
    v7 = (unsigned int *)((char *)v5 + v5[2 * a3 + 2]);
    if ( v7 )
    {
      *a2 = *v7;
      v8 = v7[2];
      v9 = FIELD_U32(a1, 4) + v8;
      v10 = v8 == -1;
      result = 1;
      if ( v10 )
        v9 = 0;
      a2[1] = v9;
    }
  }
  return result;
}
