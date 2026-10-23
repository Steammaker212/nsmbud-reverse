/* sub_608D7794
 * address: 0x608D7794   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D7794(int a1)
{
  _DWORD *v2; // r4
  char v3; // r7
  int v4; // r5
  int v5; // r0
  char v6; // r0

  v2 = sub_608C3B98();
  v3 = 0;
  v4 = sub_608C2698((int)v2, 88);
  FIELD_U32(v4, 4) = 53;
  FIELD_U32(v4, 16) = FIELD_U32(a1, 20);
  FIELD_U16(v4, 86) = FIELD_U16(a1, 52);
  v5 = FIELD_U32(a1, 32);
  if ( v5 == 1 )
  {
    v6 = sub_608D7A80(a1, v4, 1, *(const char **)(a1 + 36));
    goto LABEL_5;
  }
  if ( !v5 )
  {
    v6 = sub_608D7830(a1, v4);
LABEL_5:
    v3 = v6;
  }
  FIELD_U8(v4, 84) = v3;
  sub_608C2C1C(v2, (_DWORD *)v4);
  return sub_608C2A9C(v2, 1);
}
