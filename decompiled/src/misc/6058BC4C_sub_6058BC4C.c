/* sub_6058BC4C
 * address: 0x6058BC4C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058BC4C(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  bool v5; // zf
  __int16 v6; // r1
  int result; // r0
  float v8; // s0

  v4 = FIELD_U16(a1, 7488);
  v2 = (_WORD *)(a1 + 7488);
  v3 = v4;
  v5 = v4 == 0;
  if ( v4 )
  {
    v6 = v3 - 1;
    *v2 = v6;
    v5 = v6 == 0;
  }
  if ( !v5 || (result = sub_6057A3E4(a1)) == 0 )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v8 = CollisionActor__handleSpeed((CollisionActor *)a1);
    FIELD_U8(a1, 6059) = FIELD_U32(a1, 2872) & 1;
    CollisionMgr_process((_BYTE *)(a1 + 648), v8);
    if ( !sub_6057AA48((_DWORD *)a1) )
    {
      if ( (((int (__fastcall *)(int, int, _DWORD, float))loc_6057AC94)(a1, 1, 0, FIELD_F32(a1, 7484)) & 0xC) == 0xC )
        FIELD_F32(a1, 7484) = -FIELD_F32(a1, 7484);
      sub_6057A460((StageActor *)a1);
    }
    sub_6057A200(a1);
    return sub_6057AEC8(a1);
  }
  return result;
}
