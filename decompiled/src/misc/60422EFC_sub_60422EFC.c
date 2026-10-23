/* sub_60422EFC
 * address: 0x60422EFC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60422EFC(sead_ListNode *a1, int a2)
{
  int v4; // r6

  v4 = (int)&a1[81];
  sead__CriticalSection__lock((int)&a1[81]);
  sead__ListNode__insertFront(a1 + 79, (sead_ListNode *)((char *)a1[80].next + a2));
  ++a1[80].previous;
  return sead__CriticalSection__unlock(v4);
}
