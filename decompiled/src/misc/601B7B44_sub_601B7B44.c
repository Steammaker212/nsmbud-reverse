/* sub_601B7B44
 * address: 0x601B7B44   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_601B7B44()
{
  int v0; // r4
  _BOOL4 result; // r0
  bool v2; // zf
  _DWORD v3[3]; // [sp+0h] [bp-20h] BYREF
  int v4; // [sp+Ch] [bp-14h] BYREF
  int v5; // [sp+10h] [bp-10h]
  int v6; // [sp+14h] [bp-Ch]

  v0 = sub_601CF9C0(dword_60C8AEF0);
  v4 = -1;
  v5 = -1;
  v6 = -1;
  sub_6019EC34(&v4, (_DWORD *)(v0 + 1056));
  result = 0;
  if ( v4 != -1 )
  {
    v2 = v5 == -1;
    if ( v5 != -1 )
      v2 = v6 == -1;
    if ( !v2 )
    {
      memset(v3, 255, sizeof(v3));
      sub_6019EC34(v3, (_DWORD *)(v0 + 1068));
      return !sub_601DA01C(v3) && sub_601DA01C(&v4) != 0;
    }
  }
  return result;
}
