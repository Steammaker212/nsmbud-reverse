/* sub_6059CC54
 * address: 0x6059CC54   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059CC54(int a1)
{
  int v1; // r2
  int v2; // r2
  int v3; // r1
  _BYTE *v4; // r4

  v1 = FIELD_U32(a1, 6100);
  if ( !v1 )
  {
    v4 = (_BYTE *)(a1 + 6420);
    v3 = FIELD_U8(a1, 6420);
    if ( (v3 & 1) != 0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v2 = v1 - 1;
  FIELD_U32(a1, 6100) = v2;
  v4 = (_BYTE *)(a1 + 6420);
  v3 = FIELD_U8(a1, 6420);
  if ( !v2 )
  {
    if ( (v3 & 1) != 0 )
    {
LABEL_10:
      *v4 = v3 | 1;
      return v3 | 1;
    }
LABEL_9:
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
    v3 = (unsigned __int8)*v4;
    goto LABEL_10;
  }
  if ( (v3 & 1) != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    LOBYTE(v3) = *v4;
  }
  *v4 = v3 & 0xFE;
  return v3 & 0xFE;
}
