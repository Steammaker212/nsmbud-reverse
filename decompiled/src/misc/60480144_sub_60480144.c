/* sub_60480144
 * address: 0x60480144   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60480144(int result)
{
  _DWORD *v1; // r1
  int v2; // r1
  int v3; // r2
  int v4; // r2
  int v5; // r2
  int v6; // r1

  v1 = (_DWORD *)PlayerMgr_instance;
  FIELD_U8(result, 60) = 0;
  FIELD_U8(result, 60) = v1[8] != 0;
  FIELD_U8(result, 61) = 0;
  FIELD_U8(result, 61) = v1[9] != 0;
  FIELD_U8(result, 62) = 0;
  FIELD_U8(result, 62) = v1[10] != 0;
  FIELD_U8(result, 63) = 0;
  FIELD_U8(result, 63) = v1[11] != 0;
  FIELD_U32(result, 64) = -1;
  FIELD_U32(result, 68) = -1;
  FIELD_U32(result, 72) = -1;
  FIELD_U32(result, 76) = -1;
  FIELD_U32(result, 80) = -1;
  FIELD_U32(result, 84) = -1;
  v2 = dword_60C99DD4;
  if ( FIELD_U8(dword_60C99DD4, 292) )
  {
    v3 = FIELD_U32(dword_60C99DD4, 304);
    if ( v3 <= 5 )
    {
      if ( (unsigned int)v3 >= 6 )
        v3 = 0;
      *(_DWORD *)(result + 4 * v3 + 64) = 0;
    }
  }
  if ( FIELD_U8(v2, 364) )
  {
    v4 = FIELD_U32(v2, 376);
    if ( v4 <= 5 )
    {
      if ( (unsigned int)v4 >= 6 )
        v4 = 0;
      *(_DWORD *)(result + 4 * v4 + 64) = 1;
    }
  }
  if ( FIELD_U8(v2, 436) )
  {
    v5 = FIELD_U32(v2, 448);
    if ( v5 <= 5 )
    {
      if ( (unsigned int)v5 >= 6 )
        v5 = 0;
      *(_DWORD *)(result + 4 * v5 + 64) = 2;
    }
  }
  if ( FIELD_U8(v2, 508) )
  {
    v6 = FIELD_U32(v2, 520);
    if ( v6 <= 5 )
    {
      if ( (unsigned int)v6 >= 6 )
        v6 = 0;
      result += 4 * v6;
      FIELD_U32(result, 64) = 3;
    }
  }
  return result;
}
