/* sub_60879E44
 * address: 0x60879E44   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60879E44(int a1, __int16 *a2, int a3, unsigned int a4)
{
  int v4; // r12
  int v5; // r12
  __int16 v6; // r1

  v4 = 0;
  if ( *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 1) <= a4 )
  {
    v5 = 0;
    FIELD_U32(a1, 12) = a3;
    if ( a3 && *((_DWORD *)a2 + 3) )
      v5 = a3 + *((_DWORD *)a2 + 6);
    *(_DWORD *)a1 = v5;
    v4 = 1;
    v6 = *a2;
    FIELD_U16(a1, 4) = v6;
    FIELD_U16(a1, 6) = v6;
  }
  return v4;
}
