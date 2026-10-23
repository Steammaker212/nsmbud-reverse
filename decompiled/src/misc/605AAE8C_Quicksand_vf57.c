/* Quicksand_vf57
 * address: 0x605AAE8C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Quicksand_vf57(int a1)
{
  float v1; // s0

  v1 = FIELD_F32(dword_60CC6484, 124) + FIELD_F32(a1, 6832);
  FIELD_F32(a1, 6128) = v1;
  if ( (FIELD_U8(a1, 21) & 8) == 0 && FIELD_U8(a1, 6894) )
    FIELD_F32(a1, 6916) = v1;
  FIELD_F32(a1, 6812) = v1 - FIELD_F32(a1, 112);
  return sub_60165340(a1 + 6136, (_DWORD *)(a1 + 6808), (_DWORD *)(a1 + 6816));
}
