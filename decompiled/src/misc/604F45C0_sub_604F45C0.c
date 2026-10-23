/* sub_604F45C0
 * address: 0x604F45C0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F45C0(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int result; // r0

  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA67CC, 0);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3552) + 108))(**(_DWORD **)(a1 + 3552));
  FIELD_U8(a1, 8591) = 0;
  FIELD_U8(a1, 8588) = 1;
  FIELD_U8(a1, 8592) = 1;
  sub_604F78CC(FIELD_U32(a1, 9628));
  v2 = *(_DWORD **)(a1 + 9632);
  v3 = *(_DWORD *)(*v2 + 3588);
  if ( v3 )
    FIELD_U8(v3, 64) |= 1u;
  v4 = *(_DWORD *)(v2[1] + 3588);
  if ( v4 )
    FIELD_U8(v4, 64) |= 1u;
  v5 = *(_DWORD *)(v2[2] + 3588);
  if ( v5 )
    FIELD_U8(v5, 64) |= 1u;
  v6 = *(_DWORD *)(v2[3] + 3588);
  if ( v6 )
    FIELD_U8(v6, 64) |= 1u;
  result = *(_DWORD *)(v2[4] + 3588);
  if ( result )
    FIELD_U8(result, 64) |= 1u;
  return result;
}
