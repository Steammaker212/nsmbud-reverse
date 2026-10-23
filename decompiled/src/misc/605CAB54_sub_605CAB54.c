/* sub_605CAB54
 * address: 0x605CAB54   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605CAB54(int a1, int a2, int a3)
{
  StateMethodExecuter *result; // r0
  int v5; // r3
  bool v6; // zf

  result = *(StateMethodExecuter **)(a1 + 144);
  if ( result )
  {
    v5 = FIELD_U32(a2, 2196);
    v6 = v5 == 0;
    if ( v5 )
      v6 = (*(_BYTE *)(a2 + 8 * a3 + 2534) & 1) == 0;
    if ( !v6 )
    {
      *(_DWORD *)(a2 + 4 * (dword_60AF23A4[a3] >> 5) + 2224) |= 1 << (dword_60AF23A4[a3] & 0x1F);
      result = SE_OBJ_TARU_BREAK_ref((int)result, 0);
      FIELD_U8(a1, 220) = 1;
    }
  }
  return result;
}
