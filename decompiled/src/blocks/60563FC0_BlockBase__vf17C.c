/* BlockBase__vf17C
 * address: 0x60563FC0   size: 200   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x60566228 : BrickBlockHuge
_BYTE *__fastcall BlockBase__vf17C(int a1)
{
  _DWORD v3[2]; // [sp+4h] [bp-1Ch] BYREF
  char v4; // [sp+Ch] [bp-14h]
  char v5; // [sp+Dh] [bp-13h]
  __int16 v6; // [sp+Eh] [bp-12h]

  v3[0] = FIELD_U32(a1, 108);
  *(float *)&v3[1] = FIELD_F32(a1, 112) + 8.0;
  v4 = FIELD_U8(a1, 6849);
  v5 = FIELD_U8(a1, 6850);
  v6 = word_60B0545C[FIELD_U32(a1, 7368)];
  SE_OBJ_BLOCK_BREAK_ref_3(dword_60CB061C, v3, 0, FIELD_U8(a1, 6879));
  sub_605BA078(dword_60CB061C, a1 + 6980, 2, FIELD_U8(LevelInfo_instance, 18));
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
  return StageActor__delete((StateActor *)a1, 1);
}
