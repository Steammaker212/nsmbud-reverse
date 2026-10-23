/* SE_PLY_SPIN_ONCE_ref_2
 * address: 0x607B9B34   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_PLY_SPIN_ONCE_ref_2(int a1)
{
  signed int result; // r0
  signed int *v3; // r5
  int v4; // r1
  int v5; // r0
  int v6; // r5
  unsigned int v7; // r4
  int v8; // r0
  unsigned int v9; // r5
  int v10; // r0

  if ( (FIELD_U8(a1, 1213) & 2) != 0 )
    Player_changeState(a1, (StateBase *)&unk_60CC4C04, 1);
  FIELD_U32(a1, 12104) = 335544320;
  sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_SPIN_ONCE", 1, 0);
  v3 = (signed int *)(a1 + 11360);
  result = FIELD_U32(a1, 11360);
  v4 = FIELD_U32(result, 28);
  if ( v4 != 122 )
  {
    if ( v4 == 11 )
    {
      result = sub_60793CA8(result);
      if ( result != 1 )
        return result;
      result = *v3;
      v4 = *(_DWORD *)(*v3 + 28);
    }
    if ( (v4 & 0xFFFFFFFE) != 0xE8 )
    {
      v5 = sub_6079D894(a1);
      v6 = v5;
      if ( v5 )
      {
        v7 = FIELD_S8(v5, 84);
        v8 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v5 + 156))(v5, FIELD_U32(v5, 1320));
        return sub_60236F74(v7, (EffectData *)(v6 + 13840), dword_60B0CEB8[v8], (Vec3 *)(v6 + 108), 0, 0);
      }
      else
      {
        v9 = FIELD_S8(a1, 84);
        v10 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320));
        return sub_60236F74(v9, (EffectData *)(a1 + 13840), dword_60B0CEB8[v10], (Vec3 *)(a1 + 108), 0, 0);
      }
    }
  }
  return result;
}
