/* sub_6090A030
 * address: 0x6090A030   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6090A030(_DWORD *a1, int a2, int a3)
{
  int v6; // r7

  v6 = a1[81];
  if ( v6 )
  {
    sead__ListNode__erase((_DWORD *)((char *)a1 + FIELD_U32(v6, 344)));
    --FIELD_U32(v6, 340);
    a1[81] = 0;
  }
  sead__ListNode__insertFront((sead_ListNode *)(a2 + 332), (sead_ListNode *)((char *)a1 + FIELD_U32(a2, 344)));
  ++FIELD_U32(a2, 340);
  a1[81] = a2;
  if ( a3 == 1 )
  {
    qmemcpy(a1 + 43, (const void *)(a2 + 172), 0x20u);
    qmemcpy(a1 + 51, (const void *)(a2 + 204), 0x20u);
  }
}
