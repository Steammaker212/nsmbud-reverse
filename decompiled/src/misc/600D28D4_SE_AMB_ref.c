/* SE_AMB_ref
 * address: 0x600D28D4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_ref(int a1)
{
  int v2; // r0

  sub_6002726C(a1);
  v2 = FIELD_U8(a1, 6122);
  if ( v2 == 2 )
  {
    (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
      dword_60C7F538,
      "SE_AMB_RP_SHIP_WIND",
      0);
  }
  else if ( v2 == 1 )
  {
    if ( FIELD_U8(a1, 6139) )
      FIELD_U32(dword_60CC6484, 268) = FIELD_U32(a1, 6152);
    (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
      dword_60C7F538,
      "SE_AMB_BROOM_W7",
      0);
  }
  return 1;
}
