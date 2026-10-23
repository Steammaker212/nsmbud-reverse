/* sub_604C0278
 * address: 0x604C0278   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C0278(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r6
  int v5; // r0

  v2 = 0;
  v3 = dword_60C9A1E0;
  FIELD_U32(dword_60C9A1E0, 532) = 0;
  sub_60473DE4(*(_DWORD **)(a1 + 4), 2u, &dword_60CA27A8, 1);
  sub_60473DE4(*(_DWORD **)(a1 + 4), 4u, &dword_60CA2798, 0);
  v4 = FIELD_U32(v3, 692);
  v5 = sub_6047482C(FIELD_U32(a1, 4), 4u);
  if ( v4 - 1 > 0 )
    v2 = v4 - 1;
  return (*(int (__fastcall **)(int, float))(*(_DWORD *)v5 + 96))(v5, (float)v2);
}
