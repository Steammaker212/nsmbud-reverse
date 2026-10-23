/* sub_605DDA14
 * address: 0x605DDA14   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DDA14(int a1, int a2)
{
  _BYTE *v4; // r6
  int result; // r0
  int v6; // r0
  unsigned int v7; // r0

  v4 = *(_BYTE **)(a1 + 64);
  if ( (v4[6263] & 0x10) != 0 )
    goto LABEL_5;
  if ( a2 )
  {
    if ( !FIELD_U32(a2, 136) )
    {
      v6 = FIELD_U32(a2, 64);
      if ( v6 )
      {
        v7 = FIELD_S8(v6, 84);
        if ( v7 <= 3 )
          v4[7144] |= 1 << v7;
      }
    }
  }
  if ( sub_605DDB40(v4, a1, a2) == 1 )
  {
LABEL_5:
    result = FIELD_U8(a1, 110) | 2;
    FIELD_U8(a1, 110) = result;
  }
  else
  {
    result = FIELD_U32(a2, 136);
    switch ( result )
    {
      case 0:
      case 15:
        result = (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)v4 + 220))(v4, a1, a2);
        break;
      case 2:
        result = (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)v4 + 232))(v4, a1, a2);
        break;
      case 3:
      case 10:
        result = (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)v4 + 228))(v4, a1, a2);
        break;
      case 9:
        result = (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)v4 + 224))(v4, a1, a2);
        break;
      default:
        return result;
    }
  }
  return result;
}
