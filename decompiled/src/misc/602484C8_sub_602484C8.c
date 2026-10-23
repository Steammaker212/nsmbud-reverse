/* sub_602484C8
 * address: 0x602484C8   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602484C8(int a1, int a2, int a3)
{
  char v3; // r12
  int v5; // r5
  int v6; // r6
  int v7; // r7
  int v8; // r8
  int v9; // r5
  float v10; // s16
  float v11; // s0

  if ( FIELD_U32(a1, 6320) != 1 && (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) == 0 )
    return 0;
  v5 = 0;
  if ( FIELD_U8(dword_60C99D88, 31) )
  {
    v6 = FIELD_U32(a2, 64);
    v7 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C8DC20 & ~(1613006140 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC20) )
    {
      dword_60C8DC1C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DC20);
    }
    if ( v6
      && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8DC1C) == 1
      && FIELD_U8(v7, 84) != 255
      && !FIELD_U32(v6, 6416) )
    {
      FIELD_U32(v6, 6416) = 40;
      if ( FIELD_S32(a1, 6480) <= 0 && !FIELD_U8(a1, 6484) )
      {
        v8 = FIELD_U32(v7, 116);
        v9 = FIELD_U32(v7, 108);
        v10 = FIELD_F32(v7, 112);
        FIELD_U8(v6, 6324) = -1;
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 192))(v6, &dword_60C8DBC4);
        FIELD_U32(a1, 6352) = v9;
        FIELD_F32(a1, 6356) = v10 + 16.0;
        FIELD_U32(a1, 6360) = v8;
        FIELD_U8(a1, 6476) = 1;
      }
      v5 = 1;
      v11 = FIELD_F32(EnemyCounterMaybe_instance, 16);
      if ( v11 != -8000.0 && (float)(FIELD_F32(a1, 108) + 8.0) >= v11 )
        FIELD_F32(a1, 6352) = v11 + -16.0;
    }
  }
  return v5;
}
