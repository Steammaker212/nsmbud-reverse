/* sub_60857390
 * address: 0x60857390   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60857390(int result)
{
  int v1; // r4
  int v2; // r5
  int i; // r6
  int v4; // r5
  int v5; // t1
  int v6; // r5
  int j; // r4

  v1 = result;
  v2 = FIELD_U32(result, 8);
  for ( i = result + 4; v2 != i; v2 = FIELD_U32(v4, 8) )
  {
    v5 = *(_DWORD *)(v2 - 4);
    v4 = v2 - 4;
    result = (*(int (__fastcall **)(int))(v5 + 20))(v4);
  }
  v6 = v1 + 40;
  for ( j = FIELD_U32(v1, 44); j != v6; j = FIELD_U32(j, 4) )
    result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(j + 8) + 36))(FIELD_U32(j, 8));
  return result;
}
