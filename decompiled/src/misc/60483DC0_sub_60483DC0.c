/* sub_60483DC0
 * address: 0x60483DC0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60483DC0(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 3636);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_6050A8A4(FIELD_U32(a1, 3652));
    sub_6050A8A4(FIELD_U32(a1, 3656));
    sub_6050A8A4(FIELD_U32(a1, 3660));
    sub_6050A8A4(FIELD_U32(a1, 3664));
    return sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
  }
  return result;
}
