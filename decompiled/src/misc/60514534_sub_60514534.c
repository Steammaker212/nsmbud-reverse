/* sub_60514534
 * address: 0x60514534   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60514534(int result)
{
  int v1; // r2
  int v2; // r3
  __int16 v3; // r2
  int v4; // r1
  int *v5; // lr
  int v6; // r4
  int v7; // r1
  int v8; // r12
  int v9; // r3

  if ( FIELD_U8(result, 4638) )
    return result;
  if ( FIELD_U8(result, 4639) )
  {
    if ( !FIELD_U8(result, 4636) )
      return (int)StateMgr__changeState((StateMgr *)(result + 24), (StateBase *)&dword_60CA8648);
    return result;
  }
  v1 = FIELD_U32(result, 14964);
  if ( (v1 & 0x4000) != 0 || (v2 = FIELD_U32(result, 14960), (v2 & 0x4000) != 0) )
  {
    FIELD_U32(result, 4624) = FIELD_U32(result, 12892);
    return sub_60502694(result + 3596);
  }
  v3 = v1 | v2;
  if ( (v3 & 0x2000) != 0 )
    return sub_60502694(result + 3596);
  if ( FIELD_U8(result, 4642) )
    return result;
  v5 = (int *)(result + 4624);
  v4 = FIELD_U32(result, 4624);
  v6 = FIELD_U32(result, 12896);
  if ( v6 == v4 )
  {
    if ( (v3 & 0x80) == 0 )
      return result;
    v7 = 12900;
LABEL_35:
    result = *(_DWORD *)(result + v7);
    *v5 = result;
    return result;
  }
  v8 = FIELD_U32(result, 12900);
  if ( v8 == v4 )
  {
    if ( (v3 & 0x40) != 0 && (!dword_60C99DD4 || FIELD_S32(result, 14980) <= 1) )
    {
      *v5 = v6;
      return result;
    }
    if ( (v3 & 0x80) != 0 )
    {
      v7 = 12904;
      goto LABEL_35;
    }
  }
  else
  {
    v9 = FIELD_U32(result, 12904);
    if ( v9 == v4 )
    {
      if ( (v3 & 0x40) != 0 && (!dword_60C99DD4 || FIELD_S32(result, 14980) <= 2) )
      {
        *v5 = v8;
        return result;
      }
      if ( (v3 & 0x80) != 0 )
      {
        v7 = 12908;
        goto LABEL_35;
      }
    }
    else if ( FIELD_U32(result, 12908) == v4 && (v3 & 0x40) != 0 )
    {
      if ( dword_60C99DD4 )
      {
        result = FIELD_U32(result, 14980);
        if ( result <= 3 )
          *v5 = v9;
      }
      else
      {
        *v5 = v9;
      }
    }
  }
  return result;
}
