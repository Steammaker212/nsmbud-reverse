/* LavaGeyser_vf12
 * address: 0x6070C200   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf12(int a1)
{
  sead_ListNode *v3[6]; // [sp+0h] [bp-18h] BYREF

  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6300));
  *(float *)v3 = FIELD_F32(a1, 148) / FIELD_F32(a1, 6396);
  *(float *)&v3[1] = *(float *)v3 * 0.9;
  *(float *)&v3[2] = *(float *)v3 * 0.3;
  v3[3] = (sead_ListNode *)1065353216;
  sub_604145D0((sead_ListNode *)dword_60C9A698, 20, (float *)(a1 + 7012), v3);
  return 1;
}
