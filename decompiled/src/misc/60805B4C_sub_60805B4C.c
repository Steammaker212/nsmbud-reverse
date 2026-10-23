/* sub_60805B4C
 * address: 0x60805B4C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60805B4C(_DWORD *a1)
{
  int *v2; // r0
  int *v3; // r0
  int v4; // r0

  *a1 = off_60C27F88;
  v2 = (int *)a1[5];
  if ( v2 )
  {
    v3 = sub_60805958(v2);
    operator_delete(v3);
    a1[5] = 0;
  }
  v4 = a1[6];
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  operator_delete(a1);
}
