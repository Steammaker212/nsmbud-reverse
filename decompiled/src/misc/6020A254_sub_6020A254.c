/* sub_6020A254
 * address: 0x6020A254   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020A254(_DWORD *a1)
{
  unsigned int v2; // r1
  int v3; // r5
  _DWORD *v4; // r0
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  int result; // r0

  v2 = a1[79];
  v3 = (int)(a1 + 75);
  if ( v2 == 6 )
  {
    v4 = (_DWORD *)sub_601E0040((int)(a1 + 75));
    a1[20] = *v4;
    a1[21] = v4[1];
    v5 = v4[2];
LABEL_7:
    a1[22] = v5;
    goto LABEL_8;
  }
  v6 = FIELD_U32(dword_60CC6D78, 32);
  if ( v6 == 2 )
  {
    v8 = (_DWORD *)sub_601DFFE4(v3);
    a1[20] = v8[18];
    a1[21] = v8[19];
    v5 = v8[20];
    goto LABEL_7;
  }
  if ( v6 == 3 )
  {
    v7 = (_DWORD *)sub_601E039C(v3, v2);
    a1[20] = v7[18];
    a1[21] = v7[19];
    a1[22] = v7[20];
    a1[93] = v7;
    a1[77] = v7[24];
    a1[79] = 6;
    sub_60186FC0(dword_60CC6D78 + 984, a1[60], a1[88], v3);
  }
LABEL_8:
  a1[23] = a1[20];
  a1[24] = a1[21];
  result = a1[22];
  a1[25] = result;
  return result;
}
