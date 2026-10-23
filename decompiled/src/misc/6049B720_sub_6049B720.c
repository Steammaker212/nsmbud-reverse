/* sub_6049B720
 * address: 0x6049B720   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049B720(int a1)
{
  int *v2; // r6
  int v3; // r5
  int result; // r0
  int v5; // r0
  int v6; // r2

  v2 = (int *)(a1 + 5332);
  v3 = dword_60C9CFB8;
  if ( sub_604593D0(dword_60C9CFB8, FIELD_U32(a1, 5332)) )
  {
    FIELD_U8(a1, 5356) = 1;
    FIELD_U32(a1, 5340) = 0;
    return 5340;
  }
  else if ( sub_604592A0(v3, *v2) )
  {
    v5 = *v2;
    if ( (unsigned int)*v2 >= 4 )
      v5 = 0;
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 404 * v5 + 4040) + 20))(*(_DWORD *)(a1 + 404 * v5 + 4040));
    v6 = 90;
    FIELD_U8(a1, 5356) = result;
    if ( result == 1 )
      v6 = 0;
    FIELD_U32(a1, 5344) = 0;
    FIELD_U32(a1, 5340) = v6;
  }
  else
  {
    FIELD_U8(a1, 5356) = 0;
    FIELD_U32(a1, 5340) = 90;
    return 5340;
  }
  return result;
}
