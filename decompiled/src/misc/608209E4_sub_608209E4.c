/* sub_608209E4
 * address: 0x608209E4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608209E4(int a1, sead_ListNode *a2, int a3)
{
  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C2A58C;
  FIELD_U32(a1, 16) = a3;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = a1;
  FIELD_U32(a1, 32) = 0;
  if ( a2 )
  {
    FIELD_U32(a1, 32) = a2;
    sead__ListNode__insertFront(a2, (sead_ListNode *)(a1 + 20));
    ++FIELD_U32(a2 + (1) * 8, 0x0);
  }
  return a1;
}
