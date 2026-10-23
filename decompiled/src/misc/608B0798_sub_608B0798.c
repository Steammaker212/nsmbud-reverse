/* sub_608B0798
 * address: 0x608B0798   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608B0798(char *a1)
{
  char *v2; // r5
  char *v3; // r0
  char *v4; // r6

  v2 = a1 + 4;
  *(_DWORD *)a1 = &off_60C5AF70;
  v3 = *((char **)a1 + 2);
  if ( v3 != v2 )
  {
    do
    {
      v4 = *((char **)v3 + 1);
      sub_608B030C((int)(v3 - 420));
      v3 = v4;
    }
    while ( v4 != v2 );
  }
  operator_delete(a1);
}
