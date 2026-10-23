/* sub_603E24A0
 * address: 0x603E24A0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E24A0(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r1

  v3 = a1 + 1578;
  v2 = a1[1578];
  *v3 = v2 - 1;
  if ( v2 <= 1 )
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C99464);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 636))(a1);
}
