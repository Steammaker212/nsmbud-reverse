/* sub_602615B4
 * address: 0x602615B4   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602615B4(int a1)
{
  float v2; // s0
  float v3; // s0
  bool v4; // zf
  int result; // r0

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7068));
  v2 = ((float (__fastcall *)(int))loc_60261C7C)(a1);
  FIELD_U32(a1, 7104) = -FIELD_U32(a1, 164);
  FIELD_U32(a1, 7100) = FIELD_U32(a1, 160);
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  v4 = FIELD_U8(dword_60CC6D8C, 17) == 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v4 = (FIELD_U8(a1, 26) & 1) == 0;
  if ( !v4 )
    return sub_60261E6C(a1, v3);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    ((void (__fastcall *)(int, float))loc_602600B0)(a1, v3);
    sub_6025FFE4(a1, 0);
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8E46C);
  }
  return result;
}
