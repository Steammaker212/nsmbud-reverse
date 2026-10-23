/* sub_6085746C
 * address: 0x6085746C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085746C(int result, float a2)
{
  int v2; // r4
  int v4; // r5
  int i; // r6
  _DWORD *v6; // r5
  int v7; // t1
  int v8; // r5
  int j; // r4

  v2 = result;
  v4 = FIELD_U32(result, 8);
  for ( i = result + 4; v4 != i; v4 = v6[2] )
  {
    v7 = *(_DWORD *)(v4 - 4);
    v6 = (_DWORD *)(v4 - 4);
    (*(void (__fastcall **)(_DWORD *))(v7 + 20))(v6);
    result = (*(int (__fastcall **)(_DWORD *, float))(*v6 + 12))(v6, a2);
  }
  v8 = v2 + 40;
  for ( j = FIELD_U32(v2, 44); j != v8; j = FIELD_U32(j, 4) )
    result = (*(int (__fastcall **)(_DWORD, float))(**(_DWORD **)(j + 8) + 44))(FIELD_U32(j, 8), a2);
  return result;
}
