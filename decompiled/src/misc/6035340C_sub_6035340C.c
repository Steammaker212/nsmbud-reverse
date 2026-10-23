/* sub_6035340C
 * address: 0x6035340C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6035340C(int a1, int a2, int a3)
{
  FIELD_U32(a1, 6304) = FIELD_U32(a1, 8);
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 80) = FIELD_U32(a1, 80) != 1;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94F5C);
  FIELD_U8(a1, 6227) = *(_BYTE *)(FIELD_U32(a3, 64) + 84);
  StateMgrExt_changeState((StateMgr *)(a1 + 6084), &Enemy_StateId_Frozen._._);
  return 1;
}
