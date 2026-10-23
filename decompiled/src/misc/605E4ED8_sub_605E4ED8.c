/* sub_605E4ED8
 * address: 0x605E4ED8   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E4ED8(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  bool v5; // zf
  int v6; // r2
  int v7; // r2
  int result; // r0
  _BYTE *v9; // r0

  if ( (FIELD_U8(a1, 6268) & 4) != 0 || (FIELD_U8(a1, 6265) & 0x20) != 0 || (FIELD_U8(a1, 6260) & 2) != 0 )
  {
    v2 = 0;
    FIELD_U8(a1, 7788) = 0;
  }
  else if ( sub_605DBF54(a1) )
  {
    v2 = 0;
    FIELD_U8(a1, 7788) = 0;
    if ( sub_605DBF54(a1) && ((int (__fastcall *)(int))loc_605E516C)(a1) != -1 )
    {
      sub_605E52E4(a1, 28);
      v2 = 1;
    }
  }
  else
  {
    v9 = (_BYTE *)(a1 + 7788);
    if ( (FIELD_U8(a1, 6261) & 4) != 0 )
    {
      v2 = 0;
      if ( !*v9 )
        v2 = sub_605E5044(a1);
    }
    else
    {
      v2 = 0;
      *v9 = 0;
    }
  }
  v3 = FIELD_U32(a1, 7776);
  if ( v3 == -1 )
    goto LABEL_15;
  v4 = FIELD_U32(a1, 7780);
  v5 = v4 == -1;
  if ( v4 != -1 )
    v5 = v3 == 28;
  if ( v5 || (v6 = FIELD_U32(a1, 7784)) != 0 && (v7 = v6 - 1, (FIELD_U32(a1, 7784) = v7) != 0) )
  {
LABEL_15:
    result = v2 | (v3 == -1);
    if ( result )
      return result;
  }
  else
  {
    FIELD_U8(a1, 7788) = 1;
  }
  result = FIELD_U32(a1, 7780);
  if ( result != -1 )
    return sub_605E540C(a1);
  return result;
}
