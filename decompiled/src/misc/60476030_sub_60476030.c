/* sub_60476030
 * address: 0x60476030   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60476030(int a1, _DWORD *a2, int *a3)
{
  int v6; // r7

  if ( *a3 >= 1 )
  {
    v6 = 0;
    do
    {
      sub_60473624(a1, a2);
      ++v6;
      a2 += 2;
    }
    while ( v6 < *a3 );
  }
  return (*(int (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3520)
                                                                                             + 12))(
           FIELD_U32(a1, 3520),
           sub_609909D8,
           0);
}
