/* sub_600213C4
 * address: 0x600213C4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600213C4(int a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r0
  _DWORD v6[7]; // [sp+4h] [bp-1Ch] BYREF

  v3 = FIELD_U32(a1, 8);
  switch ( v3 )
  {
    case 2:
      FIELD_U8(a1, 257) = 1;
      v4 = 2;
      goto LABEL_7;
    case 1:
      v4 = 1;
      goto LABEL_7;
    case 0:
      v4 = 0;
LABEL_7:
      *(_BYTE *)(a1 + 120 * v4 + 137) = 1;
      break;
  }
  v6[0] = a2[3];
  v6[1] = a2[7];
  v6[2] = a2[11];
  sub_60021460(a1 + 20, v6);
  sub_60021460(a1 + 140, v6);
  return sub_60021460(a1 + 260, v6);
}
