/* sub_608E8C44
 * address: 0x608E8C44   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608E8C44(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r0

  *a1 = off_60C5C248;
  v2 = a1[20];
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    a1[20] = 0;
  }
  v3 = sub_608E60A4(a1);
  operator_delete(v3);
}
