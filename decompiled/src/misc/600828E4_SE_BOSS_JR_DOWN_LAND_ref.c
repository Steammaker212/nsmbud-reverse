/* SE_BOSS_JR_DOWN_LAND_ref
 * address: 0x600828E4   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_DOWN_LAND_ref(int a1)
{
  Actor *v2; // r5
  _DWORD *v3; // r0
  int v4; // r6
  _DWORD *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  _DWORD *v8; // r1
  unsigned int v9; // r0
  int v10; // r0
  bool v11; // zf
  int result; // r0

  v2 = (Actor *)(a1 + 648);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v4 = a1 + 7100;
  v3 = *(_DWORD **)(a1 + 7100);
  v5 = (_DWORD *)v3[3];
  v6 = v3[2];
  v7 = v3[17];
  if ( v6 > v7 )
    v5 += v7;
  if ( sub_60418548(*v5 + 4) )
    sub_60813430(a1 + 6332, "SE_BOSS_JR_DOWN_LAND1", 0);
  v8 = *(_DWORD **)(*(_DWORD *)v4 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
    v8 += v9;
  if ( sub_60418548(*v8 + 4) )
    sub_60813430(a1 + 6332, "SE_BOSS_JR_DOWN_LAND2", 0);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    v10 = sub_6014B69C(v2);
    v11 = v10 == 0;
    if ( v10 )
    {
      v2 = *(Actor **)(v10 + 144);
      v11 = v2 == 0;
    }
    if ( !v11 && Actor__getProfileId(v2) == 392 && !sub_602EE904(v2) )
      sub_602EE7B8(v2, FIELD_U32(a1, 80), -1);
  }
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81AAC);
  return result;
}
