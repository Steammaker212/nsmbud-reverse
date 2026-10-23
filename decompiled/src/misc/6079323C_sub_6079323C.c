/* sub_6079323C
 * address: 0x6079323C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079323C(_DWORD *a1, float a2)
{
  __int16 v2; // r1

  v2 = 160;
  if ( a1[7] == 159 )
    v2 = 161;
  return (*(int (__fastcall **)(_DWORD *, float, float, float))(*a1 + 88))(
           a1,
           *(float *)&dword_60CBFBC4[13 * v2 + 9],
           0.0,
           a2);
}
