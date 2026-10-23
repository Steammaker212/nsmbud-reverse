/* sub_6099B034
 * address: 0x6099B034   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099B034(_DWORD *a1, int a2, int a3)
{
  _DWORD *v6; // r7
  int result; // r0
  _DWORD *v8; // r7
  int v9; // t1
  nn__fontll__ScalableFontEngine *v10; // r0
  int v11; // r1

  v6 = &a1[a3];
  v9 = v6[1060];
  v8 = v6 + 1060;
  result = v9;
  if ( v9 != a2 )
  {
    nn__fontll__ScalableFontEngine__SetFont(
      (nn__fontll__ScalableFontEngine *)(a1[2] + 180 * a3),
      (char *)(a1[3] + 50 * a2));
    nn__fontll__ScalableFontEngine__GetError((nn__fontll__ScalableFontEngine *)(a1[2] + 180 * a3));
    nn__fontll__ScalableFontEngine__SetBoldWeight(
      (nn__fontll__ScalableFontEngine *)(a1[2] + 180 * a3),
      *(_DWORD *)(a1[1075] + 4 * a2));
    nn__fontll__ScalableFontEngine__GetError((nn__fontll__ScalableFontEngine *)(a1[2] + 180 * a3));
    v10 = (nn__fontll__ScalableFontEngine *)(a1[2] + 180 * a3);
    if ( *(_BYTE *)(a1[1076] + a2) )
    {
      nn__fontll__ScalableFontEngine__SetOutlineWidth(v10, *(unsigned __int8 *)(a1[1076] + a2));
      v11 = 2;
      v10 = (nn__fontll__ScalableFontEngine *)(a1[2] + 180 * a3);
    }
    else
    {
      v11 = 0;
    }
    nn__fontll__ScalableFontEngine__SetFlags(v10, v11);
    result = nn__fontll__ScalableFontEngine__GetError((nn__fontll__ScalableFontEngine *)(a1[2] + 180 * a3));
    *v8 = a2;
  }
  return result;
}
