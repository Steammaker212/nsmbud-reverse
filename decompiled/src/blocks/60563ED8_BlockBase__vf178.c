/* BlockBase__vf178
 * address: 0x60563ED8   size: 216   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60566100 : BrickBlockHuge
_BYTE *__fastcall BlockBase__vf178(int a1)
{
  int v2; // r0
  float v4[2]; // [sp+0h] [bp-20h] BYREF
  char v5; // [sp+8h] [bp-18h]
  char v6; // [sp+9h] [bp-17h]
  char v7; // [sp+Ah] [bp-16h]
  char v8; // [sp+Bh] [bp-15h]
  __int16 v9; // [sp+Ch] [bp-14h]

  v4[0] = FIELD_F32(a1, 108) + -8.0;
  v4[1] = FIELD_F32(a1, 112) + 16.0;
  v5 = FIELD_U8(a1, 6849);
  v2 = FIELD_U32(a1, 7368);
  v6 = v2;
  v7 = 1;
  v8 = FIELD_U8(a1, 6850);
  v9 = word_60B0545C[v2];
  SE_OBJ_BLOCK_BREAK_ref_2(dword_60CB061C, v4, FIELD_U8(a1, 6879));
  sub_605BA078(dword_60CB061C, a1 + 6980, 2, FIELD_U8(LevelInfo_instance, 18));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
  return StageActor__delete((StateActor *)a1, 1);
}
