/* sub_604F9E24
 * address: 0x604F9E24   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F9E24(int a1)
{
  int v2; // r0
  int v3; // r1

  v2 = FIELD_U32(a1, 3680);
  v3 = v2;
  if ( v2 != 1 )
    v3 = 2;
  if ( !v2 )
    v3 = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 4 * v3 + 3668) + 36) = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v3 + 3668) + 36) & 0xFFFFFF5F
                                                    | 0x20;
  sub_60473DE4((_DWORD *)(a1 + 40), 2u, &dword_60CA6EAC, 0);
  FIELD_U8(a1, 3689) = 0;
  FIELD_U8(a1, 3686) = 1;
  return 1;
}
