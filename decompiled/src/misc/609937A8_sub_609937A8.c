/* sub_609937A8
 * address: 0x609937A8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609937A8(_WORD *a1)
{
  __int16 v2; // r5
  int v3; // r1

  v2 = a1[15];
  v3 = *(_DWORD *)sub_60991414((int)a1, 0);
  if ( (v2 & 0x40) != 0 )
  {
    (*(void (**)(void))(v3 + 104))();
    return (*(int (__fastcall **)(_WORD *, _DWORD))(*(_DWORD *)a1 + 116))(a1, 0);
  }
  else
  {
    (*(void (**)(void))(v3 + 108))();
    return (*(int (__fastcall **)(_WORD *, int))(*(_DWORD *)a1 + 116))(a1, 3);
  }
}
