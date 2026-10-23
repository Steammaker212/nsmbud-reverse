/* sub_6057FA6C
 * address: 0x6057FA6C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057FA6C(int a1)
{
  float v2; // s0
  int result; // r0
  _DWORD *v4; // r4
  int v5; // t1
  int v6; // [sp+4h] [bp-Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U8(a1, 6059) = FIELD_U32(a1, 2872) & 1;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  v6 = 0;
  sub_6057AAC0(a1, &v6);
  if ( (FIELD_U8(a1, 24) & 0x10) != 0 )
  {
    if ( (((int (__fastcall *)(int, int, int, float))loc_6057AC94)(a1, 1, 1, 0.0) & 9) != 0 )
    {
      if ( FIELD_U8(a1, 7465) )
        result = -1110651699;
      else
        result = -1106289623;
      FIELD_U32(a1, 100) = result;
    }
    else
    {
      v5 = FIELD_U32(a1, 7380);
      v4 = (_DWORD *)(a1 + 7380);
      result = v5;
      if ( v5 == 3 )
      {
        *v4 = 0;
        return 0;
      }
    }
  }
  else
  {
    result = sub_60003460(a1);
    if ( result == 1 )
    {
      result = 0;
      FIELD_U32(a1, 124) = 0;
    }
  }
  return result;
}
