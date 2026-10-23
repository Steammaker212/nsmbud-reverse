/* SE_SYS_GOAL_FLAG_ref
 * address: 0x606121F8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_GOAL_FLAG_ref(int a1)
{
  int result; // r0
  int v3; // r5
  float *v4; // r6
  float v5; // s0
  float v6; // s0
  _DWORD v7[2]; // [sp+4h] [bp-24h] BYREF
  char v8; // [sp+Ch] [bp-1Ch]

  result = FIELD_U8(dword_60CBFA90, 60);
  if ( (result & 1) != 0 )
  {
    v3 = 0;
    v7[0] = FIELD_U32(a1, 7600);
    v7[1] = unk_60C26488;
    v8 = 0;
    sub_60808374(SoundSystem_instance, "SE_SYS_GOAL_FLAG", v7, 0);
    v4 = (float *)(a1 + 7560);
    FIELD_F32(a1, 7552) = FIELD_F32(a1, 7552) + 1.833;
    FIELD_F32(a1, 7560) = FIELD_F32(a1, 7560) - FIELD_F32(a1, 7572);
    mat_goal_flag_ref(a1);
    v5 = FIELD_F32(a1, 7576);
    if ( FIELD_F32(a1, 7552) >= v5 )
    {
      FIELD_F32(a1, 7552) = v5;
      v3 = 1;
    }
    v6 = FIELD_F32(a1, 7568);
    if ( *v4 <= v6 )
    {
      *v4 = v6;
      v3 |= 2u;
    }
    result = FIELD_U32(a1, 7616);
    if ( result == 2 )
      v3 |= 4u;
    if ( v3 == 7 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB319C);
  }
  return result;
}
