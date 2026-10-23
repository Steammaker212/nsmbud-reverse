/* sub_606B2840
 * address: 0x606B2840   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B2840(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r3
  __int64 v5; // r0
  int result; // r0
  int v7; // r0
  StateBase *v8; // r1

  v2 = FIELD_U32(a1, 40);
  if ( v2 >= 1 )
    FIELD_U32(a1, 40) = v2 - 1;
  if ( FIELD_U32(a1, 48) == 1 )
  {
    v3 = FIELD_U8(a1, 21);
    v4 = v3 - 33;
    HIDWORD(v5) = 1u >> (33 - v3);
    LODWORD(v5) = 1 << (v3 - 1);
    if ( v4 >= 0 )
    {
      HIDWORD(v5) = 1 << v4;
      LODWORD(v5) = 0;
    }
    result = (v5 & FIELD_U64(EventMgr__instance, 16)) != 0;
    FIELD_U8(a1, 52) = result;
  }
  else
  {
    result = FIELD_U8(a1, 52);
  }
  if ( FIELD_U8(a1, 53) != result )
  {
    v7 = FIELD_S16(a1, 90);
    if ( v7 >= FIELD_S16(a1, 88) )
    {
      if ( FIELD_U8(a1, 53) )
        v8 = &stru_60CBA32C;
      else
        v8 = &stru_60CBA30C;
      StateMgr__changeState((StateMgr *)(a1 + 196), v8);
      return sub_606B3750(dword_60CBA43C, a1, FIELD_U32(a1, 48), FIELD_U8(a1, 21));
    }
    else
    {
      result = v7 + 1;
      FIELD_U16(a1, 90) = result;
    }
  }
  return result;
}
