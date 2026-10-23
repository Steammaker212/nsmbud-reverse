/* sub_608559D0
 * address: 0x608559D0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608559D0(char *a1)
{
  char *v2; // r5
  char *v3; // r0
  char *v4; // r6
  int v5; // r1

  v2 = a1 + 12;
  *(_DWORD *)a1 = &off_60C5A1F0;
  v3 = *((char **)a1 + 4);
  if ( v3 != v2 )
  {
    do
    {
      v4 = *((char **)v3 + 1);
      if ( v3 != v2 )
      {
        v5 = *(_DWORD *)v4;
        *(_DWORD *)(*(_DWORD *)v3 + 4) = v4;
        *(_DWORD *)v4 = *(_DWORD *)v3;
        FIELD_U32(v5, 4) = v3;
        *(_DWORD *)v3 = v5;
      }
      sub_60855BF0(v3);
      v3 = v4;
    }
    while ( v4 != v2 );
  }
  operator_delete(a1);
}
