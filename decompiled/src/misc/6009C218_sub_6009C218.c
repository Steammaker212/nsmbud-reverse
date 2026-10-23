/* sub_6009C218
 * address: 0x6009C218   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6009C218(_WORD *a1)
{
  __int16 v2; // r1
  int v3; // r0

  (*(void (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 1416))(a1);
  if ( (*(int (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 716))(a1) == 1 )
  {
    v2 = 30;
  }
  else
  {
    v3 = (*(int (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 720))(a1);
    v2 = 15;
    if ( v3 == 1 )
      v2 = 30;
  }
  a1[3138] = v2;
  return 6276;
}
