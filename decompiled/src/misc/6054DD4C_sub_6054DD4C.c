/* sub_6054DD4C
 * address: 0x6054DD4C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054DD4C(int a1)
{
  unsigned int v2; // r2
  float v3; // s6
  float v4; // s4
  int v5; // r2
  int v6; // r2
  char v7; // r2
  int *v8; // r3
  float v9; // s2
  int result; // r0

  if ( FIELD_U8(a1, 3819) && FIELD_U32(a1, 3792) == 15 )
  {
    v2 = FIELD_U32(a1, 3812);
    v3 = FIELD_F32(a1, 3768);
    v4 = FIELD_F32(a1, 3784);
    if ( v2 >= 8 )
      v2 = 0;
    v5 = *(_DWORD *)(a1 + 4 * v2 + 3648);
    FIELD_F32(v5, 48) = FIELD_F32(a1, 3764) + FIELD_F32(a1, 3780);
    FIELD_F32(v5, 52) = v3 + v4;
    FIELD_U8(v5, 64) |= 0x10u;
    v6 = FIELD_U32(a1, 3808);
    FIELD_U32(a1, 3808) = v6 + 1;
    if ( v6 <= 8 )
    {
      v7 = FIELD_U8(a1, 3820);
    }
    else
    {
      FIELD_U32(a1, 3808) = 0;
      v7 = FIELD_U8(a1, 3820) ^ 1;
      FIELD_U8(a1, 3820) = v7;
    }
    v8 = dword_6054DE90;
    if ( !v7 )
      v8 = &dword_6054DE90[1];
    v9 = *(float *)v8;
    FIELD_F32(a1, 3780) = FIELD_F32(a1, 3780) + *(float *)v8;
    FIELD_F32(a1, 3784) = v9 + FIELD_F32(a1, 3784);
  }
  result = FIELD_U32(a1, 3796) + 1;
  FIELD_U32(a1, 3796) = result;
  if ( (unsigned int)(FIELD_U32(a1, 3792) - 27) <= 4 )
  {
    sub_6054EDD8(a1);
    result = FIELD_U32(a1, 3796);
  }
  if ( FIELD_U32(a1, 3716) == 4 )
  {
    if ( result < 60 )
      return result;
  }
  else if ( result < FIELD_U32(a1, 3800) )
  {
    return result;
  }
  FIELD_U32(a1, 3796) = 0;
  return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CACD4C);
}
