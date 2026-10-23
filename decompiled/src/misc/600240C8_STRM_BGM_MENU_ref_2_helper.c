/* STRM_BGM_MENU_ref_2_helper
 * address: 0x600240C8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool STRM_BGM_MENU_ref_2_helper()
{
  int v0; // r4
  int v2; // r0

  v0 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v0 = dword_60C99DEC + 16;
  if ( FIELD_U32(v0, 492) == 1 )
    return 1;
  v2 = sub_603FD0B4(v0);
  if ( FIELD_U8(v0, 20) && !FIELD_U32(v0, 24) )
    --v2;
  if ( FIELD_U8(v0, 92) && !FIELD_U32(v0, 96) )
    --v2;
  if ( FIELD_U8(v0, 164) && !FIELD_U32(v0, 168) )
    --v2;
  if ( FIELD_U8(v0, 236) )
  {
    if ( !FIELD_U32(v0, 240) )
      --v2;
  }
  return v2 < 1;
}
