/* sub_608353C0
 * address: 0x608353C0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608353C0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  char v9; // r0
  char v10; // r1
  char v11; // r2
  _BYTE v13[88]; // [sp+0h] [bp-58h] BYREF

  dword_60CC7448(v13);
  dword_60CC7444(v13, *a2);
  dword_60CC744C(v13, *a4, a5, *a3);
  FIELD_U32(a1, 8) = a1 + 16;
  dword_60CC745C();
  v9 = dword_60CC7400(*a4);
  v10 = FIELD_U8(a1, 1);
  v11 = v10 & 0xFC;
  if ( (v9 & 4) != 0 )
    v11 = v10 | 2;
  FIELD_U8(a1, 1) = v11 & 0xFE;
  *(_BYTE *)a1 = 1;
  return 1;
}
