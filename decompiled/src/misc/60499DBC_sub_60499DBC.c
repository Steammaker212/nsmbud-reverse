/* sub_60499DBC
 * address: 0x60499DBC   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60499DBC(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r6
  int v5; // r6
  int v6; // r6
  int v7; // r6
  int v8; // r4
  int result; // r0

  if ( FIELD_U8(a1, 146844) )
  {
    v2 = sub_60834614();
    v3 = FIELD_U32(a1, 128724);
    if ( v3 != sub_603FCFF8(v2, 0)
      || (v4 = FIELD_U32(a1, 128728), v4 != sub_603FCFF8(v2, 1))
      || (v5 = FIELD_U32(a1, 128732), v5 != sub_603FCFF8(v2, 2))
      || (v6 = FIELD_U32(a1, 128736), v6 != sub_603FCFF8(v2, 3))
      || (v7 = FIELD_U32(a1, 128740), v7 != sub_603FCFF8(v2, 4))
      || (v8 = FIELD_U32(a1, 128744), result = sub_603FCFF8(v2, 5), v8 != result) )
    {
      result = *(_DWORD *)(sub_60834614() + 492);
      switch ( result )
      {
        case 0:
          result = sub_6082B568(dword_60CC6E04);
          break;
        case 1:
          result = sub_6082B598(dword_60CC6E04);
          break;
        case 2:
          result = sub_6082B628(dword_60CC6E04);
          break;
        case 4:
          result = sub_6082B5F8(dword_60CC6E04);
          break;
        default:
          return result;
      }
    }
  }
  else
  {
    result = FIELD_U32(a1, 146864);
    if ( result && FIELD_U32(a1, 146860) != result )
    {
      if ( dword_60C99DD4 )
      {
        return sub_6082B508(dword_60CC6E04);
      }
      else
      {
        result = *(_DWORD *)(sub_60834614() + 492);
        if ( !result )
          return sub_6082B538(dword_60CC6E04);
      }
    }
  }
  return result;
}
