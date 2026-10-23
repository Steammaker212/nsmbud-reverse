/* SE_BOSS_JR_CLOWN_JAB_ref_2
 * address: 0x6003AE78   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_JAB_ref_2(int a1)
{
  float v2; // s0
  int v3; // r1
  int v4; // r2
  unsigned int v5; // r3
  int v6; // r2
  float v7; // s4
  float v8; // s0
  float v9; // s4
  float v10; // s2
  int result; // r0

  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  ((void (__fastcall *)(int, float))loc_60040A94)(a1, v2);
  v3 = FIELD_U32(a1, 11500);
  if ( FIELD_U32(a1, 11496) <= v3 )
  {
    if ( FIELD_U32(a1, 11492) == 1 )
      FIELD_U32(a1, 11492) = 2;
    if ( (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 28) & 0x30) != 0 )
    {
      FIELD_U8(a1, 11676) = 0;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C800E4);
    }
  }
  else
  {
    v4 = FIELD_U32(a1, 6304);
    v5 = FIELD_U32(v4, 8);
    v6 = FIELD_U32(v4, 12);
    if ( v5 > 1 )
      v6 += 4;
    if ( (*(_BYTE *)(*(_DWORD *)v6 + 28) & 0x30) != 0 )
    {
      FIELD_U32(a1, 11500) = v3 + 1;
      sub_60045DB4(a1, 3, 0, 1, 0.0, 1.0);
      sub_60813430(a1 + 7008, "SE_BOSS_JR_CLOWN_JAB", 0);
    }
  }
  v7 = FIELD_F32(dword_60CC6484, 112);
  v8 = v7 + 64.0;
  v9 = (float)(v7 + FIELD_F32(dword_60CC6484, 104)) + -64.0;
  FIELD_F32(a1, 11588) = v8;
  FIELD_F32(a1, 11592) = v9;
  v10 = FIELD_F32(a1, 108);
  if ( v9 <= v10 || v8 >= v10 )
  {
    FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
    FIELD_U32(a1, 116) = FIELD_U32(a1, 592);
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80108);
  }
  result = FIELD_U32(a1, 11480) + 1;
  FIELD_U32(a1, 11480) = result;
  return result;
}
