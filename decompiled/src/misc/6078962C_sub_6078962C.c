/* sub_6078962C
 * address: 0x6078962C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078962C(int a1)
{
  int result; // r0
  int v3; // r5

  result = FIELD_U32(a1, 168);
  if ( result != 1 )
  {
    if ( result )
      return result;
    result = sub_603FC6A0(dword_60C99DE4);
    if ( result )
      return result;
    v3 = LevelInfo_instance;
    if ( !sub_6040E274(LevelInfo_instance) )
    {
      result = sub_6040E4C8(v3);
      if ( result != 1 )
        return result;
    }
    result = FIELD_U8(a1, 156);
    if ( FIELD_U8(a1, 156) )
      return result;
    if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
    {
      result = 1;
LABEL_16:
      FIELD_U32(a1, 168) = result;
      return result;
    }
  }
  FIELD_U32(a1, 168) = 2;
  result = sub_60778128(dword_60CBFA90);
  if ( result )
    return result;
  if ( FIELD_U8(dword_60CC6D78, 109032) )
    return sub_60777D04(dword_60CBFA90, 2);
  if ( FIELD_U8(dword_60C9A1F0, 6519) )
    return sub_6078AFBC();
  result = sub_60777DB4((_DWORD *)dword_60CBFA90);
  if ( !result )
  {
    result = 0;
    goto LABEL_16;
  }
  return result;
}
