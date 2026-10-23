/* sub_601AAE08
 * address: 0x601AAE08   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601AAE08(int ***a1)
{
  int ***v2; // r0
  int **v3; // r1
  int **v4; // r5
  int v5; // r6
  int v6; // r0

  *a1 = (int **)&off_60BD63CC;
  v2 = a1 + 4100;
  v3 = a1[4098];
  if ( v3 )
  {
    v4 = *v2;
    v5 = 4 * (_DWORD)v3;
    do
    {
      v6 = **v4;
      if ( v6 )
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v6 + 36))(v6, 0);
      v5 -= 4;
      ++v4;
    }
    while ( v5 );
  }
  operator_delete(a1);
}
