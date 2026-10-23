/* Lava_vf52
 * address: 0x605A8AD4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Lava_vf52(int a1)
{
  _DWORD *v2; // r1
  _DWORD *result; // r0
  float v4; // r1
  int v5; // r2
  float v6; // s0
  float v7; // [sp+0h] [bp-18h] BYREF
  float v8; // [sp+4h] [bp-14h]
  int v9; // [sp+8h] [bp-10h]

  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 72324));
  v2 = *(_DWORD **)(a1 + 72332);
  if ( v2 )
    DrawMgr_drawModel2(DrawMgr_instance, v2);
  result = (_DWORD *)FIELD_U8(a1, 21);
  if ( ((unsigned __int8)result & 8) == 0 )
  {
    v4 = FIELD_F32(a1, 112);
    v5 = FIELD_U32(a1, 116);
    v7 = FIELD_F32(a1, 108);
    v8 = v4;
    v9 = v5;
    v6 = FIELD_F32(a1, 6852);
    v7 = v7 + (float)(v6 * 0.5);
    v8 = v4 + (float)(FIELD_F32(a1, 6876) + -8.0);
    return sub_60414820(dword_60C9A698, 43, &v7, v6);
  }
  return result;
}
