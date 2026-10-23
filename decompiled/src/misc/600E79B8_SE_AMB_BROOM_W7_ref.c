/* SE_AMB_BROOM_W7_ref
 * address: 0x600E79B8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_BROOM_W7_ref(int a1)
{
  if ( FIELD_U8(a1, 8349) )
    (*(void (__fastcall **)(int, const char *, _DWORD))(*(_DWORD *)dword_60C7F538 + 44))(
      dword_60C7F538,
      "SE_AMB_BROOM_W7",
      0);
  sub_600E78A0(a1);
  return 1;
}
