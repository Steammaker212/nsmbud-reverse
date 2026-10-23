/* sub_605D9504
 * address: 0x605D9504   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D9504(int a1, int a2, float a3, float a4)
{
  FIELD_U32(a1, 128) = 0;
  FIELD_F32(a1, 120) = a3;
  FIELD_F32(a1, 124) = a4;
  FIELD_U32(a1, 8000) = a2;
  FIELD_U32(a1, 8004) = 0;
  FIELD_U32(a1, 8008) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6292), &stru_60CB16FC);
  return 1;
}
