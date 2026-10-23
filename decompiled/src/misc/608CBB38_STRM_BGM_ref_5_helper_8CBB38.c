/* STRM_BGM_ref_5_helper_8CBB38
 * address: 0x608CBB38   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref_5_helper_8CBB38(int a1, int a2)
{
  int *v4; // r0
  int v5; // r4
  int *v6; // r0

  if ( !FIELD_U8(a1, 188) )
    return 0;
  v4 = sub_608C3C60();
  sub_608C4158((int)v4);
  v5 = sub_608CC640(a1 + 456, a2);
  v6 = sub_608C3C60();
  sub_608C4160((int)v6);
  return v5;
}
