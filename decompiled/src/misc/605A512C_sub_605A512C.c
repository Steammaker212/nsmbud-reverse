/* sub_605A512C
 * address: 0x605A512C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A512C(int a1, float a2)
{
  int result; // r0

  if ( (FIELD_U8(a1, 21) & 8) == 0 && FIELD_U8(a1, 6894) )
    FIELD_F32(a1, 6916) = a2;
  FIELD_F32(a1, 6128) = a2;
  FIELD_F32(a1, 6860) = (float)(FIELD_F32(a1, 6856) + a2) - FIELD_F32(a1, 6116);
  result = FIELD_U32(a1, 6836);
  if ( !result )
  {
    result = TileMgr_instance;
    FIELD_F32(TileMgr_instance, 24) = a2;
  }
  return result;
}
