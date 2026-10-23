/* fly_wait_ref_E6FD4
 * address: 0x600E6FD4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fly_wait_ref_E6FD4(int a1)
{
  int v2; // r5

  v2 = a1;
  if ( FIELD_U8(a1, 8132) )
    v2 = FIELD_U32(a1, 56);
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 716))(v2) )
    (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 720))(v2);
  sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = 0;
  return 0;
}
