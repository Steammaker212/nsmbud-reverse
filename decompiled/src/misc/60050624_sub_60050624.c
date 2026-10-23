/* sub_60050624
 * address: 0x60050624   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60050624(_DWORD *a1)
{
  int result; // r0

  (*(void (__fastcall **)(_DWORD *))(*a1 + 1112))(a1);
  a1[76] = 0;
  a1[77] = 1094713344;
  a1[78] = 1094713344;
  a1[79] = 1094713344;
  a1[80] = 1;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 76))(a1);
  a1[1711] = 1103101952;
  a1[1712] = 1098907648;
  a1[1709] = 0;
  a1[1710] = 1098907648;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1216))(a1);
  result = a1[1792];
  *((_WORD *)a1 + 3138) = result;
  return result;
}
