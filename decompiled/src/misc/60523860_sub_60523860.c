/* sub_60523860
 * address: 0x60523860   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60523860(int a1)
{
  _DWORD *v2; // r0
  unsigned int result; // r0
  int v4; // r0
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U8(a1, 3548) = 1;
  v2 = sub_603FD91C((_DWORD *)(dword_60C9A1F0 + 16), FIELD_U8(dword_60C9A1F0, 6558));
  result = sub_603FD93C((int)v2);
  switch ( result )
  {
    case 0u:
      v4 = sub_60523944(0);
      goto LABEL_6;
    case 1u:
      v4 = sub_60523944(1);
      goto LABEL_6;
    case 2u:
      v4 = sub_60523944(2);
      goto LABEL_6;
    case 3u:
      v4 = sub_60523944(3);
LABEL_6:
      v5[0] = &sead__SafeStringBase__vtable;
      v5[1] = v4;
      result = sub_60473DE4((_DWORD *)a1, 0, v5, 0);
      break;
    default:
      return result;
  }
  return result;
}
