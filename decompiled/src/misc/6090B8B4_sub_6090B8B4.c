/* sub_6090B8B4
 * address: 0x6090B8B4   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090B8B4(unsigned __int8 *a1, int a2)
{
  int result; // r0
  _BYTE v5[32]; // [sp+8h] [bp-20h] BYREF

  dword_60CC775C(v5, *a1);
  dword_60CC7760(v5, a1[1]);
  dword_60CC7764(v5, a1[88]);
  dword_60CC7768(v5, a1[3]);
  dword_60CC776C(v5, 3, a1[94]);
  dword_60CC7770(v5, 3, a1[91], a1[92], a1[93]);
  dword_60CC780C(FIELD_U32(a2, 192), v5);
  result = a1[3];
  if ( a1[3] )
  {
    dword_60CC78E4(FIELD_U32(a2, 192), 3, *((_DWORD *)a1 + 9));
    dword_60CC78E8(FIELD_U32(a2, 192), 3, 255);
    return dword_60CC78EC(FIELD_U32(a2, 192), 3, *((_DWORD *)a1 + 8));
  }
  return result;
}
