/* SE_PLY_CLIMB_ref
 * address: 0x607C08D0   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CLIMB_ref(int a1)
{
  float v2; // s16
  const char *v3; // r1
  int v4; // r1
  _DWORD *v5; // r0
  int result; // r0
  int v7; // r1
  int v8; // r2

  sub_60774040(a1, FIELD_U32(a1, 80));
  if ( !FIELD_U32(a1, 12824) )
    nullsub_5471(a1);
  v2 = 1.0;
  if ( sub_60793DA0(FIELD_U32(a1, 11360), 1.0) == 1 )
  {
    if ( (FIELD_U32(a1, 12824) | 2) == 2 )
      v3 = "SE_PLY_CLIMB_ROPE";
    else
      v3 = "SE_PLY_CLIMB_KUSARI";
    sub_607734E8((unsigned __int8 *)a1, (int)v3, 0, 0);
  }
  v4 = sub_607868A0(a1 + 688);
  v5 = *(_DWORD **)(a1 + 11360);
  if ( v4 == 1 )
  {
    sub_60793088(v5, 1.875);
    v2 = 1.5;
  }
  else
  {
    sub_60793088(v5, 1.5);
  }
  FIELD_F32(a1, 12828) = v2;
  if ( sub_60786750(a1 + 688) || sub_6078675C(a1 + 688) || sub_60786744(a1 + 688) != 1 )
  {
    result = sub_60786738(a1 + 688);
    if ( !result )
    {
      FIELD_U32(a1, 9940) = 1;
      FIELD_U32(a1, 12828) = 0;
      v7 = FIELD_U32(a1, 12844);
      FIELD_U32(a1, 12852) = v7;
      v8 = FIELD_U32(a1, 6752);
      FIELD_U32(a1, 12844) = v8;
      FIELD_U32(a1, 12856) = FIELD_U32(a1, 12848);
      FIELD_U32(a1, 12848) = v7 - v8;
      FIELD_U32(a1, 12836) = 0;
      sub_607C0FB4(a1);
      FIELD_U32(a1, 12852) = FIELD_U32(a1, 12844);
      result = FIELD_U32(a1, 12848);
      FIELD_U32(a1, 12856) = result;
    }
  }
  else
  {
    FIELD_U32(a1, 9940) = 3;
    return PlayerBase_dispatchVirtual3(a1 + 11356, 48, 0.0);
  }
  return result;
}
