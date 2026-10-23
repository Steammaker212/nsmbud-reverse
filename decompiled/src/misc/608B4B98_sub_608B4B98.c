/* sub_608B4B98
 * address: 0x608B4B98   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4B98(int a1, int a2, int a3)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r5
  _DWORD *v8; // r0
  bool v9; // zf

  *(_DWORD *)a1 = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  v6 = (_DWORD *)sub_608B4E34(a1 + 12);
  FIELD_U8(a1, 16) = a3;
  if ( a3 == 1 )
  {
    *v6 = a2;
  }
  else if ( !a3
         && *(_DWORD *)a2 == 1447122758
         && FIELD_U16(a2, 4) == 65279
         && (unsigned int)(FIELD_U32(a2, 8) - 0x10000) <= 0x200 )
  {
    *(_DWORD *)a1 = a2;
    v7 = (_DWORD *)sub_608D4BE4(a2);
    v8 = (_DWORD *)sub_608D4C34(*(_DWORD *)a1);
    v9 = v7 == 0;
    if ( v7 )
      v9 = v8 == 0;
    if ( !v9 && *v7 == 1330007625 && *v8 == 1096040772 )
    {
      FIELD_U32(a1, 4) = v7 + 2;
      FIELD_U32(a1, 8) = v8 + 2;
      return a1;
    }
  }
  return a1;
}
