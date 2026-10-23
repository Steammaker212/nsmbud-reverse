/* sub_608E5BC4
 * address: 0x608E5BC4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E5BC4(int a1, int a2, _DWORD *a3)
{
  int v6; // r4
  bool v7; // zf
  int *v8; // r7
  int v9; // r0

  v6 = 0;
  v7 = a2 == 0;
  if ( a2 )
    v7 = FIELD_U32(a1, 80) == 0;
  if ( !v7 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    if ( a3[1] )
    {
      v8 = (int *)sub_608E78F8(a1, a2);
      v9 = (*(int (__fastcall **)(_DWORD, _DWORD *, int *))(**(_DWORD **)(a1 + 80) + 24))(
             FIELD_U32(a1, 80),
             a3,
             v8 + 1);
      if ( v9 )
      {
        *v8 = v9;
        v6 = a1;
        v8[3] = 0;
      }
    }
  }
  return v6;
}
