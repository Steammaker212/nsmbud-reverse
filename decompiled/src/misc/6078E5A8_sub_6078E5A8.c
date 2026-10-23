/* sub_6078E5A8
 * address: 0x6078E5A8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078E5A8(_DWORD *a1, int a2)
{
  unsigned int v3; // r0
  _DWORD *v4; // r0

  a1[118] = a2;
  (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 212))(a1, dword_60B0C230[a2]);
  v3 = a1[75];
  if ( v3 >= 6 )
    v3 = 0;
  v4 = &a1[v3];
  a1[6] = v4[60];
  a1[73] = v4[66];
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 260))(a1);
}
