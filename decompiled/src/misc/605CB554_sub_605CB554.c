/* sub_605CB554
 * address: 0x605CB554   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605CB554(int a1)
{
  unsigned int result; // r0
  StateMethodExecuter *v3; // r5
  _BOOL4 v4; // r6
  float v5; // s0
  unsigned int v6; // r0
  float v7; // s0
  unsigned int v8; // r0

  sub_605C9D04(a1);
  FIELD_U32(a1, 328) = 9;
  result = sub_605CC878(a1);
  v3 = (StateMethodExecuter *)result;
  if ( result )
  {
    sub_605CC4D8(a1);
    if ( (float)(*(float *)&v3[9].owner - *(float *)&v3[49].vtable) > 0.0 && (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
      return (unsigned int)SE_OBJ_TARU_BREAK_ref(a1, 0);
    v4 = (float)(*(float *)&v3[9].vtable - *(float *)&v3[48].currentState) < 0.0;
    if ( sub_605C9ACC(a1, v4) || sub_605C9ACC(a1, 2) == 1 )
    {
      FIELD_U32(a1, 80) = !v4;
      v5 = (float)byte_60B057DC[!v4];
      FIELD_U32(a1, 100) = -1095552205;
      FIELD_F32(a1, 120) = v5 * 1.25;
      FIELD_U32(a1, 124) = -1090519040;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 6124) |= 0x18u;
      v6 = FIELD_S8(a1, 84);
      if ( v6 <= 3 )
        *(_WORD *)(a1 + 2 * v6 + 6128) = 32;
      return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB0D48);
    }
    result = BYTE1(v3[101].owner);
    if ( (result & 0x20) == 0 )
    {
      result = LOBYTE(v3[575].vtable);
      if ( (result & 0x60) == 0 )
      {
        result = (int)v3[576].vtable & 0x60;
        if ( result != 32 )
        {
          if ( (result = FIELD_U32(a1, 2872), (result & 0x440000) != 0) && (result & 0x10000000) == 0
            || (result & 0x880000) != 0 && (result &= 0x20000000u) == 0 )
          {
            FIELD_U32(a1, 80) = !v4;
            v7 = (float)byte_60B057DC[!v4];
            FIELD_U32(a1, 100) = -1095552205;
            FIELD_F32(a1, 120) = v7 * 1.25;
            FIELD_U32(a1, 124) = -1090519040;
            FIELD_U32(a1, 128) = 0;
            FIELD_U32(a1, 6124) |= 0x18u;
            v8 = FIELD_S8(a1, 84);
            if ( v8 <= 3 )
              *(_WORD *)(a1 + 2 * v8 + 6128) = 32;
            return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB0D48);
          }
        }
      }
    }
  }
  return result;
}
