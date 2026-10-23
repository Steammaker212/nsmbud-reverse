/* player_plp_ref
 * address: 0x60756DA4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall player_plp_ref(int a1)
{
  int v2; // r4
  int *v3; // r5
  int v4; // r6
  int *result; // r0
  bool v6; // zf
  int v7; // r0
  int (__fastcall *v8)(int, _DWORD *); // r2
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  sub_6078CCE0();
  v2 = 0;
  v3 = &dword_60CBEB7C;
  v4 = **(_DWORD **)(a1 + 24);
  do
  {
    *(_DWORD *)(a1 + 920 + 4 * v2++) = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 84))(v4, v3);
    v3 += 2;
  }
  while ( v2 != 33 );
  result = *(int **)(a1 + 292);
  v6 = result == 0;
  if ( result )
    v6 = *result == 0;
  if ( !v6 )
  {
    v7 = *result;
    v8 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v7 + 84);
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "player_plp";
    result = (int *)v8(v7, v9);
    FIELD_U32(a1, 916) = result;
  }
  return result;
}
