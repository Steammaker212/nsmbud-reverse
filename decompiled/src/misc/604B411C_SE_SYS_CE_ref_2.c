/* SE_SYS_CE_ref_2
 * address: 0x604B411C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_ref_2(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int result; // r0

  v2 = (_DWORD *)(a1 + 24);
  sub_6047F28C((_DWORD *)(a1 + 24), (int)"SE_SYS_CE_DECIDE", 5);
  sub_6047F2C8(v2, (int)"SE_SYS_CE_BTN_OVER", 5);
  sub_6047F304(v2, (int)"SE_SYS_CE_BTN_OVER_OFF", 5);
  v3 = sub_608DE61C(a1 + 36, 2);
  if ( v3 )
  {
    v4 = v3 - FIELD_U32(a1, 48);
    if ( v4 )
      FIELD_U32(v4, 172) = "SE_SYS_CE_BTN_OVER_OFF";
  }
  v5 = sub_608DE61C(a1 + 36, 3);
  if ( v5 )
  {
    v6 = v5 - FIELD_U32(a1, 48);
    if ( v6 )
      FIELD_U32(v6, 172) = "SE_SYS_CE_BTN_OVER_OFF";
  }
  v7 = sub_608DE61C(a1 + 36, 4);
  if ( v7 )
  {
    v8 = v7 - FIELD_U32(a1, 48);
    if ( v8 )
      FIELD_U32(v8, 172) = "SE_SYS_CE_BTN_OVER_OFF";
  }
  result = sub_608DE61C(a1 + 36, 5);
  if ( result )
  {
    result -= FIELD_U32(a1, 48);
    if ( result )
      FIELD_U32(result, 172) = "SE_SYS_CE_BTN_OVER_OFF";
  }
  return result;
}
