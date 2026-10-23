/* SE_PLY_BRAKE_ref
 * address: 0x60773C98   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_BRAKE_ref(int result)
{
  char v1; // r12
  int v2; // r4
  int v3; // r5

  v2 = result;
  if ( FIELD_F32(result, 88) != 0.0 )
  {
    if ( ((unsigned int)&unk_60CBF7B0 & ~(1618427072 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CBF7B0) )
    {
      dword_60CBF7B4 = (int)"SE_PLY_BRAKE";
      dword_60CBF7B8 = (int)"SE_PLY_BRAKE_SNOW";
      dword_60CBF7BC = (int)"SE_PLY_BRAKE_SAND";
      dword_60CBF7C0 = (int)"SE_PLY_BRAKE_ICE";
      dword_60CBF7C4 = (int)"SE_PLY_BRAKE";
      dword_60CBF7C8 = (int)"SE_PLY_BRAKE_WATER";
      dword_60CBF7CC = (int)"SE_PLY_BRAKE";
      dword_60CBF7D0 = (int)"SE_PLY_BRAKE_SAND";
      dword_60CBF7D4 = (int)"SE_PLY_BRAKE";
      dword_60CBF7D8 = (int)"SE_PLY_BRAKE_SAND";
      dword_60CBF7DC = (int)"SE_PLY_BRAKE";
      dword_60CBF7E0 = (int)"SE_PLY_BRAKE";
      dword_60CBF7E4 = (int)"SE_PLY_BRAKE";
      dword_60CBF7E8 = (int)"SE_PLY_BRAKE_WATER";
      _cxa_guard_release((__guard *)&unk_60CBF7B0);
    }
    result = FIELD_U8(v2, 1204);
    if ( (result & 0x40) == 0 )
    {
      v3 = *((_DWORD *)&unk_60CBF7B0 + FIELD_U32(v2, 7004) + 1);
      result = sub_6040E538(LevelInfo_instance);
      if ( !result )
        return sub_60814590(v2 + 840, v3, 0);
    }
  }
  return result;
}
