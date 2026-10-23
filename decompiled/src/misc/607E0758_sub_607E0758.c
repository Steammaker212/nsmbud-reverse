/* sub_607E0758
 * address: 0x607E0758   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E0758(int result)
{
  FIELD_U8(result, 44) = 0;
  if ( FIELD_U8(dword_60C9A1F0, 6559) == 2 )
    *(_DWORD *)(FIELD_U32(dword_60C99DD4, 212) + 3336) |= 1u;
  else
    *(_BYTE *)(FIELD_U32(dword_60C99DD4, 216) + 3592) = 1;
  FIELD_U32(result, 48) = 300;
  return result;
}
