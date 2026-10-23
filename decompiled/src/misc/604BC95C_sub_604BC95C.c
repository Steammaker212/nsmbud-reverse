/* sub_604BC95C
 * address: 0x604BC95C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BC95C(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  _DWORD *v4; // r0

  sub_60473DE4(*(_DWORD **)(a1 + 4), 1u, &dword_60CA27A0, 0);
  v2 = FIELD_U32(a1, 4);
  v3 = FIELD_U32(v2, 3508);
  v4 = *(_DWORD **)(v2 + 3512);
  if ( v3 > 1 )
    v4 += 5;
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 104))(*v4);
}
