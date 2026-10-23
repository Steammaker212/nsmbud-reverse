/* sub_607949E8
 * address: 0x607949E8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607949E8(int a1)
{
  int v2; // r6
  int *v3; // r1
  int *v4; // r1

  if ( FIELD_U32(a1, 8) != 2 )
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 152))(FIELD_U32(a1, 4));
  sub_60443298((int)DrawMgr_instance);
  v2 = dword_60CD0B40;
  v3 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
    v3 += 5;
  sub_604431BC(DrawMgr_instance, *v3, 0);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 152))(FIELD_U32(a1, 4));
  sub_60443298((int)DrawMgr_instance);
  v4 = *(int **)(v2 + 36);
  if ( FIELD_U32(v2, 32) > 9u )
    v4 += 9;
  return sub_604431BC(DrawMgr_instance, *v4, 0);
}
