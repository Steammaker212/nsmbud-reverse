/* sub_608CBD20
 * address: 0x608CBD20   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CBD20(_DWORD *a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r5
  char *v7; // r0
  char v8; // r1
  char v9; // r3
  char v10; // r6
  char v11; // r0

  v5 = sub_608D9768(a1[1], a3);
  v6 = sub_608D97A4(v5);
  *(float *)a2 = sub_608D9818();
  FIELD_U8(a2, 9) = sub_608D97E4(v6);
  FIELD_U8(a2, 10) = sub_608D97FC(v6);
  sub_608D9838(v6, a2 + 11, a2 + 12, 3);
  v7 = (char *)sub_608D98F4(v6);
  v8 = *v7;
  v9 = v7[2];
  v10 = v7[3];
  FIELD_U8(a2, 5) = v7[1];
  FIELD_U8(a2, 8) = v7[4];
  FIELD_U8(a2, 4) = v8;
  FIELD_U8(a2, 7) = v10;
  FIELD_U8(a2, 6) = v9;
  if ( *(_DWORD *)(*a1 + 8) < 0x10100u )
  {
    FIELD_U8(a2, 15) = 64;
    v11 = 0;
    FIELD_U8(a2, 16) = 0;
  }
  else
  {
    FIELD_U8(a2, 15) = sub_608D9980(v6);
    FIELD_U8(a2, 16) = sub_608D99AC(v6);
    v11 = sub_608D99DC(v6);
  }
  FIELD_U8(a2, 17) = v11;
  return 1;
}
