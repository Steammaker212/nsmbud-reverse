/* Player__vf58
 * address: 0x6079F0A4   size: 108   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6079F0A4(int a1)
{
  int v2; // r0
  bool v3; // zf

  v2 = sub_60766708(a1);
  v3 = v2 == 0;
  if ( !v2 )
    v3 = (FIELD_U8(a1, 1238) & 1) == 0;
  return v3
      && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1)
      && !FIELD_U32(a1, 9952)
      && (FIELD_U8(a1, 1229) & 1) == 0
      && (FIELD_U8(a1, 1206) & 8) == 0;
}
