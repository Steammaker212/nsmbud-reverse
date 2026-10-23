/* sub_6051FF3C
 * address: 0x6051FF3C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051FF3C(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r1
  _DWORD *v6; // r4
  bool v7; // zf
  bool v8; // zf

  result = sub_607F6ABC(dword_60CC62E4);
  if ( result )
    return result;
  if ( FIELD_U8(a1, 15044) )
  {
LABEL_3:
    v3 = a1 + 40;
    return sub_6047459C(v3, 1u);
  }
  if ( sub_60502D80(a1 + 3708) != 1 )
  {
    v6 = (_DWORD *)(a1 + 40);
    result = sub_6047482C((int)v6, 1u);
    v7 = result == 0;
    if ( result )
    {
      result = FIELD_U8(result, 20);
      v7 = result == 0;
    }
    if ( !v7 )
      return result;
    return sub_60473DE4(v6, 1u, &dword_60CA8FE4, 1);
  }
  if ( (*(_DWORD *)(sub_608DE61C(a1 + 3760, 1) - FIELD_U32(a1, 3772) + 4) | 2) == 3 )
    goto LABEL_3;
  v4 = sub_608DE61C(a1 + 3760, 0);
  v5 = FIELD_U32(a1, 3772);
  v6 = (_DWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v4 - v5 + 4) | 2) == 3 )
  {
    v3 = (int)v6;
    return sub_6047459C(v3, 1u);
  }
  result = sub_6047482C((int)v6, 1u);
  v8 = result == 0;
  if ( result )
  {
    result = FIELD_U8(result, 20);
    v8 = result == 0;
  }
  if ( v8 )
    return sub_60473DE4(v6, 1u, &dword_60CA8FE4, 1);
  return result;
}
