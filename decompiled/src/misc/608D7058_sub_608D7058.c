/* sub_608D7058
 * address: 0x608D7058   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D7058(int a1, unsigned __int8 *a2, char a3)
{
  int result; // r0

  *(_DWORD *)a1 = sub_608B4B88(*a2);
  FIELD_U32(a1, 4) = *((_DWORD *)a2 + 1);
  FIELD_U8(a1, 8) = a2[1];
  FIELD_U32(a1, 12) = *((_DWORD *)a2 + 2);
  FIELD_U32(a1, 16) = *((_DWORD *)a2 + 3);
  FIELD_U32(a1, 20) = *((_DWORD *)a2 + 17);
  FIELD_U32(a1, 24) = *((_DWORD *)a2 + 18);
  FIELD_U32(a1, 36) = *((_DWORD *)a2 + 6);
  FIELD_U32(a1, 40) = *((_DWORD *)a2 + 5);
  FIELD_U32(a1, 48) = *((_DWORD *)a2 + 8);
  FIELD_U32(a1, 44) = *((_DWORD *)a2 + 9);
  FIELD_U32(a1, 32) = *((_DWORD *)a2 + 19);
  FIELD_U8(a1, 28) = a3;
  result = a2[3];
  FIELD_U32(a1, 172) = result;
  return result;
}
