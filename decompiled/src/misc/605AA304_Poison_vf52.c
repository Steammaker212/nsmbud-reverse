/* Poison_vf52
 * address: 0x605AA304   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall Poison_vf52(int a1)
{
  sead_ListNode *result; // r0
  float v3; // r1
  int v4; // r2
  float v5; // s0
  float v6; // [sp+0h] [bp-18h] BYREF
  float v7; // [sp+4h] [bp-14h]
  int v8; // [sp+8h] [bp-10h]

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 72324));
  result = (sead_ListNode *)FIELD_U8(a1, 21);
  if ( ((unsigned __int8)result & 8) == 0 )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_U32(a1, 116);
    v6 = FIELD_F32(a1, 108);
    v7 = v3;
    v8 = v4;
    v5 = FIELD_F32(a1, 6852);
    v6 = v6 + (float)(v5 * 0.5);
    v7 = v3 + (float)(FIELD_F32(a1, 6876) + -8.0);
    return sub_604146FC((sead_ListNode *)dword_60C9A698, 44, &v6, v5);
  }
  return result;
}
