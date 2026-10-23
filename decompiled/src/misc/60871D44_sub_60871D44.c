/* sub_60871D44
 * address: 0x60871D44   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60871D44(_DWORD *a1, int a2, int a3)
{
  int v4; // r4
  int result; // r0

  v4 = FIELD_U32(a2, 120) + 56 * a3;
  sub_60871018(FIELD_U32(a2, 120) + 56 * a3, a1, (*(_WORD *)(FIELD_U32(a2, 136) + 66) & 8) == 0);
  if ( *(_WORD *)(nn__util__BinaryFileHeader__GetFirstBlock_const(*(nn__util__BinaryFileHeader **)(a2 + 152)) + 16) == 1 )
    sub_608710F0(v4);
  __dmb(0xAu);
  result = FIELD_U16(v4, 44) & 0xFFFE;
  FIELD_U16(v4, 44) = result;
  return result;
}
