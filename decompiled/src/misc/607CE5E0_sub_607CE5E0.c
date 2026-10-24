/* sub_607CE5E0
 * address: 0x607CE5E0   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607CE5E0(StageActor *a1, int *a2, int a3, int a4)
{
  int (__fastcall ***v8)(_DWORD, int *); // r5
  char v9; // r12
  unsigned int result; // r0

  (*(void (__fastcall **)(StageActor *, sead_ListNode *, int))(FIELD_U32(a1, 0x0) + 144))(a1, FIELD_U32(a1 + (2) * 644, 0x20), 1);
  sub_60767F80(a1, a2, a4);
  FIELD_U32(a1 + (1) * 644, 0x230) |= 0x40u;
  sub_60767E04(a1, (int)a2, a3);
  sub_607CFB38(a1, &dword_60CC5398);
  v8 = (int (__fastcall ***)(_DWORD, int *))sub_607CFB50(a1);
  if ( !v8 )
    goto LABEL_6;
  if ( ((unsigned int)&dword_60C7B374 & ~(1618798192 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( (**v8)(v8, &dword_60C7B370) == 1 )
LABEL_6:
    sub_607CFC14(a1);
  result = FIELD_U32(a1 + (1) * 644, 0x230) & 0xFFFFFFBF;
  FIELD_U32(a1 + (1) * 644, 0x230) = result;
  return result;
}
